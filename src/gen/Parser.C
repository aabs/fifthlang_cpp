/* A Bison parser, made by GNU Bison 3.7.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "fifth.y"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include "Absyn.H"
typedef struct yy_buffer_state *YY_BUFFER_STATE;
int yyparse(void);
int yylex(void);
YY_BUFFER_STATE yy_scan_string(const char *str);
void yy_delete_buffer(YY_BUFFER_STATE buf);
int yy_mylinenumber;
int initialize_lexer(FILE * inp);
int yywrap(void)
{
  return 1;
}
void yyerror(const char *str)
{
  extern char *yytext;
  fprintf(stderr,"error: line %d: %s at %s\n",
    yy_mylinenumber, str, yytext);
}



static Fifth* YY_RESULT_Fifth_ = 0;

Fifth* pFifth(FILE *inp)
{
  yy_mylinenumber = 1;
  initialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Fifth_;
  }
}
Fifth* pFifth(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  yy_mylinenumber = 1;
  initialize_lexer(0);
  buf = yy_scan_string(str);
  result = yyparse();
  yy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Fifth_;
  }
}




#line 135 "Parser.C"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    _ERROR_ = 258,                 /* _ERROR_  */
    _SYMB_0 = 259,                 /* _SYMB_0  */
    _SYMB_1 = 260,                 /* _SYMB_1  */
    _SYMB_2 = 261,                 /* _SYMB_2  */
    _SYMB_3 = 262,                 /* _SYMB_3  */
    _SYMB_4 = 263,                 /* _SYMB_4  */
    _SYMB_5 = 264,                 /* _SYMB_5  */
    _SYMB_6 = 265,                 /* _SYMB_6  */
    _SYMB_7 = 266,                 /* _SYMB_7  */
    _SYMB_8 = 267,                 /* _SYMB_8  */
    _SYMB_9 = 268,                 /* _SYMB_9  */
    _SYMB_10 = 269,                /* _SYMB_10  */
    _SYMB_11 = 270,                /* _SYMB_11  */
    _SYMB_12 = 271,                /* _SYMB_12  */
    _SYMB_13 = 272,                /* _SYMB_13  */
    _SYMB_14 = 273,                /* _SYMB_14  */
    _SYMB_15 = 274,                /* _SYMB_15  */
    _SYMB_16 = 275,                /* _SYMB_16  */
    _SYMB_17 = 276,                /* _SYMB_17  */
    _SYMB_18 = 277,                /* _SYMB_18  */
    _SYMB_19 = 278,                /* _SYMB_19  */
    _SYMB_20 = 279,                /* _SYMB_20  */
    _SYMB_21 = 280,                /* _SYMB_21  */
    _SYMB_22 = 281,                /* _SYMB_22  */
    _SYMB_23 = 282,                /* _SYMB_23  */
    _SYMB_24 = 283,                /* _SYMB_24  */
    _SYMB_25 = 284,                /* _SYMB_25  */
    _STRING_ = 285,                /* _STRING_  */
    _INTEGER_ = 286,               /* _INTEGER_  */
    _DOUBLE_ = 287,                /* _DOUBLE_  */
    _IDENT_ = 288                  /* _IDENT_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 67 "fifth.y"

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

#line 249 "Parser.C"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL__ERROR_ = 3,                    /* _ERROR_  */
  YYSYMBOL__SYMB_0 = 4,                    /* _SYMB_0  */
  YYSYMBOL__SYMB_1 = 5,                    /* _SYMB_1  */
  YYSYMBOL__SYMB_2 = 6,                    /* _SYMB_2  */
  YYSYMBOL__SYMB_3 = 7,                    /* _SYMB_3  */
  YYSYMBOL__SYMB_4 = 8,                    /* _SYMB_4  */
  YYSYMBOL__SYMB_5 = 9,                    /* _SYMB_5  */
  YYSYMBOL__SYMB_6 = 10,                   /* _SYMB_6  */
  YYSYMBOL__SYMB_7 = 11,                   /* _SYMB_7  */
  YYSYMBOL__SYMB_8 = 12,                   /* _SYMB_8  */
  YYSYMBOL__SYMB_9 = 13,                   /* _SYMB_9  */
  YYSYMBOL__SYMB_10 = 14,                  /* _SYMB_10  */
  YYSYMBOL__SYMB_11 = 15,                  /* _SYMB_11  */
  YYSYMBOL__SYMB_12 = 16,                  /* _SYMB_12  */
  YYSYMBOL__SYMB_13 = 17,                  /* _SYMB_13  */
  YYSYMBOL__SYMB_14 = 18,                  /* _SYMB_14  */
  YYSYMBOL__SYMB_15 = 19,                  /* _SYMB_15  */
  YYSYMBOL__SYMB_16 = 20,                  /* _SYMB_16  */
  YYSYMBOL__SYMB_17 = 21,                  /* _SYMB_17  */
  YYSYMBOL__SYMB_18 = 22,                  /* _SYMB_18  */
  YYSYMBOL__SYMB_19 = 23,                  /* _SYMB_19  */
  YYSYMBOL__SYMB_20 = 24,                  /* _SYMB_20  */
  YYSYMBOL__SYMB_21 = 25,                  /* _SYMB_21  */
  YYSYMBOL__SYMB_22 = 26,                  /* _SYMB_22  */
  YYSYMBOL__SYMB_23 = 27,                  /* _SYMB_23  */
  YYSYMBOL__SYMB_24 = 28,                  /* _SYMB_24  */
  YYSYMBOL__SYMB_25 = 29,                  /* _SYMB_25  */
  YYSYMBOL__STRING_ = 30,                  /* _STRING_  */
  YYSYMBOL__INTEGER_ = 31,                 /* _INTEGER_  */
  YYSYMBOL__DOUBLE_ = 32,                  /* _DOUBLE_  */
  YYSYMBOL__IDENT_ = 33,                   /* _IDENT_  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_Fifth = 35,                     /* Fifth  */
  YYSYMBOL_Alias = 36,                     /* Alias  */
  YYSYMBOL_Block = 37,                     /* Block  */
  YYSYMBOL_FormalParameter = 38,           /* FormalParameter  */
  YYSYMBOL_FunctionDeclaration = 39,       /* FunctionDeclaration  */
  YYSYMBOL_FunctionName = 40,              /* FunctionName  */
  YYSYMBOL_ModuleImport = 41,              /* ModuleImport  */
  YYSYMBOL_PackageName = 42,               /* PackageName  */
  YYSYMBOL_ParamName = 43,                 /* ParamName  */
  YYSYMBOL_ParamType = 44,                 /* ParamType  */
  YYSYMBOL_Statement = 45,                 /* Statement  */
  YYSYMBOL_UriConstant = 46,               /* UriConstant  */
  YYSYMBOL_VarName = 47,                   /* VarName  */
  YYSYMBOL_QVarName = 48,                  /* QVarName  */
  YYSYMBOL_Exp = 49,                       /* Exp  */
  YYSYMBOL_Exp1 = 50,                      /* Exp1  */
  YYSYMBOL_Exp2 = 51,                      /* Exp2  */
  YYSYMBOL_Exp3 = 52,                      /* Exp3  */
  YYSYMBOL_Exp4 = 53,                      /* Exp4  */
  YYSYMBOL_Exp5 = 54,                      /* Exp5  */
  YYSYMBOL_Exp6 = 55,                      /* Exp6  */
  YYSYMBOL_TypeInitialiser = 56,           /* TypeInitialiser  */
  YYSYMBOL_TypeName = 57,                  /* TypeName  */
  YYSYMBOL_TypePropertyInit = 58,          /* TypePropertyInit  */
  YYSYMBOL_Exp7 = 59,                      /* Exp7  */
  YYSYMBOL_Exp8 = 60,                      /* Exp8  */
  YYSYMBOL_Exp9 = 61,                      /* Exp9  */
  YYSYMBOL_Exp10 = 62,                     /* Exp10  */
  YYSYMBOL_ListFormalParameter = 63,       /* ListFormalParameter  */
  YYSYMBOL_ListExp = 64,                   /* ListExp  */
  YYSYMBOL_ListTypePropertyInit = 65,      /* ListTypePropertyInit  */
  YYSYMBOL_ListVarName = 66,               /* ListVarName  */
  YYSYMBOL_ListAlias = 67,                 /* ListAlias  */
  YYSYMBOL_ListFunctionDeclaration = 68,   /* ListFunctionDeclaration  */
  YYSYMBOL_ListModuleImport = 69,          /* ListModuleImport  */
  YYSYMBOL_ListStatement = 70              /* ListStatement  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   155

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  119

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   288


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   174,   174,   176,   178,   180,   182,   184,   186,   188,
     190,   192,   196,   197,   198,   199,   200,   201,   203,   205,
     206,   207,   209,   211,   212,   214,   215,   216,   218,   219,
     220,   222,   223,   224,   225,   226,   228,   229,   230,   232,
     233,   235,   236,   237,   239,   241,   243,   245,   247,   249,
     251,   253,   254,   255,   257,   258,   259,   261,   262,   263,
     265,   266,   267,   269,   270,   272,   273,   275,   276,   278,
     279
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "_ERROR_", "_SYMB_0",
  "_SYMB_1", "_SYMB_2", "_SYMB_3", "_SYMB_4", "_SYMB_5", "_SYMB_6",
  "_SYMB_7", "_SYMB_8", "_SYMB_9", "_SYMB_10", "_SYMB_11", "_SYMB_12",
  "_SYMB_13", "_SYMB_14", "_SYMB_15", "_SYMB_16", "_SYMB_17", "_SYMB_18",
  "_SYMB_19", "_SYMB_20", "_SYMB_21", "_SYMB_22", "_SYMB_23", "_SYMB_24",
  "_SYMB_25", "_STRING_", "_INTEGER_", "_DOUBLE_", "_IDENT_", "$accept",
  "Fifth", "Alias", "Block", "FormalParameter", "FunctionDeclaration",
  "FunctionName", "ModuleImport", "PackageName", "ParamName", "ParamType",
  "Statement", "UriConstant", "VarName", "QVarName", "Exp", "Exp1", "Exp2",
  "Exp3", "Exp4", "Exp5", "Exp6", "TypeInitialiser", "TypeName",
  "TypePropertyInit", "Exp7", "Exp8", "Exp9", "Exp10",
  "ListFormalParameter", "ListExp", "ListTypePropertyInit", "ListVarName",
  "ListAlias", "ListFunctionDeclaration", "ListModuleImport",
  "ListStatement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288
};
#endif

#define YYPACT_NINF (-66)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-55)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -66,    26,   -24,   -66,    16,   -66,    31,   -66,    56,    61,
     -66,    34,   -66,    46,    57,   122,   122,    70,    17,   122,
      34,   -66,   -66,   -66,   -66,   -66,    72,    47,    74,    78,
      75,    12,    76,    33,    54,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,    71,    16,    81,    84,    29,
      76,   122,   -66,   -66,   -66,    80,    76,   -66,   -66,    85,
     -66,    79,   -66,    17,   106,   122,   122,   122,   122,   122,
     122,   -66,    89,   106,   -66,    60,    17,    17,    82,    17,
       6,     2,   -66,    86,    87,   -66,    90,    76,    76,    54,
      54,   -66,   -66,   -66,    94,    96,    97,    98,    17,   -66,
     -66,   106,    94,   -66,   -66,   -66,    93,   122,    17,   -66,
     -66,   -66,   -66,     0,    94,    76,   -66,   -66,   -66
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      67,     0,    63,     1,     0,    68,    69,     9,     0,     0,
      64,    60,     8,     0,     0,    60,    60,     0,    60,    60,
      60,    21,    20,    33,    31,    32,    19,    65,     0,     0,
      61,    34,    17,    24,    27,    30,    35,    38,    40,    43,
      47,    48,    49,    22,     2,     0,     0,     0,    34,     0,
      41,    60,    19,    45,    42,     0,    13,    16,     7,     0,
      66,    60,    70,    60,    60,    60,    60,    60,    60,    60,
      60,    18,     0,    60,    39,     0,    57,    51,    52,     0,
      34,    55,    11,     0,     0,    62,     0,    12,    23,    25,
      26,    28,    29,     3,     0,     0,    58,     0,    51,     5,
      10,    60,     0,    36,    37,    69,    14,    60,    57,    44,
      53,    56,     6,    60,     0,    46,    59,     4,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -66,   -66,   -66,   -58,   -66,   -66,     9,   -66,    73,   -66,
     -66,   100,   -66,   -65,    -8,   -11,   -66,   -51,     5,   -66,
     -66,   -66,   -66,    99,   -66,   -66,   -66,   -66,   -66,    20,
     -63,    13,    37,   -66,    95,   -66,    18
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    10,   106,    78,    27,    47,     5,     8,    99,
      79,    29,    14,    30,    48,    81,    33,    34,    35,    36,
      37,    38,    54,    82,    96,    39,    40,    41,    42,    83,
      84,    97,    43,     6,    44,     2,    11
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      32,    86,     4,    31,    49,    50,   117,    15,    56,    32,
      53,    95,    31,    64,   100,    66,    89,    90,    16,    64,
      28,   101,    65,    17,    18,    19,     3,    20,    21,    22,
      23,    24,    25,    26,   -45,   -45,    59,    74,   111,   -45,
      75,    15,    66,    95,   112,    21,    22,    67,    68,     7,
      52,     9,    16,    80,    87,    88,   118,    17,    18,    19,
      12,    20,    21,    22,    23,    24,    25,    26,    94,    53,
      69,    70,    13,    66,    91,    92,    45,    51,    46,    -7,
      58,    61,    62,    71,    63,    76,    15,   -51,    73,    66,
      53,    64,    77,    93,   102,   103,   115,    16,   104,   105,
      85,    98,    32,    18,   109,    31,   107,    21,    22,    23,
      24,    25,    26,    15,   -54,   114,   108,    55,   110,    72,
      57,   116,    60,   113,    16,     0,     0,     0,     0,    15,
      18,     0,     0,     0,    21,    22,    23,    24,    25,    26,
      16,     0,     0,     0,     0,     0,    18,     0,     0,     0,
      21,    22,    23,    24,    25,    26
};

static const yytype_int8 yycheck[] =
{
      11,    64,    26,    11,    15,    16,     6,     7,    19,    20,
      18,    76,    20,     7,    79,    13,    67,    68,    18,     7,
      11,    19,    10,    23,    24,    25,     0,    27,    28,    29,
      30,    31,    32,    33,    28,    29,    27,     8,   101,    33,
      51,     7,    13,   108,   102,    28,    29,    14,    15,    33,
      33,    20,    18,    61,    65,    66,   114,    23,    24,    25,
       4,    27,    28,    29,    30,    31,    32,    33,     8,    77,
      16,    17,    11,    13,    69,    70,    30,     7,    21,     7,
      33,     7,     4,    12,     9,     5,     7,     8,     7,    13,
      98,     7,     7,     4,     8,     8,   107,    18,     8,     5,
      63,    19,   113,    24,     6,   113,    10,    28,    29,    30,
      31,    32,    33,     7,     8,    22,    19,    18,    98,    46,
      20,   108,    27,   105,    18,    -1,    -1,    -1,    -1,     7,
      24,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    35,    69,     0,    26,    41,    67,    33,    42,    20,
      36,    70,     4,    11,    46,     7,    18,    23,    24,    25,
      27,    28,    29,    30,    31,    32,    33,    39,    40,    45,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    59,
      60,    61,    62,    66,    68,    30,    21,    40,    48,    49,
      49,     7,    33,    48,    56,    57,    49,    45,    33,    40,
      68,     7,     4,     9,     7,    10,    13,    14,    15,    16,
      17,    12,    42,     7,     8,    49,     5,     7,    38,    44,
      48,    49,    57,    63,    64,    66,    64,    49,    49,    51,
      51,    52,    52,     4,     8,    47,    58,    65,    19,    43,
      47,    19,     8,     8,     8,     5,    37,    10,    19,     6,
      63,    64,    37,    70,    22,    49,    65,     6,    37
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    45,    45,    45,    45,    45,    46,    47,
      47,    47,    48,    49,    49,    50,    50,    50,    51,    51,
      51,    52,    52,    52,    52,    52,    53,    53,    53,    54,
      54,    55,    55,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    63,    63,    64,    64,    64,    65,    65,    65,
      66,    66,    66,    67,    67,    68,    68,    69,    69,    70,
      70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     5,     3,     2,     5,     1,     3,     1,
       1,     1,     3,     2,     5,     7,     2,     1,     3,     1,
       1,     1,     1,     3,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     4,     4,     1,     3,
       1,     2,     2,     1,     4,     1,     3,     1,     1,     1,
       3,     0,     1,     3,     0,     1,     3,     0,     1,     3,
       0,     1,     3,     0,     2,     1,     2,     0,     2,     0,
       3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Fifth: ListModuleImport ListAlias ListStatement ListFunctionDeclaration  */
