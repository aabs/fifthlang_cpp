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
  if(p->listfunctiondeclaration_) {_i_ = 0; p->listfunctiondeclaration_->accept(this);}

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitModuleImport(ModuleImport *p) {} //abstract class

void PrintAbsyn::visitModImp(ModImp *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  render("use");
  visitIdent(p->ident_);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListModuleImport(ListModuleImport *listmoduleimport)
{
  for (ListModuleImport::const_iterator i = listmoduleimport->begin() ; i != listmoduleimport->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listmoduleimport->end() - 1) render(';');
  }
}void PrintAbsyn::visitFunctionDeclaration(FunctionDeclaration *p) {} //abstract class

void PrintAbsyn::visitFuncDecl(FuncDecl *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->functionname_->accept(this);
  render('(');
  if(p->listformalparameter_) {_i_ = 0; p->listformalparameter_->accept(this);}
  render(')');
  render("=>");
  if(p->listexp_) {_i_ = 0; p->listexp_->accept(this);}

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListFunctionDeclaration(ListFunctionDeclaration *listfunctiondeclaration)
{
  for (ListFunctionDeclaration::const_iterator i = listfunctiondeclaration->begin() ; i != listfunctiondeclaration->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listfunctiondeclaration->end() - 1) render('.');
  }
}void PrintAbsyn::visitFormalParameter(FormalParameter *p) {} //abstract class

void PrintAbsyn::visitFParam(FParam *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->paramtype_->accept(this);
  _i_ = 0; p->paramname_->accept(this);

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
}void PrintAbsyn::visitParamType(ParamType *p) {} //abstract class

void PrintAbsyn::visitTParam(TParam *p)
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

  visitIdent(p->ident_);

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

void PrintAbsyn::visitExp(Exp *p) {} //abstract class

void PrintAbsyn::visitEAdd(EAdd *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->exp_1->accept(this);
  render('+');
  _i_ = 1; p->exp_2->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitESub(ESub *p)
{
  int oldi = _i_;
  if (oldi > 0) render(_L_PAREN);

  _i_ = 0; p->exp_1->accept(this);
  render('-');
  _i_ = 1; p->exp_2->accept(this);

  if (oldi > 0) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEMul(EMul *p)
{
  int oldi = _i_;
  if (oldi > 1) render(_L_PAREN);

  _i_ = 1; p->exp_1->accept(this);
  render('*');
  _i_ = 2; p->exp_2->accept(this);

  if (oldi > 1) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEDiv(EDiv *p)
{
  int oldi = _i_;
  if (oldi > 1) render(_L_PAREN);

  _i_ = 1; p->exp_1->accept(this);
  render('/');
  _i_ = 2; p->exp_2->accept(this);

  if (oldi > 1) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEInt(EInt *p)
{
  int oldi = _i_;
  if (oldi > 2) render(_L_PAREN);

  visitInteger(p->integer_);

  if (oldi > 2) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEDouble(EDouble *p)
{
  int oldi = _i_;
  if (oldi > 2) render(_L_PAREN);

  visitDouble(p->double_);

  if (oldi > 2) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitEIdent(EIdent *p)
{
  int oldi = _i_;
  if (oldi > 2) render(_L_PAREN);

  visitIdent(p->ident_);

  if (oldi > 2) render(_R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListExp(ListExp *listexp)
{
  for (ListExp::const_iterator i = listexp->begin() ; i != listexp->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listexp->end() - 1) render(';');
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
  if (p->listfunctiondeclaration_)  p->listfunctiondeclaration_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitModuleImport(ModuleImport *p) {} //abstract class

void ShowAbsyn::visitModImp(ModImp *p)
{
  bufAppend('(');
  bufAppend("ModImp");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(')');
}
void ShowAbsyn::visitListModuleImport(ListModuleImport *listmoduleimport)
{
  for (ListModuleImport::const_iterator i = listmoduleimport->begin() ; i != listmoduleimport->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listmoduleimport->end() - 1) bufAppend(", ");
  }
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
  if (p->listexp_)  p->listexp_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitListFunctionDeclaration(ListFunctionDeclaration *listfunctiondeclaration)
{
  for (ListFunctionDeclaration::const_iterator i = listfunctiondeclaration->begin() ; i != listfunctiondeclaration->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listfunctiondeclaration->end() - 1) bufAppend(", ");
  }
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
void ShowAbsyn::visitListFormalParameter(ListFormalParameter *listformalparameter)
{
  for (ListFormalParameter::const_iterator i = listformalparameter->begin() ; i != listformalparameter->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listformalparameter->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitParamType(ParamType *p) {} //abstract class

void ShowAbsyn::visitTParam(TParam *p)
{
  bufAppend('(');
  bufAppend("TParam");
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
  visitIdent(p->ident_);
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
void ShowAbsyn::visitExp(Exp *p) {} //abstract class

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
void ShowAbsyn::visitEIdent(EIdent *p)
{
  bufAppend('(');
  bufAppend("EIdent");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(')');
}
void ShowAbsyn::visitListExp(ListExp *listexp)
{
  for (ListExp::const_iterator i = listexp->begin() ; i != listexp->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listexp->end() - 1) bufAppend(", ");
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


