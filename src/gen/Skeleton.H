#ifndef SKELETON_HEADER
#define SKELETON_HEADER
/* You might want to change the above name. */

#include "Absyn.H"


class Skeleton : public Visitor
{
public:
  void visitFifth(Fifth *p);
  void visitAlias(Alias *p);
  void visitBlock(Block *p);
  void visitFormalParameter(FormalParameter *p);
  void visitFunctionDeclaration(FunctionDeclaration *p);
  void visitFunctionName(FunctionName *p);
  void visitModuleImport(ModuleImport *p);
  void visitPackageName(PackageName *p);
  void visitParamName(ParamName *p);
  void visitParamType(ParamType *p);
  void visitQFunctionName(QFunctionName *p);
  void visitStatement(Statement *p);
  void visitUriConstant(UriConstant *p);
  void visitVarName(VarName *p);
  void visitQVarName(QVarName *p);
  void visitExp(Exp *p);
  void visitTypeInitialiser(TypeInitialiser *p);
  void visitTypeName(TypeName *p);
  void visitTypePropertyInit(TypePropertyInit *p);
  void visitFifthProgram(FifthProgram *p);
  void visitAliasUri(AliasUri *p);
  void visitBlk(Blk *p);
  void visitFParam(FParam *p);
  void visitFuncDecl(FuncDecl *p);
  void visitNFunc(NFunc *p);
  void visitModImp(ModImp *p);
  void visitNPkg(NPkg *p);
  void visitNParam(NParam *p);
  void visitTParam(TParam *p);
  void visitNQFunc(NQFunc *p);
  void visitSAssign(SAssign *p);
  void visitSReturn(SReturn *p);
  void visitSIf(SIf *p);
  void visitSIfElse(SIfElse *p);
  void visitSWith(SWith *p);
  void visitSBareStmt(SBareStmt *p);
  void visitUriConst(UriConst *p);
  void visitVarNameIdent(VarNameIdent *p);
  void visitVarNamePIdent(VarNamePIdent *p);
  void visitVarNameUIdent(VarNameUIdent *p);
  void visitQVarName1(QVarName1 *p);
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
  void visitTypeInt(TypeInt *p);
  void visitNTypeName(NTypeName *p);
  void visitTypePropertyInit1(TypePropertyInit1 *p);
  void visitListFormalParameter(ListFormalParameter *p);
  void visitListExp(ListExp *p);
  void visitListTypePropertyInit(ListTypePropertyInit *p);
  void visitListVarName(ListVarName *p);
  void visitListAlias(ListAlias *p);
  void visitListFunctionDeclaration(ListFunctionDeclaration *p);
  void visitListModuleImport(ListModuleImport *p);
  void visitListStatement(ListStatement *p);

  void visitUIdent(UIdent x);
  void visitPIdent(PIdent x);
  void visitInteger(Integer x);
  void visitChar(Char x);
  void visitDouble(Double x);
  void visitString(String x);
  void visitIdent(Ident x);

};


#endif
