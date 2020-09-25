#ifndef SKELETON_HEADER
#define SKELETON_HEADER
/* You might want to change the above name. */

#include "Absyn.H"


class Skeleton : public Visitor
{
public:
  void visitFifth(Fifth *p);
  void visitModuleImport(ModuleImport *p);
  void visitFunctionDeclaration(FunctionDeclaration *p);
  void visitFormalParameter(FormalParameter *p);
  void visitParamType(ParamType *p);
  void visitParamName(ParamName *p);
  void visitFunctionName(FunctionName *p);
  void visitPackageName(PackageName *p);
  void visitExp(Exp *p);
  void visitFifthProgram(FifthProgram *p);
  void visitModImp(ModImp *p);
  void visitFuncDecl(FuncDecl *p);
  void visitFParam(FParam *p);
  void visitTParam(TParam *p);
  void visitNParam(NParam *p);
  void visitNFunc(NFunc *p);
  void visitNPkg(NPkg *p);
  void visitEAdd(EAdd *p);
  void visitESub(ESub *p);
  void visitEMul(EMul *p);
  void visitEDiv(EDiv *p);
  void visitEInt(EInt *p);
  void visitEDouble(EDouble *p);
  void visitEIdent(EIdent *p);
  void visitListModuleImport(ListModuleImport *p);
  void visitListFunctionDeclaration(ListFunctionDeclaration *p);
  void visitListFormalParameter(ListFormalParameter *p);
  void visitListExp(ListExp *p);

  void visitInteger(Integer x);
  void visitChar(Char x);
  void visitDouble(Double x);
  void visitString(String x);
  void visitIdent(Ident x);

};


#endif
