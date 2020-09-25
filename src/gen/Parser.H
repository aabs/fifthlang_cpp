#ifndef PARSER_HEADER_FILE
#define PARSER_HEADER_FILE

#include<vector>
#include<string>


class Fifth;
class Alias;
class Block;
class FormalParameter;
class FunctionDeclaration;
class FunctionName;
class ModuleImport;
class PackageName;
class ParamName;
class ParamType;
class QFunctionName;
class Statement;
class UriConstant;
class VarName;
class QVarName;
class Exp;
class TypeInitialiser;
class TypeName;
class TypePropertyInit;
class ListFormalParameter;
class ListExp;
class ListTypePropertyInit;
class ListVarName;
class ListAlias;
class ListFunctionDeclaration;
class ListModuleImport;
class ListStatement;

typedef union
{
  int int_;
  char char_;
  double double_;
  char* string_;
  Fifth* fifth_;
  Alias* alias_;
  Block* block_;
  FormalParameter* formalparameter_;
  FunctionDeclaration* functiondeclaration_;
  FunctionName* functionname_;
  ModuleImport* moduleimport_;
  PackageName* packagename_;
  ParamName* paramname_;
  ParamType* paramtype_;
  QFunctionName* qfunctionname_;
  Statement* statement_;
  UriConstant* uriconstant_;
  VarName* varname_;
  QVarName* qvarname_;
  Exp* exp_;
  TypeInitialiser* typeinitialiser_;
  TypeName* typename_;
  TypePropertyInit* typepropertyinit_;
  ListFormalParameter* listformalparameter_;
  ListExp* listexp_;
  ListTypePropertyInit* listtypepropertyinit_;
  ListVarName* listvarname_;
  ListAlias* listalias_;
  ListFunctionDeclaration* listfunctiondeclaration_;
  ListModuleImport* listmoduleimport_;
  ListStatement* liststatement_;
} YYSTYPE;

Fifth* pFifth(FILE *inp);
Fifth* pFifth(const char *str);



#define _ERROR_ 258
#define _SYMB_0 259
#define _SYMB_1 260
#define _SYMB_2 261
#define _SYMB_3 262
#define _SYMB_4 263
#define _SYMB_5 264
#define _SYMB_6 265
#define _SYMB_7 266
#define _SYMB_8 267
#define _SYMB_9 268
#define _SYMB_10 269
#define _SYMB_11 270
#define _SYMB_12 271
#define _SYMB_13 272
#define _SYMB_14 273
#define _SYMB_15 274
#define _SYMB_16 275
#define _SYMB_17 276
#define _SYMB_18 277
#define _SYMB_19 278
#define _SYMB_20 279
#define _SYMB_21 280
#define _SYMB_22 281
#define _SYMB_23 282
#define _SYMB_24 283
#define _SYMB_25 284
#define _STRING_ 285
#define _INTEGER_ 286
#define _DOUBLE_ 287
#define _IDENT_ 288

extern YYSTYPE yylval;

#endif
