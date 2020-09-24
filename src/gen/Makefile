CC=g++
CCFLAGS=-g -W -Wall

FLEX=flex
FLEX_OPTS=-Pfifth

BISON=bison
BISON_OPTS=-t -pfifth

OBJS=Absyn.o Lexer.o Parser.o Printer.o

.PHONY : clean distclean

all : Testfifth

clean :
	rm -f *.o Testfifth fifth.aux fifth.log fifth.pdf fifth.dvi fifth.ps fifth

distclean : clean
	rm -f Absyn.C Absyn.H Test.C Parser.C Parser.H Lexer.C Skeleton.C Skeleton.H Printer.C Printer.H Makefile fifth.l fifth.y fifth.tex

Testfifth : ${OBJS} Test.o
	@echo "Linking Testfifth..."
	${CC} ${CCFLAGS} ${OBJS} Test.o -o Testfifth

Absyn.o : Absyn.C Absyn.H
	${CC} ${CCFLAGS} -c Absyn.C

Lexer.C : fifth.l
	${FLEX} -oLexer.C fifth.l

Parser.C : fifth.y
	${BISON} fifth.y -o Parser.C

Lexer.o : Lexer.C Parser.H
	${CC} ${CCFLAGS} -c Lexer.C

Parser.o : Parser.C Absyn.H
	${CC} ${CCFLAGS} -c Parser.C

Printer.o : Printer.C Printer.H Absyn.H
	${CC} ${CCFLAGS} -c Printer.C

Skeleton.o : Skeleton.C Skeleton.H Absyn.H
	${CC} ${CCFLAGS} -Wno-unused-parameter -c Skeleton.C

Test.o : Test.C Parser.H Printer.H Absyn.H
	${CC} ${CCFLAGS} -c Test.C