#line 174 "fifth.y"
                                                                         {  std::reverse((yyvsp[0].listfunctiondeclaration_)->begin(),(yyvsp[0].listfunctiondeclaration_)->end()) ;(yyval.fifth_) = new FifthProgram((yyvsp[-3].listmoduleimport_), (yyvsp[-2].listalias_), (yyvsp[-1].liststatement_), (yyvsp[0].listfunctiondeclaration_)); (yyval.fifth_)->line_number = yy_mylinenumber; YY_RESULT_Fifth_= (yyval.fifth_); }
#line 1385 "Parser.C"
    break;

  case 3: /* Alias: _SYMB_16 UriConstant _SYMB_17 PackageName _SYMB_0  */
#line 176 "fifth.y"
                                                          {  (yyval.alias_) = new AliasUri((yyvsp[-3].uriconstant_), (yyvsp[-1].packagename_)); (yyval.alias_)->line_number = yy_mylinenumber;  }
#line 1391 "Parser.C"
    break;

  case 4: /* Block: _SYMB_1 ListStatement _SYMB_2  */
#line 178 "fifth.y"
                                      {  (yyval.block_) = new Blk((yyvsp[-1].liststatement_)); (yyval.block_)->line_number = yy_mylinenumber;  }
#line 1397 "Parser.C"
    break;

  case 5: /* FormalParameter: ParamType ParamName  */
