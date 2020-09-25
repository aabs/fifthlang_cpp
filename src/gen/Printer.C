/*** BNFC-Generated Pretty Printer and Abstract Syntax Viewer ***/

#include <string>
#include "Printer.H"
#define INDENT_WIDTH 2


//You may wish to change render
void PrintAbsyn::render(Char c)
{
  if (c == '{')
  {
     bufAppend('\n');
     indent();
     bufAppend(c);
     _n_ = _n_ + INDENT_WIDTH;
     bufAppend('\n');
     indent();
  }
  else if (c == '(' || c == '[')
     bufAppend(c);
  else if (c == ')' || c == ']')
  {
     backup();
     bufAppend(c);
  }
  else if (c == '}')
  {
     int t;
     _n_ = _n_ - INDENT_WIDTH;
     for (t=0; t<INDENT_WIDTH; t++) {
       backup();
     }
     bufAppend(c);
     bufAppend('\n');
     indent();
  }
  else if (c == ',')
  {
     backup();
     bufAppend(c);
     bufAppend(' ');
  }
  else if (c == ';')
  {
     backup();
     bufAppend(c);
     bufAppend('\n');
     indent();
  }
  else if (c == 0) return;
  else
  {
     bufAppend(' ');
     bufAppend(c);
     bufAppend(' ');
  }
}

void PrintAbsyn::render(String s_)
{
  const char *s = s_.c_str() ;
  if(strlen(s) > 0)
  {
    bufAppend(s);
    bufAppend(' ');
  }
}
void PrintAbsyn::render(const char *s)
{
  if(strlen(s) > 0)
  {
    bufAppend(s);
    bufAppend(' ');
  }
}

void PrintAbsyn::indent()
{
  int n = _n_;
  while (n > 0)
  {
    bufAppend(' ');
    n--;
  }
}

void PrintAbsyn::backup()
{
  if (buf_[cur_ - 1] == ' ')
  {
    buf_[cur_ - 1] = 0;
    cur_--;
  }
}

PrintAbsyn::PrintAbsyn(void)
{
  _i_ = 0; _n_ = 0;
  buf_ = 0;
  bufReset();
}

PrintAbsyn::~PrintAbsyn(void)
{
}

char *PrintAbsyn::print(Visitable *v)
{
  _i_ = 0; _n_ = 0;
  bufReset();
  v->accept(this);
  return buf_;
}

void PrintAbsyn::visitFifth(Fifth *p) {} //abstract class

void PrintAbsyn::visitFifthProgram(FifthProgram *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listmoduleimport_) {_i_ = 0; p->listmoduleimport_->accept(this);}
  if(p->listalias_) {_i_ = 0; p->listalias_->accept(this);}
  if(p->liststatement_) {_i_ = 0; p->liststatement_->accept(this);}
  if(p->listfunctiondeclaration_) {_i_ = 0; p->listfunctiondeclaration_->accept(this);}

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitAlias(Alias *p) {} //abstract class

