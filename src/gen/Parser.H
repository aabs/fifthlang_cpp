#ifndef PARSER_HEADER_FILE
#define PARSER_HEADER_FILE

#include<vector>
#include<string>


class Fifth;
class ModuleImport;
class ListModuleImport;
class FunctionDeclaration;
class ListFunctionDeclaration;
class FormalParameter;
class ListFormalParameter;
class ParamType;
class ParamName;
class QFunctionName;
class FunctionName;
class PackageName;
class Exp;
class ListExp;

typedef union
{
  int int_;
  char char_;
  double double_;
  char* string_;
  Fifth* fifth_;
  ModuleImport* moduleimport_;
  ListModuleImport* listmoduleimport_;
  FunctionDeclaration* functiondeclaration_;
  ListFunctionDeclaration* listfunctiondeclaration_;
  FormalParameter* formalparameter_;
  ListFormalParameter* listformalparameter_;
  ParamType* paramtype_;
  ParamName* paramname_;
  QFunctionName* qfunctionname_;
  FunctionName* functionname_;
  PackageName* packagename_;
  Exp* exp_;
  ListExp* listexp_;
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
#define _STRING_ 270
#define _INTEGER_ 271
#define _DOUBLE_ 272
#define _IDENT_ 273

extern YYSTYPE yylval;

#endif
