/*** BNFC-Generated Visitor Design Pattern Skeleton. ***/
/* This implements the common visitor design pattern.
   Note that this method uses Visitor-traversal of lists, so
   List->accept() does NOT traverse the list. This allows different
   algorithms to use context information differently. */

#include "Skeleton.H"



void Skeleton::visitFifth(Fifth *t) {} //abstract class
void Skeleton::visitAlias(Alias *t) {} //abstract class
void Skeleton::visitBlock(Block *t) {} //abstract class
void Skeleton::visitFormalParameter(FormalParameter *t) {} //abstract class
void Skeleton::visitFunctionDeclaration(FunctionDeclaration *t) {} //abstract class
void Skeleton::visitFunctionName(FunctionName *t) {} //abstract class
void Skeleton::visitModuleImport(ModuleImport *t) {} //abstract class
void Skeleton::visitPackageName(PackageName *t) {} //abstract class
void Skeleton::visitParamName(ParamName *t) {} //abstract class
void Skeleton::visitParamType(ParamType *t) {} //abstract class
void Skeleton::visitQFunctionName(QFunctionName *t) {} //abstract class
void Skeleton::visitStatement(Statement *t) {} //abstract class
void Skeleton::visitUriConstant(UriConstant *t) {} //abstract class
void Skeleton::visitVarName(VarName *t) {} //abstract class
void Skeleton::visitQVarName(QVarName *t) {} //abstract class
void Skeleton::visitExp(Exp *t) {} //abstract class
void Skeleton::visitTypeInitialiser(TypeInitialiser *t) {} //abstract class
void Skeleton::visitTypeName(TypeName *t) {} //abstract class
void Skeleton::visitTypePropertyInit(TypePropertyInit *t) {} //abstract class

void Skeleton::visitFifthProgram(FifthProgram *fifth_program)
{
  /* Code For FifthProgram Goes Here */

  fifth_program->listmoduleimport_->accept(this);
  fifth_program->listalias_->accept(this);
  fifth_program->liststatement_->accept(this);
  fifth_program->listfunctiondeclaration_->accept(this);

}

void Skeleton::visitAliasUri(AliasUri *alias_uri)
{
  /* Code For AliasUri Goes Here */

  alias_uri->uriconstant_->accept(this);
  alias_uri->packagename_->accept(this);

}

void Skeleton::visitBlk(Blk *blk)
{
  /* Code For Blk Goes Here */

  blk->liststatement_->accept(this);

}

void Skeleton::visitFParam(FParam *f_param)
{
  /* Code For FParam Goes Here */

  f_param->paramtype_->accept(this);
  f_param->paramname_->accept(this);

}

void Skeleton::visitFuncDecl(FuncDecl *func_decl)
{
  /* Code For FuncDecl Goes Here */

  func_decl->functionname_->accept(this);
  func_decl->listformalparameter_->accept(this);
  func_decl->block_->accept(this);

}

void Skeleton::visitNFunc(NFunc *n_func)
{
  /* Code For NFunc Goes Here */

  visitIdent(n_func->ident_);

}

void Skeleton::visitModImp(ModImp *mod_imp)
{
  /* Code For ModImp Goes Here */

  mod_imp->packagename_->accept(this);

}

void Skeleton::visitNPkg(NPkg *n_pkg)
{
  /* Code For NPkg Goes Here */

  visitIdent(n_pkg->ident_);

}

void Skeleton::visitNParam(NParam *n_param)
{
  /* Code For NParam Goes Here */

  n_param->varname_->accept(this);

}

void Skeleton::visitTParam(TParam *t_param)
{
  /* Code For TParam Goes Here */

  t_param->typename_->accept(this);

}

void Skeleton::visitNQFunc(NQFunc *nq_func)
{
  /* Code For NQFunc Goes Here */

  nq_func->packagename_->accept(this);
  nq_func->functionname_->accept(this);

}

void Skeleton::visitSAssign(SAssign *s_assign)
{
  /* Code For SAssign Goes Here */

  s_assign->qvarname_->accept(this);
  s_assign->exp_->accept(this);

}

void Skeleton::visitSReturn(SReturn *s_return)
{
  /* Code For SReturn Goes Here */

  s_return->exp_->accept(this);

}

void Skeleton::visitSIf(SIf *s_if)
{
  /* Code For SIf Goes Here */

  s_if->exp_->accept(this);
  s_if->block_->accept(this);

}

void Skeleton::visitSIfElse(SIfElse *s_if_else)
{
  /* Code For SIfElse Goes Here */

  s_if_else->exp_->accept(this);
  s_if_else->block_1->accept(this);
  s_if_else->block_2->accept(this);

}