#line 180 "fifth.y"
                                      {  (yyval.formalparameter_) = new FParam((yyvsp[-1].paramtype_), (yyvsp[0].paramname_)); (yyval.formalparameter_)->line_number = yy_mylinenumber;  }
#line 1403 "Parser.C"
    break;

  case 6: /* FunctionDeclaration: FunctionName _SYMB_3 ListFormalParameter _SYMB_4 Block  */
#line 182 "fifth.y"
                                                                             {  std::reverse((yyvsp[-2].listformalparameter_)->begin(),(yyvsp[-2].listformalparameter_)->end()) ;(yyval.functiondeclaration_) = new FuncDecl((yyvsp[-4].functionname_), (yyvsp[-2].listformalparameter_), (yyvsp[0].block_)); (yyval.functiondeclaration_)->line_number = yy_mylinenumber;  }
#line 1409 "Parser.C"
    break;

  case 7: /* FunctionName: _IDENT_  */
#line 184 "fifth.y"
                       {  (yyval.functionname_) = new NFunc((yyvsp[0].string_)); (yyval.functionname_)->line_number = yy_mylinenumber;  }
#line 1415 "Parser.C"
    break;

  case 8: /* ModuleImport: _SYMB_22 PackageName _SYMB_0  */
#line 186 "fifth.y"
                                            {  (yyval.moduleimport_) = new ModImp((yyvsp[-1].packagename_)); (yyval.moduleimport_)->line_number = yy_mylinenumber;  }
