# GLOBAL STUFF
DIROUT=_build
DIRSRC=src
DIRBNFC=$(DIRSRC)/gen

# C++ STUFF
CC=g++
CCARGS = -std=c++14 -stdlib=libc++ -g
OUT=fifth

# BNFC STUFF
BNFC=/usr/local/bin/bnfc
BNFCARGS=-m -o $(DIRBNFC) --cpp -l
BNFC_FILE=$(DIRSRC)/fifth.cf
BNFC_GEN_OBJS = $(DIRBNFC)/Absyn.o $(DIRBNFC)/Lexer.o $(DIRBNFC)/Parser.o $(DIRBNFC)/Printer.o
BNFC_GEN_CPP = $(DIRBNFC)/Absyn.C $(DIRBNFC)/Lexer.C $(DIRBNFC)/Parser.C $(DIRBNFC)/Printer.C $(DIRBNFC)/Skeleton.C $(DIRBNFC)/Test.C
BNFC_GEN_INCLUDE = $(DIRBNFC)/Absyn.H $(DIRBNFC)/Parser.H $(DIRBNFC)/Printer.H $(DIRBNFC)/Skeleton.H

# FLEX STUFF
FLEX=/opt/local/bin/flex
FLEXARGS=--c++
LEXER_FILE=$(DIRSRC)/fifth.l

# BISON STUFF
BISON=/opt/local/bin/bison
BISONARGS=--language=c++ -d
PARSER_FILE=$(DIRSRC)/fifth.y

.PHONY: all test

all: $(DIROUT)/$(OUT)
test: $(DIRBNFC)/Test$(OUT)
	$(DIRBNFC)/Test$(OUT) test/examples/test1.5th

$(DIRBNFC)/Test$(OUT): $(DIRBNFC)/fifth.y

$(DIROUT):
	-mkdir -p $@
$(DIRBNFC):
	-mkdir -p $@

$(DIROUT)/$(OUT): $(DIROUT) $(DIRBNFC)/fifth.y
	$(CC) $(CCARGS) -o $(@) $(DIRSRC)/fifth.cpp

clean:
	-rm -rf $(DIROUT)
	-rm -rf $(DIRBNFC)
	
	# -rm $(BNFC_GEN_OBJS) $(BNFC_GEN_CPP) $(BNFC_GEN_INCLUDE)

parser: $(BNFC_GEN_OBJS)

# $(BNFC_GEN_OBJS): $(DIRBNFC) $(BNFC_GEN_CPP) $(BNFC_GEN_INCLUDE)
# 	cd $(DIRBNFC) && \
# 	$(MAKE) 
# $(BNFC_GEN_CPP): $(DIRBNFC) $(BNFC_FILE)
# $(BNFC_GEN_INCLUDE): $(DIRBNFC) $(BNFC_FILE)

$(DIRBNFC)/fifth.y: $(BNFC_FILE)
	$(BNFC) $(BNFCARGS)  $<
	cd $(DIRBNFC) && $(MAKE) -f Makefile all
