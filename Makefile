# GLOBAL STUFF
DIROUT=_build
DIRSRC=src

# C++ STUFF
CC=g++
CCARGS = -std=c++14 -stdlib=libc++ -g
OUT=fifth

# FLEX STUFF
FLEX=/opt/local/bin/flex
FLEXARGS=--c++
LEXER_FILE=$(DIRSRC)/fifth.l

# BISON STUFF
BISON=/opt/local/bin/bison
BISONARGS=--language=c++ -d
PARSER_FILE=$(DIRSRC)/fifth.y

.PHONY: all

all: $(DIROUT)/$(OUT)

$(DIROUT):
	-mkdir -p $@

$(DIROUT)/$(OUT): $(DIROUT)
	$(CC) $(CCARGS) -o $(@) $(DIRSRC)/fifth.cpp

clean:
	-rm -rf $(DIROUT)

parser: $(DIROUT)/fifth.tab.o $(DIROUT)/fifth.yy.o

$(DIROUT)/fifth.tab.o: $(DIRSRC)/fifth.tab.cc $(DIRSRC)/fifth.tab.hh
	$(CC) $(CCARGS) -o $(@) $< 

$(DIROUT)/fifth.yy.o: $(DIRSRC)/fifth.yy.cc
	$(CC) $(CCARGS) -o $(@) $< 

$(DIRSRC)/fifth.tab.cc $(DIRSRC)/fifth.tab.hh: $(PARSER_FILE)
	$(BISON) $(BISONARGS) $^ && \
	mv fifth.tab.* $(DIRSRC)

$(DIRSRC)/fifth.yy.cc: $(LEXER_FILE)
	$(FLEX) $(FLEXARGS) -o $@ $^