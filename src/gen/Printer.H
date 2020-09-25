#ifndef PRINTER_HEADER
#define PRINTER_HEADER

#include "Absyn.H"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* Certain applications may improve performance by changing the buffer size */
#define BUFFER_INITIAL 2000
/* You may wish to change _L_PAREN or _R_PAREN */
#define _L_PAREN '('
#define _R_PAREN ')'

class PrintAbsyn : public Visitor
{
 protected:
  int _n_, _i_;
  /* The following are simple heuristics for rendering terminals */
  /* You may wish to change them */
  void render(Char c);
  void render(String s);
  void render(const char *s);
  void indent(void);
  void backup(void);
 public:
  PrintAbsyn(void);
  ~PrintAbsyn(void);
  char *print(Visitable *v);

  void visitFifth(Fifth *p); /* abstract class */
  void visitFifthProgram(FifthProgram *p);
  void visitAlias(Alias *p); /* abstract class */
  void visitAliasUri(AliasUri *p);
  void visitBlock(Block *p); /* abstract class */
  void visitBlk(Blk *p);
  void visitFormalParameter(FormalParameter *p); /* abstract class */
  void visitFParam(FParam *p);
  void visitFunctionDeclaration(FunctionDeclaration *p); /* abstract class */
  void visitFuncDecl(FuncDecl *p);
  void visitFunctionName(FunctionName *p); /* abstract class */
  void visitNFunc(NFunc *p);
  void visitModuleImport(ModuleImport *p); /* abstract class */
  void visitModImp(ModImp *p);
  void visitPackageName(PackageName *p); /* abstract class */
  void visitNPkg(NPkg *p);
  void visitParamName(ParamName *p); /* abstract class */
  void visitNParam(NParam *p);
  void visitParamType(ParamType *p); /* abstract class */
  void visitTParam(TParam *p);
  void visitQFunctionName(QFunctionName *p); /* abstract class */
  void visitNQFunc(NQFunc *p);
  void visitStatement(Statement *p); /* abstract class */
  void visitSAssign(SAssign *p);
  void visitSReturn(SReturn *p);
  void visitSIf(SIf *p);
  void visitSIfElse(SIfElse *p);
  void visitSWith(SWith *p);
  void visitSBareStmt(SBareStmt *p);
  void visitUriConstant(UriConstant *p); /* abstract class */
  void visitUriConst(UriConst *p);
  void visitVarName(VarName *p); /* abstract class */
  void visitVarNameIdent(VarNameIdent *p);
  void visitVarNamePIdent(VarNamePIdent *p);
  void visitVarNameUIdent(VarNameUIdent *p);
  void visitQVarName(QVarName *p); /* abstract class */
  void visitQVarName1(QVarName1 *p);
  void visitExp(Exp *p); /* abstract class */
  void visitEAnd(EAnd *p);
  void visitEAdd(EAdd *p);
  void visitESub(ESub *p);
  void visitEMul(EMul *p);
  void visitEDiv(EDiv *p);
  void visitEInt(EInt *p);
  void visitEDouble(EDouble *p);
  void visitEString(EString *p);
  void visitEVarname(EVarname *p);
  void visitEFuncCall(EFuncCall *p);
  void visitEQFuncCall(EQFuncCall *p);
  void visitEFuncParen(EFuncParen *p);
  void visitENegation(ENegation *p);
  void visitETypeCreate(ETypeCreate *p);
  void visitTypeInitialiser(TypeInitialiser *p); /* abstract class */
  void visitTypeInt(TypeInt *p);
  void visitTypeName(TypeName *p); /* abstract class */
  void visitNTypeName(NTypeName *p);
  void visitTypePropertyInit(TypePropertyInit *p); /* abstract class */
  void visitTypePropertyInit1(TypePropertyInit1 *p);
  void visitListFormalParameter(ListFormalParameter *p);
  void visitListExp(ListExp *p);
  void visitListTypePropertyInit(ListTypePropertyInit *p);
  void visitListVarName(ListVarName *p);
  void visitListAlias(ListAlias *p);
  void visitListFunctionDeclaration(ListFunctionDeclaration *p);
  void visitListModuleImport(ListModuleImport *p);
  void visitListStatement(ListStatement *p);

  void visitInteger(Integer i);
  void visitDouble(Double d);
  void visitChar(Char c);
  void visitString(String s);
  void visitIdent(String s);
  void visitUIdent(String s);
  void visitPIdent(String s);
 protected:
  char *buf_;
  int cur_, buf_size;

  void inline bufAppend(const char *s)
  {
    int len = strlen(s);
    while (cur_ + len >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
    }
    resizeBuffer();
    for(int n = 0; n < len; n++)
    {
      buf_[cur_ + n] = s[n];
    }
    cur_ += len;
    buf_[cur_] = 0;
  }

  void inline bufAppend(const char c)
  {
    if (cur_ >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    buf_[cur_] = c;
    cur_++;
    buf_[cur_] = 0;
  }

  void inline bufAppend(String str)
  {
    const char *s = str.c_str();
    bufAppend(s);
  }
  void inline bufReset(void)
  {
    if (buf_) free(buf_);
    buf_size = BUFFER_INITIAL;
    buf_ = (char *) malloc(buf_size);
    if (!buf_) {
      fprintf(stderr, "Error: Out of memory while allocating buffer!\n");
      exit(1);
    }
    memset(buf_, 0, buf_size);
    cur_ = 0;
  }

  void inline resizeBuffer(void)
  {
    char *temp = (char *) malloc(buf_size);
    if (!temp)
    {
      fprintf(stderr, "Error: Out of memory while attempting to grow buffer!\n");
      exit(1);
    }
    if (buf_)
    {
      strcpy(temp, buf_);
      free(buf_);
    }
    buf_ = temp;
  }
};



class ShowAbsyn : public Visitor
{
 public:
  ShowAbsyn(void);
  ~ShowAbsyn(void);
  char *show(Visitable *v);

