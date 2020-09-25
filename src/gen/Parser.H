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
class FunctionName;
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
  FunctionName* functionname_;
  Exp* exp_;
  ListExp* listexp_;
} YYSTYPE;

Fifth* pFifth(FILE *inp);
Fifth* pFifth(const char *str);
ModuleImport* pModuleImport(FILE *inp);
ModuleImport* pModuleImport(const char *str);
ListModuleImport* pListModuleImport(FILE *inp);
ListModuleImport* pListModuleImport(const char *str);
FunctionDeclaration* pFunctionDeclaration(FILE *inp);
FunctionDeclaration* pFunctionDeclaration(const char *str);
ListFunctionDeclaration* pListFunctionDeclaration(FILE *inp);
ListFunctionDeclaration* pListFunctionDeclaration(const char *str);
FormalParameter* pFormalParameter(FILE *inp);
FormalParameter* pFormalParameter(const char *str);
ListFormalParameter* pListFormalParameter(FILE *inp);
ListFormalParameter* pListFormalParameter(const char *str);
ParamType* pParamType(FILE *inp);
ParamType* pParamType(const char *str);
ParamName* pParamName(FILE *inp);
ParamName* pParamName(const char *str);
FunctionName* pFunctionName(FILE *inp);
FunctionName* pFunctionName(const char *str);
Exp* pExp(FILE *inp);
Exp* pExp(const char *str);
Exp* pExp1(FILE *inp);
Exp* pExp1(const char *str);
Exp* pExp2(FILE *inp);
Exp* pExp2(const char *str);
ListExp* pListExp(FILE *inp);
ListExp* pListExp(const char *str);



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
#define _INTEGER_ 270
#define _DOUBLE_ 271
#define _IDENT_ 272

extern YYSTYPE yylval;

#endif