#line 1421 "Parser.C"
    break;

  case 9: /* PackageName: _IDENT_  */
#line 188 "fifth.y"
                      {  (yyval.packagename_) = new NPkg((yyvsp[0].string_)); (yyval.packagename_)->line_number = yy_mylinenumber;  }
#line 1427 "Parser.C"
    break;

  case 10: /* ParamName: VarName  */
#line 190 "fifth.y"
                    {  (yyval.paramname_) = new NParam((yyvsp[0].varname_)); (yyval.paramname_)->line_number = yy_mylinenumber;  }
#line 1433 "Parser.C"
    break;

  case 11: /* ParamType: TypeName  */
#line 192 "fifth.y"
                     {  (yyval.paramtype_) = new TParam((yyvsp[0].typename_)); (yyval.paramtype_)->line_number = yy_mylinenumber;  }
#line 1439 "Parser.C"
    break;

  case 12: /* Statement: QVarName _SYMB_6 Exp  */
#line 196 "fifth.y"
                                 {  (yyval.statement_) = new SAssign((yyvsp[-2].qvarname_), (yyvsp[0].exp_)); (yyval.statement_)->line_number = yy_mylinenumber;  }
#line 1445 "Parser.C"
    break;

  case 13: /* Statement: _SYMB_21 Exp  */