  void visitFifth(Fifth *p); /* abstract class */
  void visitFifthProgram(FifthProgram *p);
  void visitAlias(Alias *p); /* abstract class */
  void visitAliasUri(AliasUri *p);
  void visitBlock(Block *p); /* abstract class */
  void visitBlk(Blk *p);
  void visitFormalParameter(FormalParameter *p); /* abstract class */
  void visitFParam(FParam *p);
  void visitFunctionDeclaration(FunctionDeclaration *p); /* abstract class */
  void visitFuncDecl(FuncDecl *p);
  void visitFunctionName(FunctionName *p); /* abstract class */
  void visitNFunc(NFunc *p);
  void visitModuleImport(ModuleImport *p); /* abstract class */
  void visitModImp(ModImp *p);
  void visitPackageName(PackageName *p); /* abstract class */
  void visitNPkg(NPkg *p);
  void visitParamName(ParamName *p); /* abstract class */
  void visitNParam(NParam *p);
  void visitParamType(ParamType *p); /* abstract class */
  void visitTParam(TParam *p);
  void visitQFunctionName(QFunctionName *p); /* abstract class */
  void visitNQFunc(NQFunc *p);
  void visitStatement(Statement *p); /* abstract class */
  void visitSAssign(SAssign *p);
  void visitSReturn(SReturn *p);
  void visitSIf(SIf *p);
  void visitSIfElse(SIfElse *p);
  void visitSWith(SWith *p);
  void visitSBareStmt(SBareStmt *p);
  void visitUriConstant(UriConstant *p); /* abstract class */
  void visitUriConst(UriConst *p);
  void visitVarName(VarName *p); /* abstract class */
  void visitVarNameIdent(VarNameIdent *p);
  void visitVarNamePIdent(VarNamePIdent *p);
  void visitVarNameUIdent(VarNameUIdent *p);
  void visitQVarName(QVarName *p); /* abstract class */
  void visitQVarName1(QVarName1 *p);
  void visitExp(Exp *p); /* abstract class */
  void visitEAnd(EAnd *p);
  void visitEAdd(EAdd *p);
  void visitESub(ESub *p);
  void visitEMul(EMul *p);
  void visitEDiv(EDiv *p);
  void visitEInt(EInt *p);
  void visitEDouble(EDouble *p);
  void visitEString(EString *p);
  void visitEVarname(EVarname *p);
  void visitEFuncCall(EFuncCall *p);
  void visitEQFuncCall(EQFuncCall *p);
  void visitEFuncParen(EFuncParen *p);
  void visitENegation(ENegation *p);
  void visitETypeCreate(ETypeCreate *p);
  void visitTypeInitialiser(TypeInitialiser *p); /* abstract class */
  void visitTypeInt(TypeInt *p);
  void visitTypeName(TypeName *p); /* abstract class */
  void visitNTypeName(NTypeName *p);
  void visitTypePropertyInit(TypePropertyInit *p); /* abstract class */
  void visitTypePropertyInit1(TypePropertyInit1 *p);
  void visitListFormalParameter(ListFormalParameter *p);
  void visitListExp(ListExp *p);
  void visitListTypePropertyInit(ListTypePropertyInit *p);
  void visitListVarName(ListVarName *p);
  void visitListAlias(ListAlias *p);
  void visitListFunctionDeclaration(ListFunctionDeclaration *p);
  void visitListModuleImport(ListModuleImport *p);
  void visitListStatement(ListStatement *p);

  void visitInteger(Integer i);
  void visitDouble(Double d);
  void visitChar(Char c);
  void visitString(String s);
  void visitIdent(String s);
  void visitUIdent(String s);
  void visitPIdent(String s);
 protected:
  char *buf_;
  int cur_, buf_size;

  void inline bufAppend(const char *s)
  {
    int len = strlen(s);
    while (cur_ + len >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
    }
    resizeBuffer();
    for(int n = 0; n < len; n++)
    {
      buf_[cur_ + n] = s[n];
    }
    cur_ += len;
    buf_[cur_] = 0;
  }

  void inline bufAppend(const char c)
  {
    if (cur_ >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    buf_[cur_] = c;
    cur_++;
    buf_[cur_] = 0;
  }

  void inline bufAppend(String str)
  {
    const char *s = str.c_str();
    bufAppend(s);
  }
  void inline bufReset(void)
  {
    if (buf_) free(buf_);
    buf_size = BUFFER_INITIAL;
    buf_ = (char *) malloc(buf_size);
    if (!buf_) {
      fprintf(stderr, "Error: Out of memory while allocating buffer!\n");
      exit(1);
    }
    memset(buf_, 0, buf_size);
    cur_ = 0;
  }

  void inline resizeBuffer(void)
  {
    char *temp = (char *) malloc(buf_size);
    if (!temp)
    {
      fprintf(stderr, "Error: Out of memory while attempting to grow buffer!\n");
      exit(1);
    }
    if (buf_)
    {
      strcpy(temp, buf_);
      free(buf_);
    }
    buf_ = temp;
  }
};




#endif