void PrintAbsyn::visitAliasUri(AliasUri *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("alias");
  _i_ = 0; p->uriconstant_->accept(this);
  render("as");
  _i_ = 0; p->packagename_->accept(this);
  render(';');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitBlock(Block *p) {} //abstract class

void PrintAbsyn::visitBlk(Blk *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('{');
  if(p->liststatement_) {_i_ = 0; p->liststatement_->accept(this);}
  render('}');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitFormalParameter(FormalParameter *p) {} //abstract class

void PrintAbsyn::visitFParam(FParam *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->paramtype_->accept(this);
  _i_ = 0; p->paramname_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitFunctionDeclaration(FunctionDeclaration *p) {} //abstract class

void PrintAbsyn::visitFuncDecl(FuncDecl *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->functionname_->accept(this);
  render('(');
  if(p->listformalparameter_) {_i_ = 0; p->listformalparameter_->accept(this);}
  render(')');
  _i_ = 0; p->block_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitFunctionName(FunctionName *p) {} //abstract class

void PrintAbsyn::visitNFunc(NFunc *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  visitIdent(p->ident_);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitModuleImport(ModuleImport *p) {} //abstract class

void PrintAbsyn::visitModImp(ModImp *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("use");
  _i_ = 0; p->packagename_->accept(this);
  render(';');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPackageName(PackageName *p) {} //abstract class

void PrintAbsyn::visitNPkg(NPkg *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  visitIdent(p->ident_);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitParamName(ParamName *p) {} //abstract class

void PrintAbsyn::visitNParam(NParam *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->varname_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitParamType(ParamType *p) {} //abstract class

void PrintAbsyn::visitTParam(TParam *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->typename_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitQFunctionName(QFunctionName *p) {} //abstract class

void PrintAbsyn::visitNQFunc(NQFunc *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->packagename_->accept(this);
  render('.');
  _i_ = 0; p->functionname_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitStatement(Statement *p) {} //abstract class

void PrintAbsyn::visitSAssign(SAssign *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->qvarname_->accept(this);
  render('=');
  _i_ = 0; p->exp_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSReturn(SReturn *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("return");
  _i_ = 0; p->exp_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSIf(SIf *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("if");
  render('(');
  _i_ = 0; p->exp_->accept(this);
  render(')');
  _i_ = 0; p->block_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSIfElse(SIfElse *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("if");
  render('(');
  _i_ = 0; p->exp_->accept(this);
  render(')');
  _i_ = 0; p->block_1->accept(this);
  render("else");
  _i_ = 0; p->block_2->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSWith(SWith *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("with");
  _i_ = 0; p->statement_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSBareStmt(SBareStmt *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->exp_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitUriConstant(UriConstant *p) {} //abstract class

void PrintAbsyn::visitUriConst(UriConst *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render('<');
  visitString(p->string_);
  render('>');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitVarName(VarName *p) {} //abstract class

void PrintAbsyn::visitVarNameIdent(VarNameIdent *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  visitIdent(p->ident_);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitVarNamePIdent(VarNamePIdent *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  visitIdent(p->pident_);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitVarNameUIdent(VarNameUIdent *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  visitIdent(p->uident_);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitQVarName(QVarName *p) {} //abstract class

void PrintAbsyn::visitQVarName1(QVarName1 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  if(p->listvarname_) {_i_ = 0; p->listvarname_->accept(this);}

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitExp(Exp *p) {} //abstract class

void PrintAbsyn::visitEAnd(EAnd *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->exp_1->accept(this);
  render("&&");
  _i_ = 0; p->exp_2->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEAdd(EAdd *p)
{
  int oldi = _i_;
  if (oldi > 1) render(_L_PAREN);

  _i_ = 1; p->exp_1->accept(this);
  render('+');
  _i_ = 2; p->exp_2->accept(this);

  if (oldi > 1) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitESub(ESub *p)
{
  int oldi = _i_;
  if (oldi > 1) render(_L_PAREN);

  _i_ = 1; p->exp_1->accept(this);
  render('-');
  _i_ = 2; p->exp_2->accept(this);

  if (oldi > 1) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEMul(EMul *p)
{
  int oldi = _i_;
  if (oldi > 2) render(_L_PAREN);

  _i_ = 2; p->exp_1->accept(this);
  render('*');
  _i_ = 3; p->exp_2->accept(this);

  if (oldi > 2) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEDiv(EDiv *p)
{
  int oldi = _i_;
  if (oldi > 2) render(_L_PAREN);

  _i_ = 2; p->exp_1->accept(this);
  render('/');
  _i_ = 3; p->exp_2->accept(this);

  if (oldi > 2) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEInt(EInt *p)
{
  int oldi = _i_;
  if (oldi > 3) render(_L_PAREN);

  visitInteger(p->integer_);

  if (oldi > 3) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEDouble(EDouble *p)
{
  int oldi = _i_;
  if (oldi > 3) render(_L_PAREN);

  visitDouble(p->double_);

  if (oldi > 3) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEString(EString *p)
{
  int oldi = _i_;
  if (oldi > 3) render(_L_PAREN);

  visitString(p->string_);

  if (oldi > 3) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEVarname(EVarname *p)
{
  int oldi = _i_;
  if (oldi > 3) render(_L_PAREN);

  _i_ = 0; p->qvarname_->accept(this);

  if (oldi > 3) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEFuncCall(EFuncCall *p)
{
  int oldi = _i_;
  if (oldi > 4) render(_L_PAREN);

  _i_ = 0; p->functionname_->accept(this);
  render('(');
  if(p->listexp_) {_i_ = 0; p->listexp_->accept(this);}
  render(')');

  if (oldi > 4) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEQFuncCall(EQFuncCall *p)
{
  int oldi = _i_;
  if (oldi > 4) render(_L_PAREN);

  _i_ = 0; p->qvarname_->accept(this);
  render('(');
  if(p->listexp_) {_i_ = 0; p->listexp_->accept(this);}
  render(')');

  if (oldi > 4) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEFuncParen(EFuncParen *p)
{
  int oldi = _i_;
  if (oldi > 5) render(_L_PAREN);

  render('(');
  _i_ = 0; p->exp_->accept(this);
  render(')');

  if (oldi > 5) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitENegation(ENegation *p)
{
  int oldi = _i_;
  if (oldi > 6) render(_L_PAREN);

  render('!');
  _i_ = 0; p->exp_->accept(this);

  if (oldi > 6) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitETypeCreate(ETypeCreate *p)
{
  int oldi = _i_;
  if (oldi > 6) render(_L_PAREN);

  render("new");
  _i_ = 0; p->typeinitialiser_->accept(this);

  if (oldi > 6) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTypeInitialiser(TypeInitialiser *p) {} //abstract class

void PrintAbsyn::visitTypeInt(TypeInt *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->typename_->accept(this);
  render('{');
  if(p->listtypepropertyinit_) {_i_ = 0; p->listtypepropertyinit_->accept(this);}
  render('}');

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTypeName(TypeName *p) {} //abstract class

void PrintAbsyn::visitNTypeName(NTypeName *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->qvarname_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitTypePropertyInit(TypePropertyInit *p) {} //abstract class

void PrintAbsyn::visitTypePropertyInit1(TypePropertyInit1 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->varname_->accept(this);
  render('=');
  _i_ = 0; p->exp_->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListFormalParameter(ListFormalParameter *listformalparameter)
{
  for (ListFormalParameter::const_iterator i = listformalparameter->begin() ; i != listformalparameter->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listformalparameter->end() - 1) render(',');
  }
}void PrintAbsyn::visitListExp(ListExp *listexp)
{
  for (ListExp::const_iterator i = listexp->begin() ; i != listexp->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listexp->end() - 1) render(',');
  }
}void PrintAbsyn::visitListTypePropertyInit(ListTypePropertyInit *listtypepropertyinit)
{
  for (ListTypePropertyInit::const_iterator i = listtypepropertyinit->begin() ; i != listtypepropertyinit->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listtypepropertyinit->end() - 1) render(',');
  }
}void PrintAbsyn::visitListVarName(ListVarName *listvarname)
{
  for (ListVarName::const_iterator i = listvarname->begin() ; i != listvarname->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listvarname->end() - 1) render('.');
  }
}void PrintAbsyn::visitListAlias(ListAlias *listalias)
{
  for (ListAlias::const_iterator i = listalias->begin() ; i != listalias->end() ; ++i)
  {
    (*i)->accept(this);
    render("");
  }
}void PrintAbsyn::visitListFunctionDeclaration(ListFunctionDeclaration *listfunctiondeclaration)
{
  for (ListFunctionDeclaration::const_iterator i = listfunctiondeclaration->begin() ; i != listfunctiondeclaration->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listfunctiondeclaration->end() - 1) render("");
  }
}void PrintAbsyn::visitListModuleImport(ListModuleImport *listmoduleimport)
{
  for (ListModuleImport::const_iterator i = listmoduleimport->begin() ; i != listmoduleimport->end() ; ++i)
  {
    (*i)->accept(this);
    render("");
  }
}void PrintAbsyn::visitListStatement(ListStatement *liststatement)
{
  for (ListStatement::const_iterator i = liststatement->begin() ; i != liststatement->end() ; ++i)
  {
    (*i)->accept(this);
    render(';');
  }
}void PrintAbsyn::visitInteger(Integer i)
{
  char tmp[16];
  sprintf(tmp, "%d", i);
  bufAppend(tmp);
}

void PrintAbsyn::visitDouble(Double d)
{
  char tmp[16];
  sprintf(tmp, "%g", d);
  bufAppend(tmp);
}

void PrintAbsyn::visitChar(Char c)
{
  bufAppend('\'');
  bufAppend(c);
  bufAppend('\'');
}

void PrintAbsyn::visitString(String s)
{
  bufAppend('\"');
  bufAppend(s);
  bufAppend('\"');
}

void PrintAbsyn::visitIdent(String s)
{
  render(s);
}

void PrintAbsyn::visitUIdent(String s)
{
  render(s);
}


void PrintAbsyn::visitPIdent(String s)
{
  render(s);
}


ShowAbsyn::ShowAbsyn(void)
{
  buf_ = 0;
  bufReset();
}

ShowAbsyn::~ShowAbsyn(void)
{
}

char *ShowAbsyn::show(Visitable *v)
{
  bufReset();
  v->accept(this);
  return buf_;
}

void ShowAbsyn::visitFifth(Fifth *p) {} //abstract class

void ShowAbsyn::visitFifthProgram(FifthProgram *p)
{
  bufAppend('(');
  bufAppend("FifthProgram");
  bufAppend(' ');
  bufAppend('[');
  if (p->listmoduleimport_)  p->listmoduleimport_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listalias_)  p->listalias_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->liststatement_)  p->liststatement_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listfunctiondeclaration_)  p->listfunctiondeclaration_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitAlias(Alias *p) {} //abstract class

void ShowAbsyn::visitAliasUri(AliasUri *p)
{
  bufAppend('(');
  bufAppend("AliasUri");
  bufAppend(' ');
  bufAppend('[');
  if (p->uriconstant_)  p->uriconstant_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->packagename_)  p->packagename_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitBlock(Block *p) {} //abstract class

void ShowAbsyn::visitBlk(Blk *p)
{
  bufAppend('(');
  bufAppend("Blk");
  bufAppend(' ');
  bufAppend('[');
  if (p->liststatement_)  p->liststatement_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitFormalParameter(FormalParameter *p) {} //abstract class

void ShowAbsyn::visitFParam(FParam *p)
{
  bufAppend('(');
  bufAppend("FParam");
  bufAppend(' ');
  bufAppend('[');
  if (p->paramtype_)  p->paramtype_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->paramname_)  p->paramname_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitFunctionDeclaration(FunctionDeclaration *p) {} //abstract class

void ShowAbsyn::visitFuncDecl(FuncDecl *p)
{
  bufAppend('(');
  bufAppend("FuncDecl");
  bufAppend(' ');
  bufAppend('[');
  if (p->functionname_)  p->functionname_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listformalparameter_)  p->listformalparameter_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->block_)  p->block_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitFunctionName(FunctionName *p) {} //abstract class

void ShowAbsyn::visitNFunc(NFunc *p)
{
  bufAppend('(');
  bufAppend("NFunc");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(')');
}
void ShowAbsyn::visitModuleImport(ModuleImport *p) {} //abstract class

void ShowAbsyn::visitModImp(ModImp *p)
{
  bufAppend('(');
  bufAppend("ModImp");
  bufAppend(' ');
  bufAppend('[');
  if (p->packagename_)  p->packagename_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitPackageName(PackageName *p) {} //abstract class

void ShowAbsyn::visitNPkg(NPkg *p)
{
  bufAppend('(');
  bufAppend("NPkg");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(')');
}
void ShowAbsyn::visitParamName(ParamName *p) {} //abstract class

void ShowAbsyn::visitNParam(NParam *p)
{
  bufAppend('(');
  bufAppend("NParam");
  bufAppend(' ');
  bufAppend('[');
  if (p->varname_)  p->varname_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitParamType(ParamType *p) {} //abstract class

void ShowAbsyn::visitTParam(TParam *p)
{
  bufAppend('(');
  bufAppend("TParam");
  bufAppend(' ');
  bufAppend('[');
  if (p->typename_)  p->typename_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitQFunctionName(QFunctionName *p) {} //abstract class

void ShowAbsyn::visitNQFunc(NQFunc *p)
{
  bufAppend('(');
  bufAppend("NQFunc");
  bufAppend(' ');
  bufAppend('[');
  if (p->packagename_)  p->packagename_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->functionname_)  p->functionname_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitStatement(Statement *p) {} //abstract class

void ShowAbsyn::visitSAssign(SAssign *p)
{
  bufAppend('(');
  bufAppend("SAssign");
  bufAppend(' ');
  bufAppend('[');
  if (p->qvarname_)  p->qvarname_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->exp_)  p->exp_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitSReturn(SReturn *p)
{
  bufAppend('(');
  bufAppend("SReturn");
  bufAppend(' ');
  bufAppend('[');
  if (p->exp_)  p->exp_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitSIf(SIf *p)
{
  bufAppend('(');
  bufAppend("SIf");
  bufAppend(' ');
  bufAppend('[');
  if (p->exp_)  p->exp_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->block_)  p->block_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitSIfElse(SIfElse *p)
{
  bufAppend('(');
  bufAppend("SIfElse");
  bufAppend(' ');
  bufAppend('[');
  if (p->exp_)  p->exp_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->block_1->accept(this);
  bufAppend(' ');
  p->block_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitSWith(SWith *p)
{
  bufAppend('(');
  bufAppend("SWith");
  bufAppend(' ');
  bufAppend('[');
  if (p->statement_)  p->statement_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitSBareStmt(SBareStmt *p)
{
  bufAppend('(');
  bufAppend("SBareStmt");
  bufAppend(' ');
  bufAppend('[');
  if (p->exp_)  p->exp_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitUriConstant(UriConstant *p) {} //abstract class

void ShowAbsyn::visitUriConst(UriConst *p)
{
  bufAppend('(');
  bufAppend("UriConst");
  bufAppend(' ');
  visitString(p->string_);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitVarName(VarName *p) {} //abstract class

void ShowAbsyn::visitVarNameIdent(VarNameIdent *p)
{
  bufAppend('(');
  bufAppend("VarNameIdent");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(')');
}
void ShowAbsyn::visitVarNamePIdent(VarNamePIdent *p)
{
  bufAppend('(');
  bufAppend("VarNamePIdent");
  bufAppend(' ');
  visitIdent(p->pident_);
  bufAppend(')');
}
void ShowAbsyn::visitVarNameUIdent(VarNameUIdent *p)
{
  bufAppend('(');
  bufAppend("VarNameUIdent");
  bufAppend(' ');
  visitIdent(p->uident_);
  bufAppend(')');
}
void ShowAbsyn::visitQVarName(QVarName *p) {} //abstract class

void ShowAbsyn::visitQVarName1(QVarName1 *p)
{
  bufAppend('(');
  bufAppend("QVarName1");
  bufAppend(' ');
  bufAppend('[');
  if (p->listvarname_)  p->listvarname_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitExp(Exp *p) {} //abstract class

void ShowAbsyn::visitEAnd(EAnd *p)
{
  bufAppend('(');
  bufAppend("EAnd");
  bufAppend(' ');
  p->exp_1->accept(this);
  bufAppend(' ');
  p->exp_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEAdd(EAdd *p)
{
  bufAppend('(');
  bufAppend("EAdd");
  bufAppend(' ');
  p->exp_1->accept(this);
  bufAppend(' ');
  p->exp_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitESub(ESub *p)
{
  bufAppend('(');
  bufAppend("ESub");
  bufAppend(' ');
  p->exp_1->accept(this);
  bufAppend(' ');
  p->exp_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEMul(EMul *p)
{
  bufAppend('(');
  bufAppend("EMul");
  bufAppend(' ');
  p->exp_1->accept(this);
  bufAppend(' ');
  p->exp_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEDiv(EDiv *p)
{
  bufAppend('(');
  bufAppend("EDiv");
  bufAppend(' ');
  p->exp_1->accept(this);
  bufAppend(' ');
  p->exp_2->accept(this);
  bufAppend(')');
}
void ShowAbsyn::visitEInt(EInt *p)
{
  bufAppend('(');
  bufAppend("EInt");
  bufAppend(' ');
  visitInteger(p->integer_);
  bufAppend(')');
}
void ShowAbsyn::visitEDouble(EDouble *p)
{
  bufAppend('(');
  bufAppend("EDouble");
  bufAppend(' ');
  visitDouble(p->double_);
  bufAppend(')');
}
void ShowAbsyn::visitEString(EString *p)
{
  bufAppend('(');
  bufAppend("EString");
  bufAppend(' ');
  visitString(p->string_);
  bufAppend(')');
}
void ShowAbsyn::visitEVarname(EVarname *p)
{
  bufAppend('(');
  bufAppend("EVarname");
  bufAppend(' ');
  bufAppend('[');
  if (p->qvarname_)  p->qvarname_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitEFuncCall(EFuncCall *p)
{
  bufAppend('(');
  bufAppend("EFuncCall");
  bufAppend(' ');
  bufAppend('[');
  if (p->functionname_)  p->functionname_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listexp_)  p->listexp_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEQFuncCall(EQFuncCall *p)
{
  bufAppend('(');
  bufAppend("EQFuncCall");
  bufAppend(' ');
  bufAppend('[');
  if (p->qvarname_)  p->qvarname_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listexp_)  p->listexp_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitEFuncParen(EFuncParen *p)
{
  bufAppend('(');
  bufAppend("EFuncParen");
  bufAppend(' ');
  bufAppend('[');
  if (p->exp_)  p->exp_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitENegation(ENegation *p)
{
  bufAppend('(');
  bufAppend("ENegation");
  bufAppend(' ');
  bufAppend('[');
  if (p->exp_)  p->exp_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitETypeCreate(ETypeCreate *p)
{
  bufAppend('(');
  bufAppend("ETypeCreate");
  bufAppend(' ');
  bufAppend('[');
  if (p->typeinitialiser_)  p->typeinitialiser_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitTypeInitialiser(TypeInitialiser *p) {} //abstract class

void ShowAbsyn::visitTypeInt(TypeInt *p)
{
  bufAppend('(');
  bufAppend("TypeInt");
  bufAppend(' ');
  bufAppend('[');
  if (p->typename_)  p->typename_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listtypepropertyinit_)  p->listtypepropertyinit_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitTypeName(TypeName *p) {} //abstract class

void ShowAbsyn::visitNTypeName(NTypeName *p)
{
  bufAppend('(');
  bufAppend("NTypeName");
  bufAppend(' ');
  bufAppend('[');
  if (p->qvarname_)  p->qvarname_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitTypePropertyInit(TypePropertyInit *p) {} //abstract class

void ShowAbsyn::visitTypePropertyInit1(TypePropertyInit1 *p)
{
  bufAppend('(');
  bufAppend("TypePropertyInit1");
  bufAppend(' ');
  bufAppend('[');
  if (p->varname_)  p->varname_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->exp_)  p->exp_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListFormalParameter(ListFormalParameter *listformalparameter)
{
  for (ListFormalParameter::const_iterator i = listformalparameter->begin() ; i != listformalparameter->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listformalparameter->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitListExp(ListExp *listexp)
{
  for (ListExp::const_iterator i = listexp->begin() ; i != listexp->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listexp->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitListTypePropertyInit(ListTypePropertyInit *listtypepropertyinit)
{
  for (ListTypePropertyInit::const_iterator i = listtypepropertyinit->begin() ; i != listtypepropertyinit->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listtypepropertyinit->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitListVarName(ListVarName *listvarname)
{
  for (ListVarName::const_iterator i = listvarname->begin() ; i != listvarname->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listvarname->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitListAlias(ListAlias *listalias)
{
  for (ListAlias::const_iterator i = listalias->begin() ; i != listalias->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listalias->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitListFunctionDeclaration(ListFunctionDeclaration *listfunctiondeclaration)
{
  for (ListFunctionDeclaration::const_iterator i = listfunctiondeclaration->begin() ; i != listfunctiondeclaration->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listfunctiondeclaration->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitListModuleImport(ListModuleImport *listmoduleimport)
{
  for (ListModuleImport::const_iterator i = listmoduleimport->begin() ; i != listmoduleimport->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listmoduleimport->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitListStatement(ListStatement *liststatement)
{
  for (ListStatement::const_iterator i = liststatement->begin() ; i != liststatement->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != liststatement->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitInteger(Integer i)
{
  char tmp[16];
  sprintf(tmp, "%d", i);
  bufAppend(tmp);
}
void ShowAbsyn::visitDouble(Double d)
{
  char tmp[16];
  sprintf(tmp, "%g", d);
  bufAppend(tmp);
}
void ShowAbsyn::visitChar(Char c)
{
  bufAppend('\'');
  bufAppend(c);
  bufAppend('\'');
}
void ShowAbsyn::visitString(String s)
{
  bufAppend('\"');
  bufAppend(s);
  bufAppend('\"');
}
void ShowAbsyn::visitIdent(String s)
{
  bufAppend('\"');
  bufAppend(s);
  bufAppend('\"');
}

void ShowAbsyn::visitUIdent(String s)
{
  bufAppend('\"');
  bufAppend(s);
  bufAppend('\"');
}


void ShowAbsyn::visitPIdent(String s)
{
  bufAppend('\"');
  bufAppend(s);
  bufAppend('\"');
}