#line 197 "fifth.y"
                 {  (yyval.statement_) = new SReturn((yyvsp[0].exp_)); (yyval.statement_)->line_number = yy_mylinenumber;  }
#line 1451 "Parser.C"
    break;

  case 14: /* Statement: _SYMB_19 _SYMB_3 Exp _SYMB_4 Block  */
#line 198 "fifth.y"
                                       {  (yyval.statement_) = new SIf((yyvsp[-2].exp_), (yyvsp[0].block_)); (yyval.statement_)->line_number = yy_mylinenumber;  }
#line 1457 "Parser.C"
    break;

  case 15: /* Statement: _SYMB_19 _SYMB_3 Exp _SYMB_4 Block _SYMB_18 Block  */
#line 199 "fifth.y"
                                                      {  (yyval.statement_) = new SIfElse((yyvsp[-4].exp_), (yyvsp[-2].block_), (yyvsp[0].block_)); (yyval.statement_)->line_number = yy_mylinenumber;  }
#line 1463 "Parser.C"
    break;

  case 16: /* Statement: _SYMB_23 Statement  */
#line 200 "fifth.y"
                       {  (yyval.statement_) = new SWith((yyvsp[0].statement_)); (yyval.statement_)->line_number = yy_mylinenumber;  }
#line 1469 "Parser.C"
    break;

  case 17: /* Statement: Exp  */
#line 201 "fifth.y"
        {  (yyval.statement_) = new SBareStmt((yyvsp[0].exp_)); (yyval.statement_)->line_number = yy_mylinenumber;  }
#line 1475 "Parser.C"
    break;

  case 18: /* UriConstant: _SYMB_7 _STRING_ _SYMB_8  */
#line 203 "fifth.y"
                                       {  (yyval.uriconstant_) = new UriConst((yyvsp[-1].string_)); (yyval.uriconstant_)->line_number = yy_mylinenumber;  }
#line 1481 "Parser.C"
    break;

  case 19: /* VarName: _IDENT_  */
#line 205 "fifth.y"
                  {  (yyval.varname_) = new VarNameIdent((yyvsp[0].string_)); (yyval.varname_)->line_number = yy_mylinenumber;  }
#line 1487 "Parser.C"
    break;

  case 20: /* VarName: _SYMB_25  */
#line 206 "fifth.y"
             {  (yyval.varname_) = new VarNamePIdent((yyvsp[0].string_)); (yyval.varname_)->line_number = yy_mylinenumber;  }
#line 1493 "Parser.C"
    break;

  case 21: /* VarName: _SYMB_24  */
#line 207 "fifth.y"
             {  (yyval.varname_) = new VarNameUIdent((yyvsp[0].string_)); (yyval.varname_)->line_number = yy_mylinenumber;  }
