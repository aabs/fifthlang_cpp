/*** BNFC-Generated Visitor Design Pattern Skeleton. ***/
/* This implements the common visitor design pattern.
   Note that this method uses Visitor-traversal of lists, so
   List->accept() does NOT traverse the list. This allows different
   algorithms to use context information differently. */

#include "Skeleton.H"



void Skeleton::visitFifth(Fifth *t) {} //abstract class
void Skeleton::visitModuleImport(ModuleImport *t) {} //abstract class
void Skeleton::visitFunctionDeclaration(FunctionDeclaration *t) {} //abstract class
void Skeleton::visitFormalParameter(FormalParameter *t) {} //abstract class
void Skeleton::visitParamType(ParamType *t) {} //abstract class
void Skeleton::visitParamName(ParamName *t) {} //abstract class
void Skeleton::visitFunctionName(FunctionName *t) {} //abstract class
void Skeleton::visitPackageName(PackageName *t) {} //abstract class
void Skeleton::visitExp(Exp *t) {} //abstract class

void Skeleton::visitFifthProgram(FifthProgram *fifth_program)
{
  /* Code For FifthProgram Goes Here */

  fifth_program->listmoduleimport_->accept(this);
  fifth_program->listfunctiondeclaration_->accept(this);

}

void Skeleton::visitModImp(ModImp *mod_imp)
{
  /* Code For ModImp Goes Here */

  mod_imp->packagename_->accept(this);

}

void Skeleton::visitFuncDecl(FuncDecl *func_decl)
{
  /* Code For FuncDecl Goes Here */

  func_decl->functionname_->accept(this);
  func_decl->listformalparameter_->accept(this);
  func_decl->listexp_->accept(this);

}

void Skeleton::visitFParam(FParam *f_param)
{
  /* Code For FParam Goes Here */

  f_param->paramtype_->accept(this);
  f_param->paramname_->accept(this);

}

void Skeleton::visitTParam(TParam *t_param)
{
  /* Code For TParam Goes Here */

  visitIdent(t_param->ident_);

}

void Skeleton::visitNParam(NParam *n_param)
{
  /* Code For NParam Goes Here */

  visitIdent(n_param->ident_);

}

void Skeleton::visitNFunc(NFunc *n_func)
{
  /* Code For NFunc Goes Here */

  visitIdent(n_func->ident_);

}

void Skeleton::visitNPkg(NPkg *n_pkg)
{
  /* Code For NPkg Goes Here */

  visitIdent(n_pkg->ident_);

}

void Skeleton::visitEAdd(EAdd *e_add)
{
  /* Code For EAdd Goes Here */

  e_add->exp_1->accept(this);
  e_add->exp_2->accept(this);

}

void Skeleton::visitESub(ESub *e_sub)
{
  /* Code For ESub Goes Here */

  e_sub->exp_1->accept(this);
  e_sub->exp_2->accept(this);

}

void Skeleton::visitEMul(EMul *e_mul)
{
  /* Code For EMul Goes Here */

  e_mul->exp_1->accept(this);
  e_mul->exp_2->accept(this);

}

void Skeleton::visitEDiv(EDiv *e_div)
{
  /* Code For EDiv Goes Here */

  e_div->exp_1->accept(this);
  e_div->exp_2->accept(this);

}

void Skeleton::visitEInt(EInt *e_int)
{
  /* Code For EInt Goes Here */

  visitInteger(e_int->integer_);

}

void Skeleton::visitEDouble(EDouble *e_double)
{
  /* Code For EDouble Goes Here */

  visitDouble(e_double->double_);

}

void Skeleton::visitEIdent(EIdent *e_ident)
{
  /* Code For EIdent Goes Here */

  visitIdent(e_ident->ident_);

}


void Skeleton::visitListModuleImport(ListModuleImport *list_module_import)
{
  for (ListModuleImport::iterator i = list_module_import->begin() ; i != list_module_import->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListFunctionDeclaration(ListFunctionDeclaration *list_function_declaration)
{
  for (ListFunctionDeclaration::iterator i = list_function_declaration->begin() ; i != list_function_declaration->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListFormalParameter(ListFormalParameter *list_formal_parameter)
{
  for (ListFormalParameter::iterator i = list_formal_parameter->begin() ; i != list_formal_parameter->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListExp(ListExp *list_exp)
{
  for (ListExp::iterator i = list_exp->begin() ; i != list_exp->end() ; ++i)
  {
    (*i)->accept(this);
  }
}


void Skeleton::visitInteger(Integer x)
{
  /* Code for Integer Goes Here */
}

void Skeleton::visitChar(Char x)
{
  /* Code for Char Goes Here */
}

void Skeleton::visitDouble(Double x)
{
  /* Code for Double Goes Here */
}

void Skeleton::visitString(String x)
{
  /* Code for String Goes Here */
}

void Skeleton::visitIdent(Ident x)
{
  /* Code for Ident Goes Here */
}