void Skeleton::visitSWith(SWith *s_with)
{
  /* Code For SWith Goes Here */

  s_with->statement_->accept(this);

}

void Skeleton::visitSBareStmt(SBareStmt *s_bare_stmt)
{
  /* Code For SBareStmt Goes Here */

  s_bare_stmt->exp_->accept(this);

}

void Skeleton::visitUriConst(UriConst *uri_const)
{
  /* Code For UriConst Goes Here */

  visitString(uri_const->string_);

}

void Skeleton::visitVarNameIdent(VarNameIdent *var_name_ident)
{
  /* Code For VarNameIdent Goes Here */

  visitIdent(var_name_ident->ident_);

}

void Skeleton::visitVarNamePIdent(VarNamePIdent *var_name_p_ident)
{
  /* Code For VarNamePIdent Goes Here */

  visitPIdent(var_name_p_ident->pident_);

}

void Skeleton::visitVarNameUIdent(VarNameUIdent *var_name_u_ident)
{
  /* Code For VarNameUIdent Goes Here */

  visitUIdent(var_name_u_ident->uident_);

}

void Skeleton::visitQVarName1(QVarName1 *q_var_name)
{
  /* Code For QVarName1 Goes Here */

  q_var_name->listvarname_->accept(this);

}

void Skeleton::visitEAnd(EAnd *e_and)
{
  /* Code For EAnd Goes Here */

  e_and->exp_1->accept(this);
  e_and->exp_2->accept(this);

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

void Skeleton::visitEString(EString *e_string)
{
  /* Code For EString Goes Here */

  visitString(e_string->string_);

}

void Skeleton::visitEVarname(EVarname *e_varname)
{
  /* Code For EVarname Goes Here */

  e_varname->qvarname_->accept(this);

}

void Skeleton::visitEFuncCall(EFuncCall *e_func_call)
{
  /* Code For EFuncCall Goes Here */

  e_func_call->functionname_->accept(this);
  e_func_call->listexp_->accept(this);

}

void Skeleton::visitEQFuncCall(EQFuncCall *eq_func_call)
{
  /* Code For EQFuncCall Goes Here */

  eq_func_call->qvarname_->accept(this);
  eq_func_call->listexp_->accept(this);

}

void Skeleton::visitEFuncParen(EFuncParen *e_func_paren)
{
  /* Code For EFuncParen Goes Here */

  e_func_paren->exp_->accept(this);

}

void Skeleton::visitENegation(ENegation *e_negation)
{
  /* Code For ENegation Goes Here */

  e_negation->exp_->accept(this);

}

void Skeleton::visitETypeCreate(ETypeCreate *e_type_create)
{
  /* Code For ETypeCreate Goes Here */

  e_type_create->typeinitialiser_->accept(this);

}

void Skeleton::visitTypeInt(TypeInt *type_int)
{
  /* Code For TypeInt Goes Here */

  type_int->typename_->accept(this);
  type_int->listtypepropertyinit_->accept(this);

}

void Skeleton::visitNTypeName(NTypeName *n_type_name)
{
  /* Code For NTypeName Goes Here */

  n_type_name->qvarname_->accept(this);

}

void Skeleton::visitTypePropertyInit1(TypePropertyInit1 *type_property_init)
{
  /* Code For TypePropertyInit1 Goes Here */

  type_property_init->varname_->accept(this);
  type_property_init->exp_->accept(this);

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

void Skeleton::visitListTypePropertyInit(ListTypePropertyInit *list_type_property_init)
{
  for (ListTypePropertyInit::iterator i = list_type_property_init->begin() ; i != list_type_property_init->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListVarName(ListVarName *list_var_name)
{
  for (ListVarName::iterator i = list_var_name->begin() ; i != list_var_name->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListAlias(ListAlias *list_alias)
{
  for (ListAlias::iterator i = list_alias->begin() ; i != list_alias->end() ; ++i)
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

void Skeleton::visitListModuleImport(ListModuleImport *list_module_import)
{
  for (ListModuleImport::iterator i = list_module_import->begin() ; i != list_module_import->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListStatement(ListStatement *list_statement)
{
  for (ListStatement::iterator i = list_statement->begin() ; i != list_statement->end() ; ++i)
  {
    (*i)->accept(this);
  }
}


void Skeleton::visitUIdent(UIdent x)
{
  /* Code for UIdent Goes Here */
}

void Skeleton::visitPIdent(PIdent x)
{
  /* Code for PIdent Goes Here */
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