#line 1499 "Parser.C"
    break;

  case 22: /* QVarName: ListVarName  */
#line 209 "fifth.y"
                       {  std::reverse((yyvsp[0].listvarname_)->begin(),(yyvsp[0].listvarname_)->end()) ;(yyval.qvarname_) = new QVarName1((yyvsp[0].listvarname_)); (yyval.qvarname_)->line_number = yy_mylinenumber;  }
#line 1505 "Parser.C"
    break;

  case 23: /* Exp: Exp _SYMB_9 Exp  */
#line 211 "fifth.y"
                      {  (yyval.exp_) = new EAnd((yyvsp[-2].exp_), (yyvsp[0].exp_)); (yyval.exp_)->line_number = yy_mylinenumber;  }
#line 1511 "Parser.C"
    break;

  case 24: /* Exp: Exp1  */
#line 212 "fifth.y"
         {  (yyval.exp_) = (yyvsp[0].exp_);  }
#line 1517 "Parser.C"
    break;

  case 25: /* Exp1: Exp1 _SYMB_10 Exp2  */
#line 214 "fifth.y"
                          {  (yyval.exp_) = new EAdd((yyvsp[-2].exp_), (yyvsp[0].exp_)); (yyval.exp_)->line_number = yy_mylinenumber;  }
#line 1523 "Parser.C"
    break;

  case 26: /* Exp1: Exp1 _SYMB_11 Exp2  */
#line 215 "fifth.y"
                       {  (yyval.exp_) = new ESub((yyvsp[-2].exp_), (yyvsp[0].exp_)); (yyval.exp_)->line_number = yy_mylinenumber;  }
#line 1529 "Parser.C"
    break;

  case 27: /* Exp1: Exp2  */
#line 216 "fifth.y"
         {  (yyval.exp_) = (yyvsp[0].exp_);  }
#line 1535 "Parser.C"
    break;

  case 28: /* Exp2: Exp2 _SYMB_12 Exp3  */
#line 218 "fifth.y"
                          {  (yyval.exp_) = new EMul((yyvsp[-2].exp_), (yyvsp[0].exp_)); (yyval.exp_)->line_number = yy_mylinenumber;  }
#line 1541 "Parser.C"
    break;

  case 29: /* Exp2: Exp2 _SYMB_13 Exp3  */
#line 219 "fifth.y"
                       {  (yyval.exp_) = new EDiv((yyvsp[-2].exp_), (yyvsp[0].exp_)); (yyval.exp_)->line_number = yy_mylinenumber;  }
#line 1547 "Parser.C"
    break;

  case 30: /* Exp2: Exp3  */
#line 220 "fifth.y"
         {  (yyval.exp_) = (yyvsp[0].exp_);  }
#line 1553 "Parser.C"
    break;

  case 31: /* Exp3: _INTEGER_  */
#line 222 "fifth.y"
                 {  (yyval.exp_) = new EInt((yyvsp[0].int_)); (yyval.exp_)->line_number = yy_mylinenumber;  }
#line 1559 "Parser.C"
    break;

  case 32: /* Exp3: _DOUBLE_  */
#line 223 "fifth.y"
             {  (yyval.exp_) = new EDouble((yyvsp[0].double_)); (yyval.exp_)->line_number = yy_mylinenumber;  }
#line 1565 "Parser.C"
    break;

  case 33: /* Exp3: _STRING_  */
#line 224 "fifth.y"
             {  (yyval.exp_) = new EString((yyvsp[0].string_)); (yyval.exp_)->line_number = yy_mylinenumber;  }
#line 1571 "Parser.C"
    break;

  case 34: /* Exp3: QVarName  */
#line 225 "fifth.y"
             {  (yyval.exp_) = new EVarname((yyvsp[0].qvarname_)); (yyval.exp_)->line_number = yy_mylinenumber;  }
#line 1577 "Parser.C"
    break;

  case 35: /* Exp3: Exp4  */
#line 226 "fifth.y"
         {  (yyval.exp_) = (yyvsp[0].exp_);  }
#line 1583 "Parser.C"
    break;

  case 36: /* Exp4: FunctionName _SYMB_3 ListExp _SYMB_4  */
#line 228 "fifth.y"
                                            {  std::reverse((yyvsp[-1].listexp_)->begin(),(yyvsp[-1].listexp_)->end()) ;(yyval.exp_) = new EFuncCall((yyvsp[-3].functionname_), (yyvsp[-1].listexp_)); (yyval.exp_)->line_number = yy_mylinenumber;  }
#line 1589 "Parser.C"
    break;

  case 37: /* Exp4: QVarName _SYMB_3 ListExp _SYMB_4  */
#line 229 "fifth.y"
                                     {  std::reverse((yyvsp[-1].listexp_)->begin(),(yyvsp[-1].listexp_)->end()) ;(yyval.exp_) = new EQFuncCall((yyvsp[-3].qvarname_), (yyvsp[-1].listexp_)); (yyval.exp_)->line_number = yy_mylinenumber;  }
