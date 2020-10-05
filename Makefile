# GLOBAL STUFF
DIROUT=_build
DIRAPP=apps
DIRINC=include
DIRSRC=src
DIRBNFC=$(DIRSRC)/gen

# C++ STUFF
CC=/opt/local/bin/g++-mp-10
CCARGS = -std=c++20 -g
OUT=fifth

# BNFC STUFF
BNFC=/usr/local/bin/bnfc
BNFCARGS=-m -o $(DIRBNFC) --cpp -l
BNFC_FILE=$(DIRSRC)/fifth.cf
BNFC_GEN_OBJS = $(DIRBNFC)/Absyn.o $(DIRBNFC)/Lexer.o $(DIRBNFC)/Parser.o $(DIRBNFC)/Printer.o
BNFC_GEN_CPP = $(DIRBNFC)/Absyn.C $(DIRBNFC)/Lexer.C $(DIRBNFC)/Parser.C $(DIRBNFC)/Printer.C $(DIRBNFC)/Skeleton.C $(DIRBNFC)/Test.C
BNFC_GEN_INCLUDE = $(DIRBNFC)/Absyn.H $(DIRBNFC)/Parser.H $(DIRBNFC)/Printer.H $(DIRBNFC)/Skeleton.H

INC_FILES = $(wildcard include/*.hpp)
SRC_FILES = $(wildcard src/*.cpp)
OBJ_FILES = $(SRC_FILES:$(DIRSRC)/%.cpp=$(DIROUT)/%.o)
TEST_FILES = $(wildcard test/examples/*.5th)

.PHONY: all test clean testparser retest test

all: $(DIROUT)/$(OUT)
testparser: $(DIRBNFC)/Test$(OUT) $(TEST_FILES)
	@echo 
	@echo "------------------------"
	$(DIRBNFC)/Test$(OUT) test/examples/test1.5th
	@echo 
	@echo "------------------------"
	$(DIRBNFC)/Test$(OUT) test/examples/test2.5th
	@echo 
	@echo "------------------------"
	$(DIRBNFC)/Test$(OUT) test/examples/test3.coa.5th

retest: $(TEST_FILES)

test/examples/%.5th: $(DIRBNFC)/Test$(OUT)
	$<  $@

$(DIRBNFC)/Test$(OUT): $(DIRBNFC)/fifth.y

$(DIROUT):
	-mkdir -p $@
$(DIRBNFC):
	-mkdir -p $@

$(DIROUT)/$(OUT): $(DIROUT) $(DIRBNFC)/Test$(OUT)
	$(CC) $(CCARGS) -o $(@) -I ${DIRINC} $(DIRAPP)/app.cpp

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

$(OBJ_FILES): $(DIROUT) $(SRC_FILES) $(INC_FILES)

$(DIROUT)/%.o: $(DIRSRC)/%.cpp $(DIRINC)/%.hpp
	$(CC) $(CCARGS) -o $@ -c -I ${DIRINC} $<

$(DIRBNFC)/fifth.y: $(BNFC_FILE)
	$(BNFC) $(BNFCARGS)  $<
	cd $(DIRBNFC) && $(MAKE) -f Makefile all

$(DIROUT)/unittest: $(OBJ_FILES)
	$(CC) $(CCARGS) -o $(@) -I ${DIRINC} test/EnvTest.cpp  test/function_wrapper_test.cpp $(OBJ_FILES)

test: $(DIROUT)/unittest testparser
	$<