#line 1595 "Parser.C"
    break;

  case 38: /* Exp4: Exp5  */
#line 230 "fifth.y"
         {  (yyval.exp_) = (yyvsp[0].exp_);  }
#line 1601 "Parser.C"
    break;

  case 39: /* Exp5: _SYMB_3 Exp _SYMB_4  */
#line 232 "fifth.y"
                           {  (yyval.exp_) = new EFuncParen((yyvsp[-1].exp_)); (yyval.exp_)->line_number = yy_mylinenumber;  }
#line 1607 "Parser.C"
    break;

  case 40: /* Exp5: Exp6  */
#line 233 "fifth.y"
         {  (yyval.exp_) = (yyvsp[0].exp_);  }
#line 1613 "Parser.C"
    break;

  case 41: /* Exp6: _SYMB_14 Exp  */
#line 235 "fifth.y"
                    {  (yyval.exp_) = new ENegation((yyvsp[0].exp_)); (yyval.exp_)->line_number = yy_mylinenumber;  }
#line 1619 "Parser.C"
    break;

  case 42: /* Exp6: _SYMB_20 TypeInitialiser  */
#line 236 "fifth.y"
                             {  (yyval.exp_) = new ETypeCreate((yyvsp[0].typeinitialiser_)); (yyval.exp_)->line_number = yy_mylinenumber;  }
#line 1625 "Parser.C"
    break;

  case 43: /* Exp6: Exp7  */
#line 237 "fifth.y"
         {  (yyval.exp_) = (yyvsp[0].exp_);  }
#line 1631 "Parser.C"
    break;

  case 44: /* TypeInitialiser: TypeName _SYMB_1 ListTypePropertyInit _SYMB_2  */
#line 239 "fifth.y"
                                                                {  std::reverse((yyvsp[-1].listtypepropertyinit_)->begin(),(yyvsp[-1].listtypepropertyinit_)->end()) ;(yyval.typeinitialiser_) = new TypeInt((yyvsp[-3].typename_), (yyvsp[-1].listtypepropertyinit_)); (yyval.typeinitialiser_)->line_number = yy_mylinenumber;  }
#line 1637 "Parser.C"
    break;

  case 45: /* TypeName: QVarName  */
#line 241 "fifth.y"
                    {  (yyval.typename_) = new NTypeName((yyvsp[0].qvarname_)); (yyval.typename_)->line_number = yy_mylinenumber;  }
#line 1643 "Parser.C"
    break;

  case 46: /* TypePropertyInit: VarName _SYMB_6 Exp  */
#line 243 "fifth.y"
                                       {  (yyval.typepropertyinit_) = new TypePropertyInit1((yyvsp[-2].varname_), (yyvsp[0].exp_)); (yyval.typepropertyinit_)->line_number = yy_mylinenumber;  }
#line 1649 "Parser.C"
    break;

  case 47: /* Exp7: Exp8  */
#line 245 "fifth.y"
            {  (yyval.exp_) = (yyvsp[0].exp_);  }
#line 1655 "Parser.C"
    break;

  case 48: /* Exp8: Exp9  */
#line 247 "fifth.y"
            {  (yyval.exp_) = (yyvsp[0].exp_);  }
#line 1661 "Parser.C"
    break;

  case 49: /* Exp9: Exp10  */
#line 249 "fifth.y"
             {  (yyval.exp_) = (yyvsp[0].exp_);  }
#line 1667 "Parser.C"
    break;

  case 50: /* Exp10: _SYMB_3 Exp _SYMB_4  */
#line 251 "fifth.y"
                            {  (yyval.exp_) = (yyvsp[-1].exp_);  }
#line 1673 "Parser.C"
    break;

  case 51: /* ListFormalParameter: %empty  */
#line 253 "fifth.y"
                                  {  (yyval.listformalparameter_) = new ListFormalParameter();  }
#line 1679 "Parser.C"
    break;

  case 52: /* ListFormalParameter: FormalParameter  */
#line 254 "fifth.y"
                    {  (yyval.listformalparameter_) = new ListFormalParameter() ; (yyval.listformalparameter_)->push_back((yyvsp[0].formalparameter_));  }
#line 1685 "Parser.C"
    break;

  case 53: /* ListFormalParameter: FormalParameter _SYMB_15 ListFormalParameter  */
#line 255 "fifth.y"
                                                 {  (yyvsp[0].listformalparameter_)->push_back((yyvsp[-2].formalparameter_)) ; (yyval.listformalparameter_) = (yyvsp[0].listformalparameter_) ;  }
#line 1691 "Parser.C"
    break;

  case 54: /* ListExp: %empty  */
#line 257 "fifth.y"
                      {  (yyval.listexp_) = new ListExp();  }
#line 1697 "Parser.C"
    break;

  case 55: /* ListExp: Exp  */
#line 258 "fifth.y"
        {  (yyval.listexp_) = new ListExp() ; (yyval.listexp_)->push_back((yyvsp[0].exp_));  }
#line 1703 "Parser.C"
    break;

  case 56: /* ListExp: Exp _SYMB_15 ListExp  */
#line 259 "fifth.y"
                         {  (yyvsp[0].listexp_)->push_back((yyvsp[-2].exp_)) ; (yyval.listexp_) = (yyvsp[0].listexp_) ;  }
#line 1709 "Parser.C"
    break;

  case 57: /* ListTypePropertyInit: %empty  */
#line 261 "fifth.y"
                                   {  (yyval.listtypepropertyinit_) = new ListTypePropertyInit();  }
#line 1715 "Parser.C"
    break;

  case 58: /* ListTypePropertyInit: TypePropertyInit  */
#line 262 "fifth.y"
                     {  (yyval.listtypepropertyinit_) = new ListTypePropertyInit() ; (yyval.listtypepropertyinit_)->push_back((yyvsp[0].typepropertyinit_));  }
#line 1721 "Parser.C"
    break;

  case 59: /* ListTypePropertyInit: TypePropertyInit _SYMB_15 ListTypePropertyInit  */
#line 263 "fifth.y"
                                                   {  (yyvsp[0].listtypepropertyinit_)->push_back((yyvsp[-2].typepropertyinit_)) ; (yyval.listtypepropertyinit_) = (yyvsp[0].listtypepropertyinit_) ;  }
#line 1727 "Parser.C"
    break;

  case 60: /* ListVarName: %empty  */
#line 265 "fifth.y"
                          {  (yyval.listvarname_) = new ListVarName();  }
#line 1733 "Parser.C"
    break;

  case 61: /* ListVarName: VarName  */
#line 266 "fifth.y"
            {  (yyval.listvarname_) = new ListVarName() ; (yyval.listvarname_)->push_back((yyvsp[0].varname_));  }
#line 1739 "Parser.C"
    break;

  case 62: /* ListVarName: VarName _SYMB_5 ListVarName  */
#line 267 "fifth.y"
                                {  (yyvsp[0].listvarname_)->push_back((yyvsp[-2].varname_)) ; (yyval.listvarname_) = (yyvsp[0].listvarname_) ;  }
#line 1745 "Parser.C"
    break;

  case 63: /* ListAlias: %empty  */
#line 269 "fifth.y"
                        {  (yyval.listalias_) = new ListAlias();  }
#line 1751 "Parser.C"
    break;

  case 64: /* ListAlias: ListAlias Alias  */
#line 270 "fifth.y"
                    {  (yyvsp[-1].listalias_)->push_back((yyvsp[0].alias_)) ; (yyval.listalias_) = (yyvsp[-1].listalias_) ;  }
#line 1757 "Parser.C"
    break;

  case 65: /* ListFunctionDeclaration: FunctionDeclaration  */
#line 272 "fifth.y"
                                              {  (yyval.listfunctiondeclaration_) = new ListFunctionDeclaration() ; (yyval.listfunctiondeclaration_)->push_back((yyvsp[0].functiondeclaration_));  }
#line 1763 "Parser.C"
    break;

  case 66: /* ListFunctionDeclaration: FunctionDeclaration ListFunctionDeclaration  */
#line 273 "fifth.y"
                                                {  (yyvsp[0].listfunctiondeclaration_)->push_back((yyvsp[-1].functiondeclaration_)) ; (yyval.listfunctiondeclaration_) = (yyvsp[0].listfunctiondeclaration_) ;  }
#line 1769 "Parser.C"
    break;

  case 67: /* ListModuleImport: %empty  */
#line 275 "fifth.y"
                               {  (yyval.listmoduleimport_) = new ListModuleImport();  }
#line 1775 "Parser.C"
    break;

  case 68: /* ListModuleImport: ListModuleImport ModuleImport  */
#line 276 "fifth.y"
                                  {  (yyvsp[-1].listmoduleimport_)->push_back((yyvsp[0].moduleimport_)) ; (yyval.listmoduleimport_) = (yyvsp[-1].listmoduleimport_) ;  }
#line 1781 "Parser.C"
    break;

  case 69: /* ListStatement: %empty  */
#line 278 "fifth.y"
                            {  (yyval.liststatement_) = new ListStatement();  }
#line 1787 "Parser.C"
    break;

  case 70: /* ListStatement: ListStatement Statement _SYMB_0  */
#line 279 "fifth.y"
                                    {  (yyvsp[-2].liststatement_)->push_back((yyvsp[-1].statement_)) ; (yyval.liststatement_) = (yyvsp[-2].liststatement_) ;  }
#line 1793 "Parser.C"
    break;


#line 1797 "Parser.C"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

