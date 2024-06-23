/* A Bison parser, made by GNU Bison 3.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 22 "ldgram.y"

/*

 */

#define DONTDECLARE_MALLOC

#include "sysdep.h"
#include "bfd.h"
#include "bfdlink.h"
#include "ctf-api.h"
#include "ld.h"
#include "ldexp.h"
#include "ldver.h"
#include "ldlang.h"
#include "ldfile.h"
#include "ldemul.h"
#include "ldmisc.h"
#include "ldmain.h"
#include "mri.h"
#include "ldctor.h"
#include "ldlex.h"

#ifndef YYDEBUG
#define YYDEBUG 1
#endif

static enum section_type sectype;
static lang_memory_region_type *region;

static bool ldgram_had_keep = false;
static char *ldgram_vers_current_lang = NULL;

#define ERROR_NAME_MAX 20
static char *error_names[ERROR_NAME_MAX];
static int error_index;
#define PUSH_ERROR(x) if (error_index < ERROR_NAME_MAX) error_names[error_index] = x; error_index++;
#define POP_ERROR()   error_index--;

#line 110 "ldgram.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_LDGRAM_H_INCLUDED
# define YY_YY_LDGRAM_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    NAME = 259,
    LNAME = 260,
    PLUSEQ = 261,
    MINUSEQ = 262,
    MULTEQ = 263,
    DIVEQ = 264,
    LSHIFTEQ = 265,
    RSHIFTEQ = 266,
    ANDEQ = 267,
    OREQ = 268,
    OROR = 269,
    ANDAND = 270,
    EQ = 271,
    NE = 272,
    LE = 273,
    GE = 274,
    LSHIFT = 275,
    RSHIFT = 276,
    UNARY = 277,
    END = 278,
    ALIGN_K = 279,
    BLOCK = 280,
    BIND = 281,
    QUAD = 282,
    SQUAD = 283,
    LONG = 284,
    SHORT = 285,
    BYTE = 286,
    SECTIONS = 287,
    PHDRS = 288,
    INSERT_K = 289,
    AFTER = 290,
    BEFORE = 291,
    DATA_SEGMENT_ALIGN = 292,
    DATA_SEGMENT_RELRO_END = 293,
    DATA_SEGMENT_END = 294,
    SORT_BY_NAME = 295,
    SORT_BY_ALIGNMENT = 296,
    SORT_NONE = 297,
    SORT_BY_INIT_PRIORITY = 298,
    SIZEOF_HEADERS = 299,
    OUTPUT_FORMAT = 300,
    FORCE_COMMON_ALLOCATION = 301,
    OUTPUT_ARCH = 302,
    INHIBIT_COMMON_ALLOCATION = 303,
    FORCE_GROUP_ALLOCATION = 304,
    SEGMENT_START = 305,
    INCLUDE = 306,
    MEMORY = 307,
    REGION_ALIAS = 308,
    LD_FEATURE = 309,
    NOLOAD = 310,
    DSECT = 311,
    COPY = 312,
    INFO = 313,
    OVERLAY = 314,
    DEFINED = 315,
    TARGET_K = 316,
    SEARCH_DIR = 317,
    MAP = 318,
    ENTRY = 319,
    NEXT = 320,
    SIZEOF = 321,
    ALIGNOF = 322,
    ADDR = 323,
    LOADADDR = 324,
    MAX_K = 325,
    MIN_K = 326,
    STARTUP = 327,
    HLL = 328,
    SYSLIB = 329,
    FLOAT = 330,
    NOFLOAT = 331,
    NOCROSSREFS = 332,
    NOCROSSREFS_TO = 333,
    ORIGIN = 334,
    FILL = 335,
    LENGTH = 336,
    CREATE_OBJECT_SYMBOLS = 337,
    INPUT = 338,
    GROUP = 339,
    OUTPUT = 340,
    CONSTRUCTORS = 341,
    ALIGNMOD = 342,
    AT = 343,
    SUBALIGN = 344,
    HIDDEN = 345,
    PROVIDE = 346,
    PROVIDE_HIDDEN = 347,
    AS_NEEDED = 348,
    CHIP = 349,
    LIST = 350,
    SECT = 351,
    ABSOLUTE = 352,
    LOAD = 353,
    NEWLINE = 354,
    ENDWORD = 355,
    ORDER = 356,
    NAMEWORD = 357,
    ASSERT_K = 358,
    LOG2CEIL = 359,
    FORMAT = 360,
    PUBLIC = 361,
    DEFSYMEND = 362,
    BASE = 363,
    ALIAS = 364,
    TRUNCATE = 365,
    REL = 366,
    INPUT_SCRIPT = 367,
    INPUT_MRI_SCRIPT = 368,
    INPUT_DEFSYM = 369,
    CASE = 370,
    EXTERN = 371,
    START = 372,
    VERS_TAG = 373,
    VERS_IDENTIFIER = 374,
    GLOBAL = 375,
    LOCAL = 376,
    VERSIONK = 377,
    INPUT_VERSION_SCRIPT = 378,
    KEEP = 379,
    ONLY_IF_RO = 380,
    ONLY_IF_RW = 381,
    SPECIAL = 382,
    INPUT_SECTION_FLAGS = 383,
    ALIGN_WITH_INPUT = 384,
    EXCLUDE_FILE = 385,
    CONSTANT = 386,
    INPUT_DYNAMIC_LIST = 387
  };
#endif
/* Tokens.  */
#define INT 258
#define NAME 259
#define LNAME 260
#define PLUSEQ 261
#define MINUSEQ 262
#define MULTEQ 263
#define DIVEQ 264
#define LSHIFTEQ 265
#define RSHIFTEQ 266
#define ANDEQ 267
#define OREQ 268
#define OROR 269
#define ANDAND 270
#define EQ 271
#define NE 272
#define LE 273
#define GE 274
#define LSHIFT 275
#define RSHIFT 276
#define UNARY 277
#define END 278
#define ALIGN_K 279
#define BLOCK 280
#define BIND 281
#define QUAD 282
#define SQUAD 283
#define LONG 284
#define SHORT 285
#define BYTE 286
#define SECTIONS 287
#define PHDRS 288
#define INSERT_K 289
#define AFTER 290
#define BEFORE 291
#define DATA_SEGMENT_ALIGN 292
#define DATA_SEGMENT_RELRO_END 293
#define DATA_SEGMENT_END 294
#define SORT_BY_NAME 295
#define SORT_BY_ALIGNMENT 296
#define SORT_NONE 297
#define SORT_BY_INIT_PRIORITY 298
#define SIZEOF_HEADERS 299
#define OUTPUT_FORMAT 300
#define FORCE_COMMON_ALLOCATION 301
#define OUTPUT_ARCH 302
#define INHIBIT_COMMON_ALLOCATION 303
#define FORCE_GROUP_ALLOCATION 304
#define SEGMENT_START 305
#define INCLUDE 306
#define MEMORY 307
#define REGION_ALIAS 308
#define LD_FEATURE 309
#define NOLOAD 310
#define DSECT 311
#define COPY 312
#define INFO 313
#define OVERLAY 314
#define DEFINED 315
#define TARGET_K 316
#define SEARCH_DIR 317
#define MAP 318
#define ENTRY 319
#define NEXT 320
#define SIZEOF 321
#define ALIGNOF 322
#define ADDR 323
#define LOADADDR 324
#define MAX_K 325
#define MIN_K 326
#define STARTUP 327
#define HLL 328
#define SYSLIB 329
#define FLOAT 330
#define NOFLOAT 331
#define NOCROSSREFS 332
#define NOCROSSREFS_TO 333
#define ORIGIN 334
#define FILL 335
#define LENGTH 336
#define CREATE_OBJECT_SYMBOLS 337
#define INPUT 338
#define GROUP 339
#define OUTPUT 340
#define CONSTRUCTORS 341
#define ALIGNMOD 342
#define AT 343
#define SUBALIGN 344
#define HIDDEN 345
#define PROVIDE 346
#define PROVIDE_HIDDEN 347
#define AS_NEEDED 348
#define CHIP 349
#define LIST 350
#define SECT 351
#define ABSOLUTE 352
#define LOAD 353
#define NEWLINE 354
#define ENDWORD 355
#define ORDER 356
#define NAMEWORD 357
#define ASSERT_K 358
#define LOG2CEIL 359
#define FORMAT 360
#define PUBLIC 361
#define DEFSYMEND 362
#define BASE 363
#define ALIAS 364
#define TRUNCATE 365
#define REL 366
#define INPUT_SCRIPT 367
#define INPUT_MRI_SCRIPT 368
#define INPUT_DEFSYM 369
#define CASE 370
#define EXTERN 371
#define START 372
#define VERS_TAG 373
#define VERS_IDENTIFIER 374
#define GLOBAL 375
#define LOCAL 376
#define VERSIONK 377
#define INPUT_VERSION_SCRIPT 378
#define KEEP 379
#define ONLY_IF_RO 380
#define ONLY_IF_RW 381
#define SPECIAL 382
#define INPUT_SECTION_FLAGS 383
#define ALIGN_WITH_INPUT 384
#define EXCLUDE_FILE 385
#define CONSTANT 386
#define INPUT_DYNAMIC_LIST 387

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 61 "ldgram.y"

  bfd_vma integer;
  struct big_int
    {
      bfd_vma integer;
      char *str;
    } bigint;
  fill_type *fill;
  char *name;
  const char *cname;
  struct wildcard_spec wildcard;
  struct wildcard_list *wildcard_list;
  struct name_list *name_list;
  struct flag_info_list *flag_info_list;
  struct flag_info *flag_info;
  int token;
  union etree_union *etree;
  struct phdr_info
    {
      bool filehdr;
      bool phdrs;
      union etree_union *at;
      union etree_union *flags;
    } phdr;
  struct lang_nocrossref *nocrossref;
  struct lang_output_section_phdr_list *section_phdr;
  struct bfd_elf_version_deps *deflist;
  struct bfd_elf_version_expr *versyms;
  struct bfd_elf_version_tree *versnode;

#line 457 "ldgram.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_LDGRAM_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1979

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  156
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  133
/* YYNRULES -- Number of rules.  */
#define YYNRULES  376
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  812

#define YYUNDEFTOK  2
#define YYMAXUTOK   387


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   154,     2,     2,     2,    34,    21,     2,
      37,   151,    32,    30,   149,    31,     2,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    16,   150,
      24,    10,    25,    15,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   152,     2,   153,    20,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,    19,    59,   155,     2,     2,     2,
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
       5,     6,     7,     8,     9,    11,    12,    13,    14,    17,
      18,    22,    23,    26,    27,    28,    29,    35,    36,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   167,   167,   168,   169,   170,   171,   175,   179,   179,
     186,   186,   199,   200,   204,   205,   206,   209,   212,   213,
     214,   216,   218,   220,   222,   224,   226,   228,   230,   232,
     234,   236,   237,   238,   240,   242,   244,   246,   248,   249,
     251,   250,   254,   256,   260,   261,   262,   266,   268,   272,
     274,   279,   280,   281,   286,   286,   291,   293,   295,   300,
     300,   306,   307,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   324,   326,   328,   331,   333,   335,
     337,   339,   341,   343,   342,   346,   349,   348,   352,   356,
     360,   361,   363,   365,   367,   372,   372,   377,   380,   383,
     386,   389,   392,   396,   395,   401,   400,   406,   405,   413,
     417,   418,   419,   423,   425,   426,   426,   434,   438,   442,
     449,   456,   466,   467,   472,   480,   481,   486,   491,   496,
     501,   506,   511,   516,   523,   541,   562,   575,   584,   595,
     604,   615,   624,   633,   637,   646,   650,   658,   660,   659,
     666,   667,   671,   672,   677,   682,   683,   688,   692,   692,
     696,   695,   702,   703,   706,   708,   712,   714,   716,   718,
     720,   725,   732,   734,   738,   740,   742,   744,   746,   748,
     750,   752,   757,   757,   762,   766,   774,   778,   782,   790,
     790,   794,   797,   797,   800,   801,   806,   805,   811,   810,
     817,   824,   832,   833,   837,   838,   842,   844,   849,   854,
     855,   860,   862,   867,   871,   873,   877,   879,   885,   888,
     897,   908,   908,   914,   916,   918,   920,   922,   924,   927,
     929,   931,   933,   935,   937,   939,   941,   943,   945,   947,
     949,   951,   953,   955,   957,   959,   961,   963,   965,   967,
     969,   972,   974,   976,   978,   980,   982,   984,   986,   988,
     990,   992,   994,  1003,  1005,  1007,  1009,  1011,  1013,  1015,
    1017,  1023,  1024,  1028,  1029,  1033,  1034,  1038,  1039,  1043,
    1044,  1048,  1049,  1050,  1051,  1054,  1059,  1062,  1068,  1070,
    1054,  1081,  1083,  1085,  1090,  1092,  1080,  1107,  1109,  1107,
    1115,  1114,  1121,  1122,  1123,  1124,  1125,  1129,  1130,  1131,
    1135,  1136,  1141,  1142,  1147,  1148,  1153,  1154,  1159,  1161,
    1166,  1169,  1182,  1186,  1191,  1193,  1184,  1201,  1204,  1206,
    1210,  1211,  1210,  1220,  1265,  1268,  1281,  1290,  1293,  1300,
    1300,  1312,  1313,  1317,  1321,  1330,  1330,  1344,  1344,  1354,
    1355,  1359,  1363,  1367,  1374,  1378,  1386,  1389,  1393,  1397,
    1401,  1408,  1412,  1416,  1420,  1425,  1424,  1438,  1437,  1447,
    1451,  1455,  1459,  1463,  1467,  1473,  1475
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "NAME", "LNAME", "PLUSEQ",
  "MINUSEQ", "MULTEQ", "DIVEQ", "'='", "LSHIFTEQ", "RSHIFTEQ", "ANDEQ",
  "OREQ", "'?'", "':'", "OROR", "ANDAND", "'|'", "'^'", "'&'", "EQ", "NE",
  "'<'", "'>'", "LE", "GE", "LSHIFT", "RSHIFT", "'+'", "'-'", "'*'", "'/'",
  "'%'", "UNARY", "END", "'('", "ALIGN_K", "BLOCK", "BIND", "QUAD",
  "SQUAD", "LONG", "SHORT", "BYTE", "SECTIONS", "PHDRS", "INSERT_K",
  "AFTER", "BEFORE", "DATA_SEGMENT_ALIGN", "DATA_SEGMENT_RELRO_END",
  "DATA_SEGMENT_END", "SORT_BY_NAME", "SORT_BY_ALIGNMENT", "SORT_NONE",
  "SORT_BY_INIT_PRIORITY", "'{'", "'}'", "SIZEOF_HEADERS", "OUTPUT_FORMAT",
  "FORCE_COMMON_ALLOCATION", "OUTPUT_ARCH", "INHIBIT_COMMON_ALLOCATION",
  "FORCE_GROUP_ALLOCATION", "SEGMENT_START", "INCLUDE", "MEMORY",
  "REGION_ALIAS", "LD_FEATURE", "NOLOAD", "DSECT", "COPY", "INFO",
  "OVERLAY", "DEFINED", "TARGET_K", "SEARCH_DIR", "MAP", "ENTRY", "NEXT",
  "SIZEOF", "ALIGNOF", "ADDR", "LOADADDR", "MAX_K", "MIN_K", "STARTUP",
  "HLL", "SYSLIB", "FLOAT", "NOFLOAT", "NOCROSSREFS", "NOCROSSREFS_TO",
  "ORIGIN", "FILL", "LENGTH", "CREATE_OBJECT_SYMBOLS", "INPUT", "GROUP",
  "OUTPUT", "CONSTRUCTORS", "ALIGNMOD", "AT", "SUBALIGN", "HIDDEN",
  "PROVIDE", "PROVIDE_HIDDEN", "AS_NEEDED", "CHIP", "LIST", "SECT",
  "ABSOLUTE", "LOAD", "NEWLINE", "ENDWORD", "ORDER", "NAMEWORD",
  "ASSERT_K", "LOG2CEIL", "FORMAT", "PUBLIC", "DEFSYMEND", "BASE", "ALIAS",
  "TRUNCATE", "REL", "INPUT_SCRIPT", "INPUT_MRI_SCRIPT", "INPUT_DEFSYM",
  "CASE", "EXTERN", "START", "VERS_TAG", "VERS_IDENTIFIER", "GLOBAL",
  "LOCAL", "VERSIONK", "INPUT_VERSION_SCRIPT", "KEEP", "ONLY_IF_RO",
  "ONLY_IF_RW", "SPECIAL", "INPUT_SECTION_FLAGS", "ALIGN_WITH_INPUT",
  "EXCLUDE_FILE", "CONSTANT", "INPUT_DYNAMIC_LIST", "','", "';'", "')'",
  "'['", "']'", "'!'", "'~'", "$accept", "file", "filename", "defsym_expr",
  "$@1", "mri_script_file", "$@2", "mri_script_lines",
  "mri_script_command", "$@3", "ordernamelist", "mri_load_name_list",
  "mri_abs_name_list", "casesymlist", "extern_name_list", "$@4",
  "extern_name_list_body", "script_file", "$@5", "ifile_list", "ifile_p1",
  "$@6", "$@7", "input_list", "$@8", "input_list1", "@9", "@10", "@11",
  "sections", "sec_or_group_p1", "statement_anywhere", "$@12",
  "wildcard_name", "wildcard_maybe_exclude", "filename_spec",
  "section_name_spec", "sect_flag_list", "sect_flags", "exclude_name_list",
  "section_name_list", "input_section_spec_no_keep", "input_section_spec",
  "$@13", "statement", "$@14", "$@15", "statement_list",
  "statement_list_opt", "length", "fill_exp", "fill_opt", "assign_op",
  "end", "assignment", "opt_comma", "memory", "memory_spec_list_opt",
  "memory_spec_list", "memory_spec", "$@16", "$@17", "origin_spec",
  "length_spec", "attributes_opt", "attributes_list", "attributes_string",
  "startup", "high_level_library", "high_level_library_NAME_list",
  "low_level_library", "low_level_library_NAME_list",
  "floating_point_support", "nocrossref_list", "mustbe_exp", "$@18", "exp",
  "memspec_at_opt", "opt_at", "opt_align", "opt_align_with_input",
  "opt_subalign", "sect_constraint", "section", "$@19", "$@20", "$@21",
  "$@22", "$@23", "$@24", "$@25", "$@26", "$@27", "$@28", "$@29", "$@30",
  "$@31", "type", "atype", "opt_exp_with_type", "opt_exp_without_type",
  "opt_nocrossrefs", "memspec_opt", "phdr_opt", "overlay_section", "$@32",
  "$@33", "$@34", "phdrs", "phdr_list", "phdr", "$@35", "$@36",
  "phdr_type", "phdr_qualifiers", "phdr_val", "dynamic_list_file", "$@37",
  "dynamic_list_nodes", "dynamic_list_node", "dynamic_list_tag",
  "version_script_file", "$@38", "version", "$@39", "vers_nodes",
  "vers_node", "verdep", "vers_tag", "vers_defns", "@40", "@41",
  "opt_semicolon", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      61,   265,   266,   267,   268,    63,    58,   269,   270,   124,
      94,    38,   271,   272,    60,    62,   273,   274,   275,   276,
      43,    45,    42,    47,    37,   277,   278,    40,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   123,   125,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,    44,
      59,    41,    91,    93,    33,   126
};
# endif

#define YYPACT_NINF (-665)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-348)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -53,  -665,  -665,  -665,  -665,  -665,    55,  -665,  -665,  -665,
    -665,  -665,   129,  -665,   -32,  -665,    35,  -665,   915,  1745,
     546,    90,    97,   106,  -665,   107,    96,   -32,  -665,   115,
      35,  -665,   201,   209,    34,   253,  -665,   264,  -665,  -665,
      69,   254,   285,   297,   298,   301,   302,   303,   304,   309,
     310,  -665,  -665,   311,   312,   316,  -665,   317,  -665,   318,
    -665,  -665,  -665,  -665,    44,  -665,  -665,  -665,  -665,  -665,
    -665,  -665,   143,  -665,   352,    69,   354,   760,  -665,   355,
     356,   357,  -665,  -665,   363,   364,   365,   760,   367,   369,
     375,  -665,   376,   258,  -665,  -665,  -665,  -665,  -665,  -665,
    -665,  -665,  -665,  -665,   377,   379,   380,  -665,   381,  -665,
     371,   378,   332,   245,   107,  -665,  -665,  -665,   338,   255,
    -665,  -665,  -665,   394,   400,   402,   404,  -665,  -665,    63,
     414,   415,   416,    69,    69,   418,    69,     4,  -665,   422,
     422,  -665,   393,    69,   396,  -665,  -665,  -665,  -665,   373,
      28,  -665,    41,  -665,  -665,   760,   760,   760,   397,   398,
     399,   405,   406,  -665,   407,   408,   409,   410,   412,   413,
     423,   424,   426,   427,   428,   429,   431,   442,   443,   760,
     760,   871,   372,  -665,   288,  -665,   290,    13,  -665,  -665,
     485,  1928,   292,  -665,  -665,   333,  -665,   447,  -665,  -665,
    -665,   760,  -665,   471,   473,   474,   432,   115,   115,   336,
     133,   434,   337,   133,   244,    32,  -665,  -665,   -55,   343,
    -665,  -665,    69,   437,    -1,  -665,   348,   351,   353,   358,
     361,   362,   366,  -665,  -665,   -25,   135,    16,   374,   384,
     388,    23,  -665,   389,   760,   391,   -32,   760,   760,  -665,
     760,   760,  -665,  -665,  1127,   760,   760,   760,   760,   760,
     448,   495,   760,   499,   501,   503,   510,   760,   760,   514,
     524,   760,   760,   760,   525,  -665,  -665,   760,   760,   760,
     760,   760,   760,   760,   760,   760,   760,   760,   760,   760,
     760,   760,   760,   760,   760,   760,   760,   760,   760,  1928,
     526,   527,  -665,   528,   760,   760,  1928,   148,   530,  -665,
      17,  1928,  -665,  -665,  -665,  -665,   425,   433,  -665,  -665,
     539,  -665,  -665,  -665,   -52,  -665,   546,  -665,    69,  -665,
    -665,  -665,  -665,  -665,  -665,  -665,   540,  -665,  -665,   993,
     509,  -665,  -665,  -665,    63,   543,  -665,  -665,  -665,  -665,
    -665,  -665,  -665,    69,  -665,    69,   422,  -665,  -665,  -665,
    -665,  -665,  -665,   512,    20,   411,  -665,  1552,  -665,   -14,
    1928,  1928,  1769,  1928,  1928,  -665,   925,  1147,  1572,  1592,
    1167,   401,   430,  1187,   435,   436,   439,   440,  1612,  1632,
     444,   445,  1207,  1685,  1227,   446,  1888,  1945,  1107,   753,
    1241,  1375,   691,   691,   299,   299,   299,   299,   383,   383,
     224,   224,  -665,  -665,  -665,  1928,  1928,  1928,  -665,  -665,
    -665,  1928,  1928,  -665,  -665,  -665,  -665,   559,   449,   450,
     451,   115,   156,   133,   506,  -665,  -665,   -37,   590,  -665,
     675,   590,   760,   454,  -665,     3,   549,    63,  -665,   455,
    -665,  -665,  -665,  -665,  -665,  -665,   536,    38,  -665,   572,
    -665,  -665,   760,  -665,  -665,   760,   760,  -665,   760,  -665,
    -665,  -665,  -665,  -665,  -665,   760,   760,  -665,  -665,  -665,
     573,  -665,  -665,   760,  -665,  -665,  -665,  -665,   457,   562,
    -665,  -665,  -665,   223,   542,  1796,   569,   504,  -665,  -665,
    1908,   516,  -665,  1928,    19,   595,  -665,   606,     2,  -665,
     517,   575,  -665,    23,  -665,  -665,  -665,   576,   465,  1262,
    1282,  1302,  1322,  1342,  1362,   466,  1928,   133,   556,   115,
     115,  -665,  -665,  -665,  -665,  -665,  -665,   467,   760,   242,
     603,  -665,   585,   586,   321,  -665,  -665,   504,   565,   589,
     596,  -665,   484,  -665,  -665,  -665,   615,   487,  -665,    27,
      23,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,
    -665,   494,   457,  -665,  1397,  -665,   760,   600,   500,  -665,
     541,  -665,   760,    19,   760,   498,  -665,  -665,   552,  -665,
      36,    23,   133,   592,   248,  1417,   760,  -665,   541,   616,
    -665,   588,  1437,  -665,  1457,  -665,  -665,   642,  -665,  -665,
      49,  -665,   617,   641,  -665,  1477,  -665,   760,   601,  -665,
    -665,    19,  -665,  -665,   760,  -665,  -665,   130,  1497,  -665,
    -665,  -665,  1532,  -665,  -665,  -665,   602,  -665,  -665,   621,
    -665,    62,   645,   820,  -665,  -665,  -665,   464,  -665,  -665,
    -665,  -665,  -665,  -665,  -665,   627,   628,    69,   630,  -665,
    -665,  -665,   632,   633,   643,  -665,    53,  -665,  -665,   644,
      18,  -665,  -665,  -665,   820,   623,   646,    44,   626,   661,
     131,    85,  -665,  -665,   652,  -665,   686,   234,  -665,   655,
     660,   663,   664,  -665,  -665,   -97,    53,   665,   667,    53,
     671,  -665,  -665,  -665,  -665,   820,   694,   607,   578,   579,
     580,   820,   581,  -665,   760,    15,  -665,    -9,  -665,    33,
      84,    86,    85,    85,  -665,    53,   151,    85,    92,    53,
     661,   582,   677,  -665,   709,  -665,  -665,  -665,  -665,   702,
    -665,  1705,   591,   597,   735,  -665,   234,  -665,   703,   706,
     598,   710,   713,   604,   614,   618,  -665,  -665,  -665,   172,
     607,  -665,  -665,   742,   134,  -665,   748,  -665,  -665,  -665,
      85,    85,  -665,    85,    85,  -665,  -665,  -665,  -665,  -665,
    -665,  -665,  -665,   749,  -665,   620,   638,   649,   650,   651,
     134,   134,  -665,  -665,   487,    44,   653,   654,   656,   657,
    -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,   487,   487,
    -665,  -665
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,    59,    10,     8,   345,   339,     0,     2,    62,     3,
      13,     6,     0,     4,     0,     5,     0,     1,    60,    11,
       0,     0,     0,     0,     9,   356,     0,   346,   349,     0,
     340,   341,     0,     0,     0,     0,    79,     0,    81,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   216,   217,     0,     0,     0,    83,     0,   115,     0,
      72,    61,    64,    70,     0,    63,    66,    67,    68,    69,
      65,    71,     0,    16,     0,     0,     0,     0,    17,     0,
       0,     0,    19,    46,     0,     0,     0,     0,     0,     0,
      51,    54,     0,     0,   174,   175,   176,   177,   221,   178,
     179,   180,   181,   221,     0,     0,     0,   362,   373,   361,
     369,   371,     0,     0,   356,   350,   369,   371,     0,     0,
     342,   112,   328,     0,     0,     0,     0,     7,    86,   193,
       0,     0,     0,     0,     0,     0,     0,     0,   215,   218,
     218,    95,     0,     0,     0,    54,   183,   182,   114,     0,
       0,    40,     0,   249,   264,     0,     0,     0,     0,     0,
       0,     0,     0,   250,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    14,     0,    49,    31,    47,    32,    18,    33,    23,
       0,    36,     0,    37,    52,    38,    39,     0,    42,    12,
     184,     0,   185,     0,     0,     0,     0,     0,     0,     0,
     357,     0,     0,   344,     0,     0,    91,    92,     0,     0,
      62,   196,     0,     0,   190,   195,     0,     0,     0,     0,
       0,     0,     0,   210,   212,   190,   190,   218,     0,     0,
       0,     0,    95,     0,     0,     0,     0,     0,     0,    13,
       0,     0,   227,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   226,   228,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
       0,     0,    45,     0,     0,     0,    22,     0,     0,    56,
      55,   222,   221,   221,   221,   367,     0,     0,   351,   364,
     374,   363,   370,   372,     0,   343,   285,   109,     0,   291,
     297,   111,   110,   330,   327,   329,     0,    76,    78,   347,
     202,   198,   191,   189,     0,     0,    94,    73,    74,    85,
     113,   208,   209,     0,   213,     0,   218,   219,    88,    89,
      82,    97,   100,     0,    96,     0,    75,     0,    90,     0,
      27,    28,    43,    29,    30,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   247,   246,   244,
     243,   242,   236,   237,   240,   241,   238,   239,   234,   235,
     232,   233,   229,   230,   231,    15,    26,    24,    50,    48,
      44,    20,    21,    35,    34,    53,    57,     0,     0,     0,
       0,     0,   358,   359,     0,   354,   352,     0,   308,   300,
       0,   308,     0,     0,    87,     0,     0,   193,   194,     0,
     211,   214,   220,   103,    99,   102,     0,     0,    84,     0,
     348,    41,     0,   257,   263,     0,     0,   261,     0,   248,
     225,   252,   251,   253,   254,     0,     0,   268,   269,   256,
       0,   270,   255,     0,    58,   186,   187,   188,   375,   372,
     365,   355,   353,     0,     0,   308,     0,   274,   112,   315,
       0,   316,   298,   333,   334,     0,   206,     0,     0,   204,
       0,     0,    93,     0,   107,    98,   101,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   245,   376,     0,     0,
       0,   302,   303,   304,   305,   306,   309,     0,     0,     0,
       0,   311,     0,   276,     0,   314,   317,   274,     0,   337,
       0,   331,     0,   207,   203,   205,     0,   190,   199,     0,
       0,   105,   116,   258,   259,   260,   262,   265,   266,   267,
     368,     0,   375,   307,     0,   310,     0,     0,   278,   301,
     280,   112,     0,   334,     0,     0,    77,   221,     0,   104,
       0,     0,   360,     0,   308,     0,     0,   277,   280,     0,
     292,     0,     0,   335,     0,   332,   200,     0,   197,   108,
       0,   366,     0,     0,   273,     0,   286,     0,     0,   299,
     338,   334,   221,   106,     0,   312,   275,   284,     0,   293,
     336,   201,     0,   281,   282,   283,     0,   279,   322,   308,
     287,     0,     0,   164,   323,   294,   313,   141,   119,   118,
     166,   167,   168,   169,   170,     0,     0,     0,     0,   151,
     153,   158,     0,     0,     0,   152,     0,   120,   122,     0,
       0,   147,   155,   163,   165,     0,     0,     0,     0,   319,
       0,     0,   160,   221,     0,   148,     0,     0,   117,     0,
       0,     0,     0,   125,   140,   190,     0,   142,     0,     0,
       0,   162,   288,   221,   150,   164,     0,   272,     0,     0,
       0,   164,     0,   171,     0,     0,   134,     0,   138,     0,
       0,     0,     0,     0,   143,     0,   190,     0,   190,     0,
     319,     0,     0,   318,     0,   320,   154,   123,   124,     0,
     157,     0,   117,     0,     0,   136,     0,   137,     0,     0,
       0,     0,     0,     0,     0,     0,   139,   145,   144,   190,
     272,   156,   324,     0,   173,   161,     0,   149,   135,   121,
       0,     0,   126,     0,     0,   127,   128,   133,   146,   320,
     320,   271,   221,     0,   295,     0,     0,     0,     0,     0,
     173,   173,   172,   321,   190,     0,     0,     0,     0,     0,
     289,   325,   296,   159,   130,   129,   131,   132,   190,   190,
     290,   326
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -665,  -665,   -73,  -665,  -665,  -665,  -665,   505,  -665,  -665,
    -665,  -665,  -665,  -665,   622,  -665,  -665,  -665,  -665,   548,
    -665,  -665,  -665,   550,  -665,  -479,  -665,  -665,  -665,  -665,
    -459,   -13,  -665,  -641,  1079,   123,    71,  -665,  -665,  -665,
    -637,    51,  -665,  -665,   132,  -665,  -665,  -665,  -465,  -665,
      21,  -527,  -665,  -664,   -12,  -220,  -665,   368,  -665,   470,
    -665,  -665,  -665,  -665,  -665,  -665,   308,  -665,  -665,  -665,
    -665,  -665,  -665,  -122,   -89,  -665,   -76,    50,   262,  -665,
    -665,   219,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,
    -665,  -665,  -665,  -665,  -665,  -665,  -665,  -665,  -466,   382,
    -665,  -665,    88,  -501,  -665,  -665,  -665,  -665,  -665,  -665,
    -665,  -665,  -665,  -665,  -534,  -665,  -665,  -665,  -665,   789,
    -665,  -665,  -665,  -665,  -665,   587,   -24,  -665,   707,   -19,
    -665,  -665,   256
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,   128,    11,    12,     9,    10,    19,    93,   249,
     187,   186,   184,   195,   196,   197,   310,     7,     8,    18,
      61,   142,   220,   240,   241,   364,   513,   591,   560,    62,
     214,   331,   144,   667,   668,   669,   694,   717,   670,   719,
     695,   671,   672,   715,   673,   684,   711,   674,   675,   676,
     712,   784,   103,   148,    64,   725,    65,   223,   224,   225,
     340,   447,   557,   608,   446,   508,   509,    66,    67,   235,
      68,   236,    69,   238,   713,   201,   254,   735,   543,   578,
     598,   600,   636,   332,   438,   627,   643,   730,   808,   440,
     618,   638,   679,   794,   441,   548,   498,   537,   496,   497,
     501,   547,   707,   764,   641,   678,   780,   809,    70,   215,
     335,   442,   585,   504,   551,   583,    15,    16,    30,    31,
     118,    13,    14,    71,    72,    27,    28,   437,   112,   113,
     530,   431,   528
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,   181,   151,   115,   344,    63,   506,   506,   127,   200,
     119,   191,   744,   704,   202,   353,   355,   302,   239,   742,
     237,   426,   697,   549,   454,   455,    25,   361,   362,   540,
     648,   454,   455,   648,   559,  -192,   333,   688,   247,   544,
     454,   455,   515,   516,    25,   460,   718,   649,   648,   603,
     649,   250,   343,   454,   455,    17,   724,   688,  -192,   726,
     229,   230,   728,   232,   234,   649,   644,   221,   648,   698,
     243,   656,   698,   127,   656,     1,     2,     3,   747,   252,
     253,   590,   435,   123,   124,   649,     4,   630,   688,   688,
     688,   334,   759,    29,   336,     5,   337,   491,   436,   648,
     648,   648,    26,   275,   276,   769,   299,   689,   690,   691,
     692,   107,   610,   492,   306,   357,   649,   649,   649,   107,
      26,   645,   601,   550,   343,   311,   352,   104,   613,   456,
     222,   803,   363,    20,   105,   688,   456,   319,   748,   749,
     751,   752,   745,   106,   782,   456,   648,   517,   343,   341,
     783,   423,   424,   554,   114,   233,   507,   507,   456,   663,
     319,   664,   303,   649,   664,   356,   427,   666,   367,   457,
     699,   370,   371,   642,   373,   374,   457,   248,   589,   376,
     377,   378,   379,   380,   746,   457,   383,   609,   316,   317,
     251,   388,   389,   146,   147,   392,   393,   394,   457,   664,
     623,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   428,   429,   430,   153,   154,   421,   422,
     664,   664,   664,   708,   452,    21,    22,    23,   688,   108,
     732,   343,   109,   110,   111,   758,   739,   108,   326,   648,
     109,   116,   117,   155,   156,   439,   293,   294,   295,   121,
     157,   158,   159,   800,   801,   320,   649,   122,   321,   322,
     323,   633,   634,   635,   160,   161,   162,   664,   790,   791,
     450,   149,   451,   163,   343,   539,   354,   612,   320,   164,
     125,   321,   322,   489,   531,   532,   533,   534,   535,   165,
     343,   126,   757,   327,   166,   167,   168,   169,   170,   171,
     172,   328,   129,   531,   532,   533,   534,   535,   173,   329,
     174,   343,   130,   778,    47,   326,    63,   289,   290,   291,
     292,   293,   294,   295,   131,   132,   175,   588,   133,   134,
     135,   136,   176,   177,   330,   115,   137,   138,   139,   140,
      21,    22,    23,   141,   143,   145,   150,   579,   152,   182,
     183,   185,   495,    58,   500,   495,   503,   188,   189,   190,
     178,   192,   193,   199,   536,   153,   154,   179,   180,   194,
     198,   203,   297,   204,   205,   206,   519,   207,   328,   520,
     521,   209,   522,   536,   208,   210,   329,   212,   216,   523,
     524,    47,   155,   156,   217,   213,   218,   526,   219,   157,
     158,   159,   488,   291,   292,   293,   294,   295,   226,   227,
     228,   330,   231,   160,   161,   162,   237,    21,    22,    23,
     242,   246,   163,   244,   255,   256,   257,   300,   164,   301,
      58,   307,   258,   259,   260,   261,   262,   263,   165,   264,
     265,   309,   381,   166,   167,   168,   169,   170,   171,   172,
     266,   267,   574,   268,   269,   270,   271,   173,   272,   174,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   273,
     274,   312,   308,   313,   314,   175,   318,   325,   153,   154,
     315,   176,   177,   324,   338,   304,   342,   345,   606,   382,
     595,  -117,   346,   384,   347,   385,   602,   386,   604,   348,
     571,   572,   349,   350,   387,   155,   156,   351,   390,   178,
     615,   298,   157,   158,   159,   358,   179,   180,   391,   395,
     418,   419,   420,   631,   425,   359,   160,   161,   162,   360,
     366,   628,   368,   434,   443,   163,   445,   449,   632,   453,
     468,   164,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   165,   458,   484,   490,   510,   166,   167,   168,   169,
     170,   171,   172,   514,   802,   432,   518,   525,   529,   538,
     173,   469,   174,   433,   682,   541,   471,   472,   810,   811,
     473,   474,   326,   153,   154,   477,   478,   482,   175,   552,
     485,   486,   487,   505,   176,   177,   512,   527,   542,   546,
     553,   558,   556,   561,   731,   570,   562,   569,   573,   575,
     155,   156,   576,   581,   577,   587,   582,   493,   158,   159,
     494,   677,   178,   584,   305,   586,   343,   596,   741,   179,
     180,   160,   161,   162,   592,   597,   599,   619,   605,   607,
     163,   611,   622,   617,   624,   328,   164,   625,   539,   629,
     640,   646,   677,   329,   680,   681,   165,   683,    47,   685,
     686,   166,   167,   168,   169,   170,   171,   172,   153,   154,
     687,   696,   702,   703,   705,   173,   706,   174,   330,   714,
     716,   499,   720,   677,    21,    22,    23,   721,   733,   677,
     722,   723,  -117,   175,   727,   155,   156,    58,   729,   176,
     177,   734,   157,   158,   159,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   160,   161,   162,   736,
     737,   738,   740,   761,   763,   163,   762,   178,   765,   768,
     770,   164,  -141,   771,   179,   180,   781,   773,   767,   772,
     774,   165,   785,   793,   372,   775,   166,   167,   168,   169,
     170,   171,   172,   153,   154,   776,   743,   245,   339,   777,
     173,   795,   174,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   175,   796,
     155,   156,   365,   700,   176,   177,   756,   157,   158,   159,
     797,   798,   799,   792,   804,   805,   701,   806,   807,   580,
     779,   160,   161,   162,   448,   511,   555,   616,   760,   120,
     163,   211,   178,   502,   647,     0,   164,     0,   593,   179,
     180,     0,     0,   369,     0,   648,   165,     0,     0,     0,
       0,   166,   167,   168,   169,   170,   171,   172,     0,     0,
       0,     0,   649,     0,     0,   173,     0,   174,     0,     0,
       0,   650,   651,   652,   653,   654,     0,     0,     0,     0,
       0,     0,     0,   175,   655,     0,   656,     0,     0,   176,
     177,     0,     0,     0,     0,     0,   277,   657,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,     0,   178,     0,     0,
       0,     0,     0,     0,   179,   180,   658,     0,   659,    20,
       0,     0,   660,     0,     0,     0,    21,    22,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   661,
     277,     0,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     662,    32,    33,    34,   663,     0,   664,     0,     0,     0,
     665,     0,   666,     0,     0,     0,    35,    36,    37,    38,
      39,     0,    40,    41,    42,    43,     0,     0,     0,     0,
       0,     0,    44,    45,    46,    47,     0,    20,     0,     0,
       0,     0,     0,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,    55,    56,    57,     0,     0,     0,
     296,    21,    22,    23,     0,     0,     0,     0,     0,   444,
       0,     0,     0,     0,    58,     0,     0,     0,     0,    32,
      33,    34,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,  -347,    35,    36,    37,    38,    39,     0,
      40,    41,    42,    43,     0,    60,     0,     0,     0,     0,
      44,    45,    46,    47,   462,     0,   463,     0,     0,     0,
       0,    48,    49,    50,    51,    52,    53,    54,     0,     0,
       0,     0,    55,    56,    57,     0,     0,     0,     0,    21,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    59,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   277,    60,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   277,     0,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   277,     0,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   277,     0,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   277,     0,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   277,     0,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,     0,   277,   375,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   277,   464,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   277,   467,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   277,   470,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   277,   479,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   277,   481,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
       0,     0,   277,   563,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   277,   564,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   277,   565,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   277,   566,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   277,   567,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   277,   568,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   277,   594,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   277,   614,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   277,   620,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   277,   621,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   277,   626,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   277,   637,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   639,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     277,   459,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     277,   465,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
       0,   466,     0,     0,     0,   693,     0,     0,     0,    73,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   709,
     710,   475,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,   693,     0,     0,   693,     0,
       0,   476,     0,    74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   750,
     753,   754,   755,     0,   693,   461,   709,    74,   693,     0,
       0,   277,    75,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,     0,     0,   539,   480,     0,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,   786,
     787,     0,   788,   789,   766,    77,    78,    79,    80,    81,
     -43,    82,    83,    84,     0,     0,    85,    86,     0,    87,
      88,    89,    76,     0,     0,     0,    90,    91,    92,    77,
      78,    79,    80,    81,     0,    82,    83,    84,     0,     0,
      85,    86,     0,    87,    88,    89,     0,     0,     0,     0,
      90,    91,    92,   277,   483,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   277,   545,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   277,     0,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295
};

static const yytype_int16 yycheck[] =
{
      12,    77,    75,    27,   224,    18,     4,     4,     4,    98,
      29,    87,    21,   677,   103,   235,   236,     4,   140,     4,
       4,     4,     4,     4,     4,     5,    58,     4,     5,   495,
      15,     4,     5,    15,   513,    36,     4,     4,    10,   498,
       4,     5,     4,     5,    58,    59,   687,    32,    15,   583,
      32,    10,   149,     4,     5,     0,   153,     4,    59,   696,
     133,   134,   699,   136,   137,    32,     4,     4,    15,    54,
     143,    56,    54,     4,    56,   128,   129,   130,   719,   155,
     156,   560,   134,    49,    50,    32,   139,   621,     4,     4,
       4,    59,   729,    58,   149,   148,   151,   134,   150,    15,
      15,    15,   134,   179,   180,   746,   182,    54,    55,    56,
      57,     4,   591,   150,   190,   237,    32,    32,    32,     4,
     134,    59,   581,   104,   149,   201,   151,    37,   594,   109,
      67,   795,   109,     4,    37,     4,   109,     4,    54,    55,
      54,    55,   151,    37,    10,   109,    15,   109,   149,   222,
      16,     3,     4,   151,    58,   151,   154,   154,   109,   144,
       4,   146,   149,    32,   146,   149,   149,   152,   244,   149,
     152,   247,   248,   639,   250,   251,   149,   149,   151,   255,
     256,   257,   258,   259,   151,   149,   262,   151,   207,   208,
     149,   267,   268,   149,   150,   271,   272,   273,   149,   146,
     151,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   312,   313,   314,     3,     4,   304,   305,
     146,   146,   146,   102,   356,   106,   107,   108,     4,   132,
     705,   149,   135,   136,   137,   153,   711,   132,     4,    15,
     135,   136,   137,    30,    31,   328,    32,    33,    34,    58,
      37,    38,    39,   790,   791,   132,    32,    58,   135,   136,
     137,   141,   142,   143,    51,    52,    53,   146,   779,   780,
     353,   138,   355,    60,   149,    37,   151,    39,   132,    66,
      37,   135,   136,   137,    71,    72,    73,    74,    75,    76,
     149,    37,   151,    59,    81,    82,    83,    84,    85,    86,
      87,    67,    58,    71,    72,    73,    74,    75,    95,    75,
      97,   149,    37,   151,    80,     4,   339,    28,    29,    30,
      31,    32,    33,    34,    37,    37,   113,   557,    37,    37,
      37,    37,   119,   120,   100,   369,    37,    37,    37,    37,
     106,   107,   108,    37,    37,    37,     4,    36,     4,     4,
       4,     4,   438,   119,   440,   441,   442,     4,     4,     4,
     147,     4,     3,   115,   151,     3,     4,   154,   155,     4,
       4,     4,    10,     4,     4,     4,   462,    16,    67,   465,
     466,    59,   468,   151,    16,   150,    75,    59,     4,   475,
     476,    80,    30,    31,     4,   150,     4,   483,     4,    37,
      38,    39,   431,    30,    31,    32,    33,    34,     4,     4,
       4,   100,     4,    51,    52,    53,     4,   106,   107,   108,
      37,    58,    60,    37,    37,    37,    37,   149,    66,   149,
     119,   149,    37,    37,    37,    37,    37,    37,    76,    37,
      37,     4,     4,    81,    82,    83,    84,    85,    86,    87,
      37,    37,   538,    37,    37,    37,    37,    95,    37,    97,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    37,
      37,    10,   149,    10,    10,   113,   150,   150,     3,     4,
      58,   119,   120,    59,   151,    10,    59,   149,   587,     4,
     576,    37,   151,     4,   151,     4,   582,     4,   584,   151,
     529,   530,   151,   151,     4,    30,    31,   151,     4,   147,
     596,   149,    37,    38,    39,   151,   154,   155,     4,     4,
       4,     4,     4,   622,     4,   151,    51,    52,    53,   151,
     151,   617,   151,     4,     4,    60,    37,     4,   624,    37,
     149,    66,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    76,   151,     4,    58,    16,    81,    82,    83,    84,
      85,    86,    87,    37,   794,   150,     4,     4,    16,    37,
      95,   151,    97,   150,   657,    16,   151,   151,   808,   809,
     151,   151,     4,     3,     4,   151,   151,   151,   113,     4,
     151,   151,   151,   149,   119,   120,   151,   150,   104,    93,
       4,    36,    95,    37,   703,    59,   151,   151,   151,    16,
      30,    31,    37,    58,    38,    10,    37,    37,    38,    39,
      40,   643,   147,    37,   149,   151,   149,    37,   714,   154,
     155,    51,    52,    53,   150,   145,   105,    59,   150,    97,
      60,    59,    10,    37,    37,    67,    66,    16,    37,    58,
      58,    16,   674,    75,    37,    37,    76,    37,    80,    37,
      37,    81,    82,    83,    84,    85,    86,    87,     3,     4,
      37,    37,    59,    37,    58,    95,    25,    97,   100,    37,
       4,    16,    37,   705,   106,   107,   108,    37,     4,   711,
      37,    37,    37,   113,    37,    30,    31,   119,    37,   119,
     120,   104,    37,    38,    39,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    51,    52,    53,   151,
     151,   151,   151,   151,    25,    60,    59,   147,    36,     4,
      37,    66,   151,    37,   154,   155,     4,    37,   151,   151,
      37,    76,     4,     4,   249,   151,    81,    82,    83,    84,
      85,    86,    87,     3,     4,   151,   715,   145,   220,   151,
      95,   151,    97,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   113,   151,
      30,    31,   242,   670,   119,   120,   725,    37,    38,    39,
     151,   151,   151,   782,   151,   151,   674,   151,   151,   547,
     760,    51,    52,    53,   344,   447,   508,   598,   730,    30,
      60,   114,   147,   441,     4,    -1,    66,    -1,   572,   154,
     155,    -1,    -1,   246,    -1,    15,    76,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    95,    -1,    97,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    54,    -1,    56,    -1,    -1,   119,
     120,    -1,    -1,    -1,    -1,    -1,    15,    67,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,   147,    -1,    -1,
      -1,    -1,    -1,    -1,   154,   155,    96,    -1,    98,     4,
      -1,    -1,   102,    -1,    -1,    -1,   106,   107,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     140,    46,    47,    48,   144,    -1,   146,    -1,    -1,    -1,
     150,    -1,   152,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    -1,    67,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    -1,     4,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    93,    94,
      -1,    -1,    -1,    -1,    99,   100,   101,    -1,    -1,    -1,
     149,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,
      -1,    -1,    -1,   138,    61,    62,    63,    64,    65,    -1,
      67,    68,    69,    70,    -1,   150,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,   149,    -1,   151,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    93,    94,    -1,    -1,
      -1,    -1,    99,   100,   101,    -1,    -1,    -1,    -1,   106,
     107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   150,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    15,   151,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   151,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   151,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   151,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   151,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   151,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    -1,    15,   151,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   151,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   151,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   151,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   151,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   151,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,   151,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   151,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   151,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   151,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   151,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   151,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      15,   149,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,   149,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,   149,    -1,    -1,    -1,   666,    -1,    -1,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   680,
     681,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,    -1,   696,    -1,    -1,   699,    -1,
      -1,   149,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   720,
     721,   722,   723,    -1,   725,    36,   727,    38,   729,    -1,
      -1,    15,    67,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    -1,    37,   149,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,   770,
     771,    -1,   773,   774,   149,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    -1,    -1,   121,   122,    -1,   124,
     125,   126,   103,    -1,    -1,    -1,   131,   132,   133,   110,
     111,   112,   113,   114,    -1,   116,   117,   118,    -1,    -1,
     121,   122,    -1,   124,   125,   126,    -1,    -1,    -1,    -1,
     131,   132,   133,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    15,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   128,   129,   130,   139,   148,   157,   173,   174,   161,
     162,   159,   160,   277,   278,   272,   273,     0,   175,   163,
       4,   106,   107,   108,   210,    58,   134,   281,   282,    58,
     274,   275,    46,    47,    48,    61,    62,    63,    64,    65,
      67,    68,    69,    70,    77,    78,    79,    80,    88,    89,
      90,    91,    92,    93,    94,    99,   100,   101,   119,   132,
     150,   176,   185,   187,   210,   212,   223,   224,   226,   228,
     264,   279,   280,     4,    38,    67,   103,   110,   111,   112,
     113,   114,   116,   117,   118,   121,   122,   124,   125,   126,
     131,   132,   133,   164,     6,     7,     8,     9,    10,    11,
      12,    13,    14,   208,    37,    37,    37,     4,   132,   135,
     136,   137,   284,   285,    58,   282,   136,   137,   276,   285,
     275,    58,    58,    49,    50,    37,    37,     4,   158,    58,
      37,    37,    37,    37,    37,    37,    37,    37,    37,    37,
      37,    37,   177,    37,   188,    37,   149,   150,   209,   138,
       4,   158,     4,     3,     4,    30,    31,    37,    38,    39,
      51,    52,    53,    60,    66,    76,    81,    82,    83,    84,
      85,    86,    87,    95,    97,   113,   119,   120,   147,   154,
     155,   232,     4,     4,   168,     4,   167,   166,     4,     4,
       4,   232,     4,     3,     4,   169,   170,   171,     4,   115,
     230,   231,   230,     4,     4,     4,     4,    16,    16,    59,
     150,   284,    59,   150,   186,   265,     4,     4,     4,     4,
     178,     4,    67,   213,   214,   215,     4,     4,     4,   158,
     158,     4,   158,   151,   158,   225,   227,     4,   229,   229,
     179,   180,    37,   158,    37,   170,    58,    10,   149,   165,
      10,   149,   232,   232,   232,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,   232,   232,    15,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   149,    10,   149,   232,
     149,   149,     4,   149,    10,   149,   232,   149,   149,     4,
     172,   232,    10,    10,    10,    58,   285,   285,   150,     4,
     132,   135,   136,   137,    59,   150,     4,    59,    67,    75,
     100,   187,   239,     4,    59,   266,   149,   151,   151,   175,
     216,   158,    59,   149,   211,   149,   151,   151,   151,   151,
     151,   151,   151,   211,   151,   211,   149,   229,   151,   151,
     151,     4,     5,   109,   181,   179,   151,   232,   151,   281,
     232,   232,   163,   232,   232,   151,   232,   232,   232,   232,
     232,     4,     4,   232,     4,     4,     4,     4,   232,   232,
       4,     4,   232,   232,   232,     4,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,     4,     4,
       4,   232,   232,     3,     4,     4,     4,   149,   230,   230,
     230,   287,   150,   150,     4,   134,   150,   283,   240,   158,
     245,   250,   267,     4,    36,    37,   220,   217,   215,     4,
     158,   158,   229,    37,     4,     5,   109,   149,   151,   149,
      59,    36,   149,   151,   151,   149,   149,   151,   149,   151,
     151,   151,   151,   151,   151,   149,   149,   151,   151,   151,
     149,   151,   151,    16,     4,   151,   151,   151,   285,   137,
      58,   134,   150,    37,    40,   232,   254,   255,   252,    16,
     232,   256,   255,   232,   269,   149,     4,   154,   221,   222,
      16,   213,   151,   182,    37,     4,     5,   109,     4,   232,
     232,   232,   232,   232,   232,     4,   232,   150,   288,    16,
     286,    71,    72,    73,    74,    75,   151,   253,    37,    37,
     254,    16,   104,   234,   186,    16,    93,   257,   251,     4,
     104,   270,     4,     4,   151,   222,    95,   218,    36,   181,
     184,    37,   151,   151,   151,   151,   151,   151,   151,   151,
      59,   285,   285,   151,   232,    16,    37,    38,   235,    36,
     234,    58,    37,   271,    37,   268,   151,    10,   211,   151,
     181,   183,   150,   288,   151,   232,    37,   145,   236,   105,
     237,   186,   232,   270,   232,   150,   230,    97,   219,   151,
     181,    59,    39,   254,   151,   232,   237,    37,   246,    59,
     151,   151,    10,   151,    37,    16,   151,   241,   232,    58,
     270,   230,   232,   141,   142,   143,   238,   151,   247,   151,
      58,   260,   254,   242,     4,    59,    16,     4,    15,    32,
      41,    42,    43,    44,    45,    54,    56,    67,    96,    98,
     102,   119,   140,   144,   146,   150,   152,   189,   190,   191,
     194,   197,   198,   200,   203,   204,   205,   210,   261,   248,
      37,    37,   158,    37,   201,    37,    37,    37,     4,    54,
      55,    56,    57,   190,   192,   196,    37,     4,    54,   152,
     191,   200,    59,    37,   209,    58,    25,   258,   102,   190,
     190,   202,   206,   230,    37,   199,     4,   193,   189,   195,
      37,    37,    37,    37,   153,   211,   196,    37,   196,    37,
     243,   230,   204,     4,   104,   233,   151,   151,   151,   204,
     151,   232,     4,   197,    21,   151,   151,   189,    54,    55,
     190,    54,    55,   190,   190,   190,   192,   151,   153,   196,
     258,   151,    59,    25,   259,    36,   149,   151,     4,   189,
      37,    37,   151,    37,    37,   151,   151,   151,   151,   233,
     262,     4,    10,    16,   207,     4,   190,   190,   190,   190,
     259,   259,   206,     4,   249,   151,   151,   151,   151,   151,
     207,   207,   211,   209,   151,   151,   151,   151,   244,   263,
     211,   211
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   156,   157,   157,   157,   157,   157,   158,   160,   159,
     162,   161,   163,   163,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     165,   164,   164,   164,   166,   166,   166,   167,   167,   168,
     168,   169,   169,   169,   171,   170,   172,   172,   172,   174,
     173,   175,   175,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   177,   176,   176,   178,   176,   176,   176,
     176,   176,   176,   176,   176,   180,   179,   181,   181,   181,
     181,   181,   181,   182,   181,   183,   181,   184,   181,   185,
     186,   186,   186,   187,   187,   188,   187,   189,   189,   189,
     190,   190,   191,   191,   191,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   193,   193,   194,   195,   195,   196,
     196,   197,   197,   197,   197,   197,   197,   198,   199,   198,
     200,   200,   200,   200,   200,   200,   200,   200,   201,   200,
     202,   200,   203,   203,   204,   204,   205,   205,   205,   205,
     205,   206,   207,   207,   208,   208,   208,   208,   208,   208,
     208,   208,   209,   209,   210,   210,   210,   210,   210,   211,
     211,   212,   213,   213,   214,   214,   216,   215,   217,   215,
     218,   219,   220,   220,   221,   221,   222,   222,   223,   224,
     224,   225,   225,   226,   227,   227,   228,   228,   229,   229,
     229,   231,   230,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   233,   233,   234,   234,   235,   235,   236,   236,   237,
     237,   238,   238,   238,   238,   240,   241,   242,   243,   244,
     239,   245,   246,   247,   248,   249,   239,   250,   251,   239,
     252,   239,   253,   253,   253,   253,   253,   254,   254,   254,
     255,   255,   255,   255,   256,   256,   257,   257,   258,   258,
     259,   259,   260,   261,   262,   263,   260,   264,   265,   265,
     267,   268,   266,   269,   270,   270,   270,   271,   271,   273,
     272,   274,   274,   275,   276,   278,   277,   280,   279,   281,
     281,   282,   282,   282,   283,   283,   284,   284,   284,   284,
     284,   285,   285,   285,   285,   286,   285,   287,   285,   285,
     285,   285,   285,   285,   285,   288,   288
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     1,     0,     2,
       0,     2,     3,     0,     2,     4,     1,     1,     2,     1,
       4,     4,     3,     2,     4,     3,     4,     4,     4,     4,
       4,     2,     2,     2,     4,     4,     2,     2,     2,     2,
       0,     5,     2,     0,     3,     2,     0,     1,     3,     1,
       3,     0,     1,     3,     0,     2,     1,     2,     3,     0,
       2,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     8,     4,     1,
       1,     1,     4,     0,     5,     4,     0,     5,     4,     4,
       4,     3,     3,     6,     4,     0,     2,     1,     3,     2,
       1,     3,     2,     0,     5,     0,     7,     0,     6,     4,
       2,     2,     0,     4,     2,     0,     7,     1,     1,     1,
       1,     5,     1,     4,     4,     1,     4,     4,     4,     7,
       7,     7,     7,     4,     1,     3,     4,     2,     1,     3,
       1,     1,     2,     3,     4,     4,     5,     1,     0,     5,
       2,     1,     1,     1,     4,     1,     4,     4,     0,     8,
       0,     5,     2,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     6,     6,     6,     1,
       0,     4,     1,     0,     3,     1,     0,     7,     0,     5,
       3,     3,     0,     3,     1,     2,     1,     2,     4,     4,
       3,     3,     1,     4,     3,     0,     1,     1,     0,     2,
       3,     0,     2,     2,     3,     4,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     3,     3,     4,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     6,     6,
       6,     4,     6,     4,     1,     6,     6,     6,     4,     4,
       4,     3,     0,     4,     0,     4,     0,     1,     0,     4,
       0,     1,     1,     1,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,    18,     0,     0,     7,
       0,     5,     1,     1,     1,     1,     1,     3,     0,     2,
       3,     2,     6,    10,     2,     1,     0,     1,     2,     0,
       0,     3,     0,     0,     0,     0,    11,     4,     0,     2,
       0,     0,     6,     1,     0,     3,     5,     0,     3,     0,
       2,     1,     2,     4,     2,     0,     2,     0,     5,     1,
       2,     4,     5,     6,     1,     2,     0,     2,     4,     4,
       8,     1,     1,     3,     3,     0,     9,     0,     7,     1,
       3,     1,     3,     1,     3,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 8:
#line 179 "ldgram.y"
                { ldlex_expression(); }
#line 2473 "ldgram.c"
    break;

  case 9:
#line 181 "ldgram.y"
                { ldlex_popstate(); }
#line 2479 "ldgram.c"
    break;

  case 10:
#line 186 "ldgram.y"
                {
		  ldlex_mri_script ();
		  PUSH_ERROR (_("MRI style script"));
		}
#line 2488 "ldgram.c"
    break;

  case 11:
#line 191 "ldgram.y"
                {
		  ldlex_popstate ();
		  mri_draw_tree ();
		  POP_ERROR ();
		}
#line 2498 "ldgram.c"
    break;

  case 16:
#line 206 "ldgram.y"
                        {
			einfo(_("%F%P: unrecognised keyword in MRI style script '%s'\n"),(yyvsp[0].name));
			}
#line 2506 "ldgram.c"
    break;

  case 17:
#line 209 "ldgram.y"
                        {
			config.map_filename = "-";
			}
#line 2514 "ldgram.c"
    break;

  case 20:
#line 215 "ldgram.y"
                        { mri_public((yyvsp[-2].name), (yyvsp[0].etree)); }
#line 2520 "ldgram.c"
    break;

  case 21:
#line 217 "ldgram.y"
                        { mri_public((yyvsp[-2].name), (yyvsp[0].etree)); }
#line 2526 "ldgram.c"
    break;

  case 22:
#line 219 "ldgram.y"
                        { mri_public((yyvsp[-1].name), (yyvsp[0].etree)); }
#line 2532 "ldgram.c"
    break;

  case 23:
#line 221 "ldgram.y"
                        { mri_format((yyvsp[0].name)); }
#line 2538 "ldgram.c"
    break;

  case 24:
#line 223 "ldgram.y"
                        { mri_output_section((yyvsp[-2].name), (yyvsp[0].etree));}
#line 2544 "ldgram.c"
    break;

  case 25:
#line 225 "ldgram.y"
                        { mri_output_section((yyvsp[-1].name), (yyvsp[0].etree));}
#line 2550 "ldgram.c"
    break;

  case 26:
#line 227 "ldgram.y"
                        { mri_output_section((yyvsp[-2].name), (yyvsp[0].etree));}
#line 2556 "ldgram.c"
    break;

  case 27:
#line 229 "ldgram.y"
                        { mri_align((yyvsp[-2].name),(yyvsp[0].etree)); }
#line 2562 "ldgram.c"
    break;

  case 28:
#line 231 "ldgram.y"
                        { mri_align((yyvsp[-2].name),(yyvsp[0].etree)); }
#line 2568 "ldgram.c"
    break;

  case 29:
#line 233 "ldgram.y"
                        { mri_alignmod((yyvsp[-2].name),(yyvsp[0].etree)); }
#line 2574 "ldgram.c"
    break;

  case 30:
#line 235 "ldgram.y"
                        { mri_alignmod((yyvsp[-2].name),(yyvsp[0].etree)); }
#line 2580 "ldgram.c"
    break;

  case 33:
#line 239 "ldgram.y"
                        { mri_name((yyvsp[0].name)); }
#line 2586 "ldgram.c"
    break;

  case 34:
#line 241 "ldgram.y"
                        { mri_alias((yyvsp[-2].name),(yyvsp[0].name),0);}
#line 2592 "ldgram.c"
    break;

  case 35:
#line 243 "ldgram.y"
                        { mri_alias ((yyvsp[-2].name), 0, (int) (yyvsp[0].bigint).integer); }
#line 2598 "ldgram.c"
    break;

  case 36:
#line 245 "ldgram.y"
                        { mri_base((yyvsp[0].etree)); }
#line 2604 "ldgram.c"
    break;

  case 37:
#line 247 "ldgram.y"
                { mri_truncate ((unsigned int) (yyvsp[0].bigint).integer); }
#line 2610 "ldgram.c"
    break;

  case 40:
#line 251 "ldgram.y"
                { ldlex_script (); ldfile_open_command_file((yyvsp[0].name)); }
#line 2616 "ldgram.c"
    break;

  case 41:
#line 253 "ldgram.y"
                { ldlex_popstate (); }
#line 2622 "ldgram.c"
    break;

  case 42:
#line 255 "ldgram.y"
                { lang_add_entry ((yyvsp[0].name), false); }
#line 2628 "ldgram.c"
    break;

  case 44:
#line 260 "ldgram.y"
                                             { mri_order((yyvsp[0].name)); }
#line 2634 "ldgram.c"
    break;

  case 45:
#line 261 "ldgram.y"
                                          { mri_order((yyvsp[0].name)); }
#line 2640 "ldgram.c"
    break;

  case 47:
#line 267 "ldgram.y"
                        { mri_load((yyvsp[0].name)); }
#line 2646 "ldgram.c"
    break;

  case 48:
#line 268 "ldgram.y"
                                            { mri_load((yyvsp[0].name)); }
#line 2652 "ldgram.c"
    break;

  case 49:
#line 273 "ldgram.y"
                        { mri_only_load((yyvsp[0].name)); }
#line 2658 "ldgram.c"
    break;

  case 50:
#line 275 "ldgram.y"
                        { mri_only_load((yyvsp[0].name)); }
#line 2664 "ldgram.c"
    break;

  case 51:
#line 279 "ldgram.y"
                      { (yyval.name) = NULL; }
#line 2670 "ldgram.c"
    break;

  case 54:
#line 286 "ldgram.y"
        { ldlex_expression (); }
#line 2676 "ldgram.c"
    break;

  case 55:
#line 288 "ldgram.y"
        { ldlex_popstate (); }
#line 2682 "ldgram.c"
    break;

  case 56:
#line 292 "ldgram.y"
                        { ldlang_add_undef ((yyvsp[0].name), false); }
#line 2688 "ldgram.c"
    break;

  case 57:
#line 294 "ldgram.y"
                        { ldlang_add_undef ((yyvsp[0].name), false); }
#line 2694 "ldgram.c"
    break;

  case 58:
#line 296 "ldgram.y"
                        { ldlang_add_undef ((yyvsp[0].name), false); }
#line 2700 "ldgram.c"
    break;

  case 59:
#line 300 "ldgram.y"
        { ldlex_both(); }
#line 2706 "ldgram.c"
    break;

  case 60:
#line 302 "ldgram.y"
        { ldlex_popstate(); }
#line 2712 "ldgram.c"
    break;

  case 73:
#line 323 "ldgram.y"
                { lang_add_target((yyvsp[-1].name)); }
#line 2718 "ldgram.c"
    break;

  case 74:
#line 325 "ldgram.y"
                { ldfile_add_library_path ((yyvsp[-1].name), false); }
#line 2724 "ldgram.c"
    break;

  case 75:
#line 327 "ldgram.y"
                { lang_add_output((yyvsp[-1].name), 1); }
#line 2730 "ldgram.c"
    break;

  case 76:
#line 329 "ldgram.y"
                  { lang_add_output_format ((yyvsp[-1].name), (char *) NULL,
					    (char *) NULL, 1); }
#line 2737 "ldgram.c"
    break;

  case 77:
#line 332 "ldgram.y"
                  { lang_add_output_format ((yyvsp[-5].name), (yyvsp[-3].name), (yyvsp[-1].name), 1); }
#line 2743 "ldgram.c"
    break;

  case 78:
#line 334 "ldgram.y"
                  { ldfile_set_output_arch ((yyvsp[-1].name), bfd_arch_unknown); }
#line 2749 "ldgram.c"
    break;

  case 79:
#line 336 "ldgram.y"
                { command_line.force_common_definition = true ; }
#line 2755 "ldgram.c"
    break;

  case 80:
#line 338 "ldgram.y"
                { command_line.force_group_allocation = true ; }
#line 2761 "ldgram.c"
    break;

  case 81:
#line 340 "ldgram.y"
                { link_info.inhibit_common_definition = true ; }
#line 2767 "ldgram.c"
    break;

  case 83:
#line 343 "ldgram.y"
                  { lang_enter_group (); }
#line 2773 "ldgram.c"
    break;

  case 84:
#line 345 "ldgram.y"
                  { lang_leave_group (); }
#line 2779 "ldgram.c"
    break;

  case 85:
#line 347 "ldgram.y"
                { lang_add_map((yyvsp[-1].name)); }
#line 2785 "ldgram.c"
    break;

  case 86:
#line 349 "ldgram.y"
                { ldlex_script (); ldfile_open_command_file((yyvsp[0].name)); }
#line 2791 "ldgram.c"
    break;

  case 87:
#line 351 "ldgram.y"
                { ldlex_popstate (); }
#line 2797 "ldgram.c"
    break;

  case 88:
#line 353 "ldgram.y"
                {
		  lang_add_nocrossref ((yyvsp[-1].nocrossref));
		}
#line 2805 "ldgram.c"
    break;

  case 89:
#line 357 "ldgram.y"
                {
		  lang_add_nocrossref_to ((yyvsp[-1].nocrossref));
		}
#line 2813 "ldgram.c"
    break;

  case 91:
#line 362 "ldgram.y"
                { lang_add_insert ((yyvsp[0].name), 0); }
#line 2819 "ldgram.c"
    break;

  case 92:
#line 364 "ldgram.y"
                { lang_add_insert ((yyvsp[0].name), 1); }
#line 2825 "ldgram.c"
    break;

  case 93:
#line 366 "ldgram.y"
                { lang_memory_region_alias ((yyvsp[-3].name), (yyvsp[-1].name)); }
#line 2831 "ldgram.c"
    break;

  case 94:
#line 368 "ldgram.y"
                { lang_ld_feature ((yyvsp[-1].name)); }
#line 2837 "ldgram.c"
    break;

  case 95:
#line 372 "ldgram.y"
                { ldlex_inputlist(); }
#line 2843 "ldgram.c"
    break;

  case 96:
#line 374 "ldgram.y"
                { ldlex_popstate(); }
#line 2849 "ldgram.c"
    break;

  case 97:
#line 378 "ldgram.y"
                { lang_add_input_file((yyvsp[0].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
#line 2856 "ldgram.c"
    break;

  case 98:
#line 381 "ldgram.y"
                { lang_add_input_file((yyvsp[0].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
#line 2863 "ldgram.c"
    break;

  case 99:
#line 384 "ldgram.y"
                { lang_add_input_file((yyvsp[0].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
#line 2870 "ldgram.c"
    break;

  case 100:
#line 387 "ldgram.y"
                { lang_add_input_file((yyvsp[0].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
#line 2877 "ldgram.c"
    break;

  case 101:
#line 390 "ldgram.y"
                { lang_add_input_file((yyvsp[0].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
#line 2884 "ldgram.c"
    break;

  case 102:
#line 393 "ldgram.y"
                { lang_add_input_file((yyvsp[0].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
#line 2891 "ldgram.c"
    break;

  case 103:
#line 396 "ldgram.y"
                  { (yyval.integer) = input_flags.add_DT_NEEDED_for_regular;
		    input_flags.add_DT_NEEDED_for_regular = true; }
#line 2898 "ldgram.c"
    break;

  case 104:
#line 399 "ldgram.y"
                  { input_flags.add_DT_NEEDED_for_regular = (yyvsp[-2].integer); }
#line 2904 "ldgram.c"
    break;

  case 105:
#line 401 "ldgram.y"
                  { (yyval.integer) = input_flags.add_DT_NEEDED_for_regular;
		    input_flags.add_DT_NEEDED_for_regular = true; }
#line 2911 "ldgram.c"
    break;

  case 106:
#line 404 "ldgram.y"
                  { input_flags.add_DT_NEEDED_for_regular = (yyvsp[-2].integer); }
#line 2917 "ldgram.c"
    break;

  case 107:
#line 406 "ldgram.y"
                  { (yyval.integer) = input_flags.add_DT_NEEDED_for_regular;
		    input_flags.add_DT_NEEDED_for_regular = true; }
#line 2924 "ldgram.c"
    break;

  case 108:
#line 409 "ldgram.y"
                  { input_flags.add_DT_NEEDED_for_regular = (yyvsp[-2].integer); }
#line 2930 "ldgram.c"
    break;

  case 113:
#line 424 "ldgram.y"
                { lang_add_entry ((yyvsp[-1].name), false); }
#line 2936 "ldgram.c"
    break;

  case 115:
#line 426 "ldgram.y"
                          {ldlex_expression ();}
#line 2942 "ldgram.c"
    break;

  case 116:
#line 427 "ldgram.y"
                { ldlex_popstate ();
		  lang_add_assignment (exp_assert ((yyvsp[-3].etree), (yyvsp[-1].name))); }
#line 2949 "ldgram.c"
    break;

  case 117:
#line 435 "ldgram.y"
                        {
			  (yyval.cname) = (yyvsp[0].name);
			}
#line 2957 "ldgram.c"
    break;

  case 118:
#line 439 "ldgram.y"
                        {
			  (yyval.cname) = "*";
			}
#line 2965 "ldgram.c"
    break;

  case 119:
#line 443 "ldgram.y"
                        {
			  (yyval.cname) = "?";
			}
#line 2973 "ldgram.c"
    break;

  case 120:
#line 450 "ldgram.y"
                        {
			  (yyval.wildcard).name = (yyvsp[0].cname);
			  (yyval.wildcard).sorted = none;
			  (yyval.wildcard).exclude_name_list = NULL;
			  (yyval.wildcard).section_flag_list = NULL;
			}
#line 2984 "ldgram.c"
    break;

  case 121:
#line 457 "ldgram.y"
                        {
			  (yyval.wildcard).name = (yyvsp[0].cname);
			  (yyval.wildcard).sorted = none;
			  (yyval.wildcard).exclude_name_list = (yyvsp[-2].name_list);
			  (yyval.wildcard).section_flag_list = NULL;
			}
#line 2995 "ldgram.c"
    break;

  case 123:
#line 468 "ldgram.y"
                        {
			  (yyval.wildcard) = (yyvsp[-1].wildcard);
			  (yyval.wildcard).sorted = by_name;
			}
#line 3004 "ldgram.c"
    break;

  case 124:
#line 473 "ldgram.y"
                        {
			  (yyval.wildcard) = (yyvsp[-1].wildcard);
			  (yyval.wildcard).sorted = by_none;
			}
#line 3013 "ldgram.c"
    break;

  case 126:
#line 482 "ldgram.y"
                        {
			  (yyval.wildcard) = (yyvsp[-1].wildcard);
			  (yyval.wildcard).sorted = by_name;
			}
#line 3022 "ldgram.c"
    break;

  case 127:
#line 487 "ldgram.y"
                        {
			  (yyval.wildcard) = (yyvsp[-1].wildcard);
			  (yyval.wildcard).sorted = by_alignment;
			}
#line 3031 "ldgram.c"
    break;

  case 128:
#line 492 "ldgram.y"
                        {
			  (yyval.wildcard) = (yyvsp[-1].wildcard);
			  (yyval.wildcard).sorted = by_none;
			}
#line 3040 "ldgram.c"
    break;

  case 129:
#line 497 "ldgram.y"
                        {
			  (yyval.wildcard) = (yyvsp[-2].wildcard);
			  (yyval.wildcard).sorted = by_name_alignment;
			}
#line 3049 "ldgram.c"
    break;

  case 130:
#line 502 "ldgram.y"
                        {
			  (yyval.wildcard) = (yyvsp[-2].wildcard);
			  (yyval.wildcard).sorted = by_name;
			}
#line 3058 "ldgram.c"
    break;

  case 131:
#line 507 "ldgram.y"
                        {
			  (yyval.wildcard) = (yyvsp[-2].wildcard);
			  (yyval.wildcard).sorted = by_alignment_name;
			}
#line 3067 "ldgram.c"
    break;

  case 132:
#line 512 "ldgram.y"
                        {
			  (yyval.wildcard) = (yyvsp[-2].wildcard);
			  (yyval.wildcard).sorted = by_alignment;
			}
#line 3076 "ldgram.c"
    break;

  case 133:
#line 517 "ldgram.y"
                        {
			  (yyval.wildcard) = (yyvsp[-1].wildcard);
			  (yyval.wildcard).sorted = by_init_priority;
			}
#line 3085 "ldgram.c"
    break;

  case 134:
#line 524 "ldgram.y"
                        {
			  struct flag_info_list *n;
			  n = ((struct flag_info_list *) xmalloc (sizeof *n));
			  if ((yyvsp[0].name)[0] == '!')
			    {
			      n->with = without_flags;
			      n->name = &(yyvsp[0].name)[1];
			    }
			  else
			    {
			      n->with = with_flags;
			      n->name = (yyvsp[0].name);
			    }
			  n->valid = false;
			  n->next = NULL;
			  (yyval.flag_info_list) = n;
			}
#line 3107 "ldgram.c"
    break;

  case 135:
#line 542 "ldgram.y"
                        {
			  struct flag_info_list *n;
			  n = ((struct flag_info_list *) xmalloc (sizeof *n));
			  if ((yyvsp[0].name)[0] == '!')
			    {
			      n->with = without_flags;
			      n->name = &(yyvsp[0].name)[1];
			    }
			  else
			    {
			      n->with = with_flags;
			      n->name = (yyvsp[0].name);
			    }
			  n->valid = false;
			  n->next = (yyvsp[-2].flag_info_list);
			  (yyval.flag_info_list) = n;
			}
#line 3129 "ldgram.c"
    break;

  case 136:
#line 563 "ldgram.y"
                        {
			  struct flag_info *n;
			  n = ((struct flag_info *) xmalloc (sizeof *n));
			  n->flag_list = (yyvsp[-1].flag_info_list);
			  n->flags_initialized = false;
			  n->not_with_flags = 0;
			  n->only_with_flags = 0;
			  (yyval.flag_info) = n;
			}
#line 3143 "ldgram.c"
    break;

  case 137:
#line 576 "ldgram.y"
                        {
			  struct name_list *tmp;
			  tmp = (struct name_list *) xmalloc (sizeof *tmp);
			  tmp->name = (yyvsp[0].cname);
			  tmp->next = (yyvsp[-1].name_list);
			  (yyval.name_list) = tmp;
			}
#line 3155 "ldgram.c"
    break;

  case 138:
#line 585 "ldgram.y"
                        {
			  struct name_list *tmp;
			  tmp = (struct name_list *) xmalloc (sizeof *tmp);
			  tmp->name = (yyvsp[0].cname);
			  tmp->next = NULL;
			  (yyval.name_list) = tmp;
			}
#line 3167 "ldgram.c"
    break;

  case 139:
#line 596 "ldgram.y"
                        {
			  struct wildcard_list *tmp;
			  tmp = (struct wildcard_list *) xmalloc (sizeof *tmp);
			  tmp->next = (yyvsp[-2].wildcard_list);
			  tmp->spec = (yyvsp[0].wildcard);
			  (yyval.wildcard_list) = tmp;
			}
#line 3179 "ldgram.c"
    break;

  case 140:
#line 605 "ldgram.y"
                        {
			  struct wildcard_list *tmp;
			  tmp = (struct wildcard_list *) xmalloc (sizeof *tmp);
			  tmp->next = NULL;
			  tmp->spec = (yyvsp[0].wildcard);
			  (yyval.wildcard_list) = tmp;
			}
#line 3191 "ldgram.c"
    break;

  case 141:
#line 616 "ldgram.y"
                        {
			  struct wildcard_spec tmp;
			  tmp.name = (yyvsp[0].name);
			  tmp.exclude_name_list = NULL;
			  tmp.sorted = none;
			  tmp.section_flag_list = NULL;
			  lang_add_wild (&tmp, NULL, ldgram_had_keep);
			}
#line 3204 "ldgram.c"
    break;

  case 142:
#line 625 "ldgram.y"
                        {
			  struct wildcard_spec tmp;
			  tmp.name = (yyvsp[0].name);
			  tmp.exclude_name_list = NULL;
			  tmp.sorted = none;
			  tmp.section_flag_list = (yyvsp[-1].flag_info);
			  lang_add_wild (&tmp, NULL, ldgram_had_keep);
			}
#line 3217 "ldgram.c"
    break;

  case 143:
#line 634 "ldgram.y"
                        {
			  lang_add_wild (NULL, (yyvsp[-1].wildcard_list), ldgram_had_keep);
			}
#line 3225 "ldgram.c"
    break;

  case 144:
#line 638 "ldgram.y"
                        {
			  struct wildcard_spec tmp;
			  tmp.name = NULL;
			  tmp.exclude_name_list = NULL;
			  tmp.sorted = none;
			  tmp.section_flag_list = (yyvsp[-3].flag_info);
			  lang_add_wild (&tmp, (yyvsp[-1].wildcard_list), ldgram_had_keep);
			}
#line 3238 "ldgram.c"
    break;

  case 145:
#line 647 "ldgram.y"
                        {
			  lang_add_wild (&(yyvsp[-3].wildcard), (yyvsp[-1].wildcard_list), ldgram_had_keep);
			}
#line 3246 "ldgram.c"
    break;

  case 146:
#line 651 "ldgram.y"
                        {
			  (yyvsp[-3].wildcard).section_flag_list = (yyvsp[-4].flag_info);
			  lang_add_wild (&(yyvsp[-3].wildcard), (yyvsp[-1].wildcard_list), ldgram_had_keep);
			}
#line 3255 "ldgram.c"
    break;

  case 148:
#line 660 "ldgram.y"
                        { ldgram_had_keep = true; }
#line 3261 "ldgram.c"
    break;

  case 149:
#line 662 "ldgram.y"
                        { ldgram_had_keep = false; }
#line 3267 "ldgram.c"
    break;

  case 151:
#line 668 "ldgram.y"
                {
		lang_add_attribute(lang_object_symbols_statement_enum);
		}
#line 3275 "ldgram.c"
    break;

  case 153:
#line 673 "ldgram.y"
                {

		  lang_add_attribute(lang_constructors_statement_enum);
		}
#line 3284 "ldgram.c"
    break;

  case 154:
#line 678 "ldgram.y"
                {
		  constructors_sorted = true;
		  lang_add_attribute (lang_constructors_statement_enum);
		}
#line 3293 "ldgram.c"
    break;

  case 156:
#line 684 "ldgram.y"
                {
		  lang_add_data ((int) (yyvsp[-3].integer), (yyvsp[-1].etree));
		}
#line 3301 "ldgram.c"
    break;

  case 157:
#line 689 "ldgram.y"
                {
		  lang_add_fill ((yyvsp[-1].fill));
		}
#line 3309 "ldgram.c"
    break;

  case 158:
#line 692 "ldgram.y"
                    {ldlex_expression ();}
#line 3315 "ldgram.c"
    break;

  case 159:
#line 693 "ldgram.y"
                        { ldlex_popstate ();
			  lang_add_assignment (exp_assert ((yyvsp[-4].etree), (yyvsp[-2].name))); }
#line 3322 "ldgram.c"
    break;

  case 160:
#line 696 "ldgram.y"
                { ldlex_script (); ldfile_open_command_file((yyvsp[0].name)); }
#line 3328 "ldgram.c"
    break;

  case 161:
#line 698 "ldgram.y"
                { ldlex_popstate (); }
#line 3334 "ldgram.c"
    break;

  case 166:
#line 713 "ldgram.y"
                        { (yyval.integer) = (yyvsp[0].token); }
#line 3340 "ldgram.c"
    break;

  case 167:
#line 715 "ldgram.y"
                        { (yyval.integer) = (yyvsp[0].token); }
#line 3346 "ldgram.c"
    break;

  case 168:
#line 717 "ldgram.y"
                        { (yyval.integer) = (yyvsp[0].token); }
#line 3352 "ldgram.c"
    break;

  case 169:
#line 719 "ldgram.y"
                        { (yyval.integer) = (yyvsp[0].token); }
#line 3358 "ldgram.c"
    break;

  case 170:
#line 721 "ldgram.y"
                        { (yyval.integer) = (yyvsp[0].token); }
#line 3364 "ldgram.c"
    break;

  case 171:
#line 726 "ldgram.y"
                {
		  (yyval.fill) = exp_get_fill ((yyvsp[0].etree), 0, "fill value");
		}
#line 3372 "ldgram.c"
    break;

  case 172:
#line 733 "ldgram.y"
                { (yyval.fill) = (yyvsp[0].fill); }
#line 3378 "ldgram.c"
    break;

  case 173:
#line 734 "ldgram.y"
                { (yyval.fill) = (fill_type *) 0; }
#line 3384 "ldgram.c"
    break;

  case 174:
#line 739 "ldgram.y"
                        { (yyval.token) = '+'; }
#line 3390 "ldgram.c"
    break;

  case 175:
#line 741 "ldgram.y"
                        { (yyval.token) = '-'; }
#line 3396 "ldgram.c"
    break;

  case 176:
#line 743 "ldgram.y"
                        { (yyval.token) = '*'; }
#line 3402 "ldgram.c"
    break;

  case 177:
#line 745 "ldgram.y"
                        { (yyval.token) = '/'; }
#line 3408 "ldgram.c"
    break;

  case 178:
#line 747 "ldgram.y"
                        { (yyval.token) = LSHIFT; }
#line 3414 "ldgram.c"
    break;

  case 179:
#line 749 "ldgram.y"
                        { (yyval.token) = RSHIFT; }
#line 3420 "ldgram.c"
    break;

  case 180:
#line 751 "ldgram.y"
                        { (yyval.token) = '&'; }
#line 3426 "ldgram.c"
    break;

  case 181:
#line 753 "ldgram.y"
                        { (yyval.token) = '|'; }
#line 3432 "ldgram.c"
    break;

  case 184:
#line 763 "ldgram.y"
                {
		  lang_add_assignment (exp_assign ((yyvsp[-2].name), (yyvsp[0].etree), false));
		}
#line 3440 "ldgram.c"
    break;

  case 185:
#line 767 "ldgram.y"
                {
		  lang_add_assignment (exp_assign ((yyvsp[-2].name),
						   exp_binop ((yyvsp[-1].token),
							      exp_nameop (NAME,
									  (yyvsp[-2].name)),
							      (yyvsp[0].etree)), false));
		}
#line 3452 "ldgram.c"
    break;

  case 186:
#line 775 "ldgram.y"
                {
		  lang_add_assignment (exp_assign ((yyvsp[-3].name), (yyvsp[-1].etree), true));
		}
#line 3460 "ldgram.c"
    break;

  case 187:
#line 779 "ldgram.y"
                {
		  lang_add_assignment (exp_provide ((yyvsp[-3].name), (yyvsp[-1].etree), false));
		}
#line 3468 "ldgram.c"
    break;

  case 188:
#line 783 "ldgram.y"
                {
		  lang_add_assignment (exp_provide ((yyvsp[-3].name), (yyvsp[-1].etree), true));
		}
#line 3476 "ldgram.c"
    break;

  case 196:
#line 806 "ldgram.y"
                { region = lang_memory_region_lookup ((yyvsp[0].name), true); }
#line 3482 "ldgram.c"
    break;

  case 197:
#line 809 "ldgram.y"
                {}
#line 3488 "ldgram.c"
    break;

  case 198:
#line 811 "ldgram.y"
                { ldlex_script (); ldfile_open_command_file((yyvsp[0].name)); }
#line 3494 "ldgram.c"
    break;

  case 199:
#line 813 "ldgram.y"
                { ldlex_popstate (); }
#line 3500 "ldgram.c"
    break;

  case 200:
#line 818 "ldgram.y"
                {
		  region->origin_exp = (yyvsp[0].etree);
		}
#line 3508 "ldgram.c"
    break;

  case 201:
#line 825 "ldgram.y"
                {
		  region->length_exp = (yyvsp[0].etree);
		}
#line 3516 "ldgram.c"
    break;

  case 202:
#line 832 "ldgram.y"
                  { /* dummy action to avoid bison 1.25 error message */ }
#line 3522 "ldgram.c"
    break;

  case 206:
#line 843 "ldgram.y"
                  { lang_set_flags (region, (yyvsp[0].name), 0); }
#line 3528 "ldgram.c"
    break;

  case 207:
#line 845 "ldgram.y"
                  { lang_set_flags (region, (yyvsp[0].name), 1); }
#line 3534 "ldgram.c"
    break;

  case 208:
#line 850 "ldgram.y"
                { lang_startup((yyvsp[-1].name)); }
#line 3540 "ldgram.c"
    break;

  case 210:
#line 856 "ldgram.y"
                        { ldemul_hll((char *)NULL); }
#line 3546 "ldgram.c"
    break;

  case 211:
#line 861 "ldgram.y"
                        { ldemul_hll((yyvsp[0].name)); }
#line 3552 "ldgram.c"
    break;

  case 212:
#line 863 "ldgram.y"
                        { ldemul_hll((yyvsp[0].name)); }
#line 3558 "ldgram.c"
    break;

  case 214:
#line 872 "ldgram.y"
                        { ldemul_syslib((yyvsp[0].name)); }
#line 3564 "ldgram.c"
    break;

  case 216:
#line 878 "ldgram.y"
                        { lang_float(true); }
#line 3570 "ldgram.c"
    break;

  case 217:
#line 880 "ldgram.y"
                        { lang_float(false); }
#line 3576 "ldgram.c"
    break;

  case 218:
#line 885 "ldgram.y"
                {
		  (yyval.nocrossref) = NULL;
		}
#line 3584 "ldgram.c"
    break;

  case 219:
#line 889 "ldgram.y"
                {
		  struct lang_nocrossref *n;

		  n = (struct lang_nocrossref *) xmalloc (sizeof *n);
		  n->name = (yyvsp[-1].name);
		  n->next = (yyvsp[0].nocrossref);
		  (yyval.nocrossref) = n;
		}
#line 3597 "ldgram.c"
    break;

  case 220:
#line 898 "ldgram.y"
                {
		  struct lang_nocrossref *n;

		  n = (struct lang_nocrossref *) xmalloc (sizeof *n);
		  n->name = (yyvsp[-2].name);
		  n->next = (yyvsp[0].nocrossref);
		  (yyval.nocrossref) = n;
		}
#line 3610 "ldgram.c"
    break;

  case 221:
#line 908 "ldgram.y"
                         { ldlex_expression (); }
#line 3616 "ldgram.c"
    break;

  case 222:
#line 910 "ldgram.y"
                         { ldlex_popstate (); (yyval.etree)=(yyvsp[0].etree);}
#line 3622 "ldgram.c"
    break;

  case 223:
#line 915 "ldgram.y"
                        { (yyval.etree) = exp_unop ('-', (yyvsp[0].etree)); }
#line 3628 "ldgram.c"
    break;

  case 224:
#line 917 "ldgram.y"
                        { (yyval.etree) = (yyvsp[-1].etree); }
#line 3634 "ldgram.c"
    break;

  case 225:
#line 919 "ldgram.y"
                        { (yyval.etree) = exp_unop ((int) (yyvsp[-3].integer),(yyvsp[-1].etree)); }
#line 3640 "ldgram.c"
    break;

  case 226:
#line 921 "ldgram.y"
                        { (yyval.etree) = exp_unop ('!', (yyvsp[0].etree)); }
#line 3646 "ldgram.c"
    break;

  case 227:
#line 923 "ldgram.y"
                        { (yyval.etree) = (yyvsp[0].etree); }
#line 3652 "ldgram.c"
    break;

  case 228:
#line 925 "ldgram.y"
                        { (yyval.etree) = exp_unop ('~', (yyvsp[0].etree));}
#line 3658 "ldgram.c"
    break;

  case 229:
#line 928 "ldgram.y"
                        { (yyval.etree) = exp_binop ('*', (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3664 "ldgram.c"
    break;

  case 230:
#line 930 "ldgram.y"
                        { (yyval.etree) = exp_binop ('/', (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3670 "ldgram.c"
    break;

  case 231:
#line 932 "ldgram.y"
                        { (yyval.etree) = exp_binop ('%', (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3676 "ldgram.c"
    break;

  case 232:
#line 934 "ldgram.y"
                        { (yyval.etree) = exp_binop ('+', (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3682 "ldgram.c"
    break;

  case 233:
#line 936 "ldgram.y"
                        { (yyval.etree) = exp_binop ('-' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3688 "ldgram.c"
    break;

  case 234:
#line 938 "ldgram.y"
                        { (yyval.etree) = exp_binop (LSHIFT , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3694 "ldgram.c"
    break;

  case 235:
#line 940 "ldgram.y"
                        { (yyval.etree) = exp_binop (RSHIFT , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3700 "ldgram.c"
    break;

  case 236:
#line 942 "ldgram.y"
                        { (yyval.etree) = exp_binop (EQ , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3706 "ldgram.c"
    break;

  case 237:
#line 944 "ldgram.y"
                        { (yyval.etree) = exp_binop (NE , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3712 "ldgram.c"
    break;

  case 238:
#line 946 "ldgram.y"
                        { (yyval.etree) = exp_binop (LE , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3718 "ldgram.c"
    break;

  case 239:
#line 948 "ldgram.y"
                        { (yyval.etree) = exp_binop (GE , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3724 "ldgram.c"
    break;

  case 240:
#line 950 "ldgram.y"
                        { (yyval.etree) = exp_binop ('<' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3730 "ldgram.c"
    break;

  case 241:
#line 952 "ldgram.y"
                        { (yyval.etree) = exp_binop ('>' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3736 "ldgram.c"
    break;

  case 242:
#line 954 "ldgram.y"
                        { (yyval.etree) = exp_binop ('&' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3742 "ldgram.c"
    break;

  case 243:
#line 956 "ldgram.y"
                        { (yyval.etree) = exp_binop ('^' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3748 "ldgram.c"
    break;

  case 244:
#line 958 "ldgram.y"
                        { (yyval.etree) = exp_binop ('|' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3754 "ldgram.c"
    break;

  case 245:
#line 960 "ldgram.y"
                        { (yyval.etree) = exp_trinop ('?' , (yyvsp[-4].etree), (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3760 "ldgram.c"
    break;

  case 246:
#line 962 "ldgram.y"
                        { (yyval.etree) = exp_binop (ANDAND , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3766 "ldgram.c"
    break;

  case 247:
#line 964 "ldgram.y"
                        { (yyval.etree) = exp_binop (OROR , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3772 "ldgram.c"
    break;

  case 248:
#line 966 "ldgram.y"
                        { (yyval.etree) = exp_nameop (DEFINED, (yyvsp[-1].name)); }
#line 3778 "ldgram.c"
    break;

  case 249:
#line 968 "ldgram.y"
                        { (yyval.etree) = exp_bigintop ((yyvsp[0].bigint).integer, (yyvsp[0].bigint).str); }
#line 3784 "ldgram.c"
    break;

  case 250:
#line 970 "ldgram.y"
                        { (yyval.etree) = exp_nameop (SIZEOF_HEADERS,0); }
#line 3790 "ldgram.c"
    break;

  case 251:
#line 973 "ldgram.y"
                        { (yyval.etree) = exp_nameop (ALIGNOF,(yyvsp[-1].name)); }
#line 3796 "ldgram.c"
    break;

  case 252:
#line 975 "ldgram.y"
                        { (yyval.etree) = exp_nameop (SIZEOF,(yyvsp[-1].name)); }
#line 3802 "ldgram.c"
    break;

  case 253:
#line 977 "ldgram.y"
                        { (yyval.etree) = exp_nameop (ADDR,(yyvsp[-1].name)); }
#line 3808 "ldgram.c"
    break;

  case 254:
#line 979 "ldgram.y"
                        { (yyval.etree) = exp_nameop (LOADADDR,(yyvsp[-1].name)); }
#line 3814 "ldgram.c"
    break;

  case 255:
#line 981 "ldgram.y"
                        { (yyval.etree) = exp_nameop (CONSTANT,(yyvsp[-1].name)); }
#line 3820 "ldgram.c"
    break;

  case 256:
#line 983 "ldgram.y"
                        { (yyval.etree) = exp_unop (ABSOLUTE, (yyvsp[-1].etree)); }
#line 3826 "ldgram.c"
    break;

  case 257:
#line 985 "ldgram.y"
                        { (yyval.etree) = exp_unop (ALIGN_K,(yyvsp[-1].etree)); }
#line 3832 "ldgram.c"
    break;

  case 258:
#line 987 "ldgram.y"
                        { (yyval.etree) = exp_binop (ALIGN_K,(yyvsp[-3].etree),(yyvsp[-1].etree)); }
#line 3838 "ldgram.c"
    break;

  case 259:
#line 989 "ldgram.y"
                        { (yyval.etree) = exp_binop (DATA_SEGMENT_ALIGN, (yyvsp[-3].etree), (yyvsp[-1].etree)); }
#line 3844 "ldgram.c"
    break;

  case 260:
#line 991 "ldgram.y"
                        { (yyval.etree) = exp_binop (DATA_SEGMENT_RELRO_END, (yyvsp[-1].etree), (yyvsp[-3].etree)); }
#line 3850 "ldgram.c"
    break;

  case 261:
#line 993 "ldgram.y"
                        { (yyval.etree) = exp_unop (DATA_SEGMENT_END, (yyvsp[-1].etree)); }
#line 3856 "ldgram.c"
    break;

  case 262:
#line 995 "ldgram.y"
                        { /* The operands to the expression node are
			     placed in the opposite order from the way
			     in which they appear in the script as
			     that allows us to reuse more code in
			     fold_binary.  */
			  (yyval.etree) = exp_binop (SEGMENT_START,
					  (yyvsp[-1].etree),
					  exp_nameop (NAME, (yyvsp[-3].name))); }
#line 3869 "ldgram.c"
    break;

  case 263:
#line 1004 "ldgram.y"
                        { (yyval.etree) = exp_unop (ALIGN_K,(yyvsp[-1].etree)); }
#line 3875 "ldgram.c"
    break;

  case 264:
#line 1006 "ldgram.y"
                        { (yyval.etree) = exp_nameop (NAME,(yyvsp[0].name)); }
#line 3881 "ldgram.c"
    break;

  case 265:
#line 1008 "ldgram.y"
                        { (yyval.etree) = exp_binop (MAX_K, (yyvsp[-3].etree), (yyvsp[-1].etree) ); }
#line 3887 "ldgram.c"
    break;

  case 266:
#line 1010 "ldgram.y"
                        { (yyval.etree) = exp_binop (MIN_K, (yyvsp[-3].etree), (yyvsp[-1].etree) ); }
#line 3893 "ldgram.c"
    break;

  case 267:
#line 1012 "ldgram.y"
                        { (yyval.etree) = exp_assert ((yyvsp[-3].etree), (yyvsp[-1].name)); }
#line 3899 "ldgram.c"
    break;

  case 268:
#line 1014 "ldgram.y"
                        { (yyval.etree) = exp_nameop (ORIGIN, (yyvsp[-1].name)); }
#line 3905 "ldgram.c"
    break;

  case 269:
#line 1016 "ldgram.y"
                        { (yyval.etree) = exp_nameop (LENGTH, (yyvsp[-1].name)); }
#line 3911 "ldgram.c"
    break;

  case 270:
#line 1018 "ldgram.y"
                        { (yyval.etree) = exp_unop (LOG2CEIL, (yyvsp[-1].etree)); }
#line 3917 "ldgram.c"
    break;

  case 271:
#line 1023 "ldgram.y"
                            { (yyval.name) = (yyvsp[0].name); }
#line 3923 "ldgram.c"
    break;

  case 272:
#line 1024 "ldgram.y"
                { (yyval.name) = 0; }
#line 3929 "ldgram.c"
    break;

  case 273:
#line 1028 "ldgram.y"
                               { (yyval.etree) = (yyvsp[-1].etree); }
#line 3935 "ldgram.c"
    break;

  case 274:
#line 1029 "ldgram.y"
                { (yyval.etree) = 0; }
#line 3941 "ldgram.c"
    break;

  case 275:
#line 1033 "ldgram.y"
                                    { (yyval.etree) = (yyvsp[-1].etree); }
#line 3947 "ldgram.c"
    break;

  case 276:
#line 1034 "ldgram.y"
                { (yyval.etree) = 0; }
#line 3953 "ldgram.c"
    break;

  case 277:
#line 1038 "ldgram.y"
                                 { (yyval.token) = ALIGN_WITH_INPUT; }
#line 3959 "ldgram.c"
    break;

  case 278:
#line 1039 "ldgram.y"
                { (yyval.token) = 0; }
#line 3965 "ldgram.c"
    break;

  case 279:
#line 1043 "ldgram.y"
                                     { (yyval.etree) = (yyvsp[-1].etree); }
#line 3971 "ldgram.c"
    break;

  case 280:
#line 1044 "ldgram.y"
                { (yyval.etree) = 0; }
#line 3977 "ldgram.c"
    break;

  case 281:
#line 1048 "ldgram.y"
                           { (yyval.token) = ONLY_IF_RO; }
#line 3983 "ldgram.c"
    break;

  case 282:
#line 1049 "ldgram.y"
                           { (yyval.token) = ONLY_IF_RW; }
#line 3989 "ldgram.c"
    break;

  case 283:
#line 1050 "ldgram.y"
                        { (yyval.token) = SPECIAL; }
#line 3995 "ldgram.c"
    break;

  case 284:
#line 1051 "ldgram.y"
                { (yyval.token) = 0; }
#line 4001 "ldgram.c"
    break;

  case 285:
#line 1054 "ldgram.y"
                                { ldlex_expression(); }
#line 4007 "ldgram.c"
    break;

  case 286:
#line 1059 "ldgram.y"
                                { ldlex_popstate (); ldlex_script (); }
#line 4013 "ldgram.c"
    break;

  case 287:
#line 1062 "ldgram.y"
                        {
			  lang_enter_output_section_statement((yyvsp[-9].name), (yyvsp[-7].etree),
							      sectype,
							      (yyvsp[-5].etree), (yyvsp[-3].etree), (yyvsp[-6].etree), (yyvsp[-1].token), (yyvsp[-4].token));
			}
#line 4023 "ldgram.c"
    break;

  case 288:
#line 1068 "ldgram.y"
                    { ldlex_popstate (); ldlex_expression (); }
#line 4029 "ldgram.c"
    break;

  case 289:
#line 1070 "ldgram.y"
                {
		  if (yychar == NAME)
		    {
		      yyclearin;
		      ldlex_backup ();
		    }
		  ldlex_popstate ();
		  lang_leave_output_section_statement ((yyvsp[0].fill), (yyvsp[-3].name), (yyvsp[-1].section_phdr), (yyvsp[-2].name));
		}
#line 4043 "ldgram.c"
    break;

  case 291:
#line 1081 "ldgram.y"
                        { ldlex_expression (); }
#line 4049 "ldgram.c"
    break;

  case 292:
#line 1083 "ldgram.y"
                        { ldlex_popstate (); ldlex_script (); }
#line 4055 "ldgram.c"
    break;

  case 293:
#line 1085 "ldgram.y"
                        {
			  lang_enter_overlay ((yyvsp[-5].etree), (yyvsp[-2].etree));
			}
#line 4063 "ldgram.c"
    break;

  case 294:
#line 1090 "ldgram.y"
                        { ldlex_popstate (); ldlex_expression (); }
#line 4069 "ldgram.c"
    break;

  case 295:
#line 1092 "ldgram.y"
                        {
			  if (yychar == NAME)
			    {
			      yyclearin;
			      ldlex_backup ();
			    }
			  ldlex_popstate ();
			  lang_leave_overlay ((yyvsp[-11].etree), (int) (yyvsp[-12].integer),
					      (yyvsp[0].fill), (yyvsp[-3].name), (yyvsp[-1].section_phdr), (yyvsp[-2].name));
			}
#line 4084 "ldgram.c"
    break;

  case 297:
#line 1107 "ldgram.y"
                      { ldlex_expression (); }
#line 4090 "ldgram.c"
    break;

  case 298:
#line 1109 "ldgram.y"
                {
		  ldlex_popstate ();
		  lang_add_assignment (exp_assign (".", (yyvsp[0].etree), false));
		}
#line 4099 "ldgram.c"
    break;

  case 300:
#line 1115 "ldgram.y"
                { ldlex_script (); ldfile_open_command_file((yyvsp[0].name)); }
#line 4105 "ldgram.c"
    break;

  case 301:
#line 1117 "ldgram.y"
                { ldlex_popstate (); }
#line 4111 "ldgram.c"
    break;

  case 302:
#line 1121 "ldgram.y"
                   { sectype = noload_section; }
#line 4117 "ldgram.c"
    break;

  case 303:
#line 1122 "ldgram.y"
                   { sectype = noalloc_section; }
#line 4123 "ldgram.c"
    break;

  case 304:
#line 1123 "ldgram.y"
                   { sectype = noalloc_section; }
#line 4129 "ldgram.c"
    break;

  case 305:
#line 1124 "ldgram.y"
                   { sectype = noalloc_section; }
#line 4135 "ldgram.c"
    break;

  case 306:
#line 1125 "ldgram.y"
                   { sectype = noalloc_section; }
#line 4141 "ldgram.c"
    break;

  case 308:
#line 1130 "ldgram.y"
                            { sectype = normal_section; }
#line 4147 "ldgram.c"
    break;

  case 309:
#line 1131 "ldgram.y"
                        { sectype = normal_section; }
#line 4153 "ldgram.c"
    break;

  case 310:
#line 1135 "ldgram.y"
                                        { (yyval.etree) = (yyvsp[-2].etree); }
#line 4159 "ldgram.c"
    break;

  case 311:
#line 1136 "ldgram.y"
                                        { (yyval.etree) = (etree_type *)NULL;  }
#line 4165 "ldgram.c"
    break;

  case 312:
#line 1141 "ldgram.y"
                                           { (yyval.etree) = (yyvsp[-3].etree); }
#line 4171 "ldgram.c"
    break;

  case 313:
#line 1143 "ldgram.y"
                { (yyval.etree) = (yyvsp[-7].etree); }
#line 4177 "ldgram.c"
    break;

  case 314:
#line 1147 "ldgram.y"
                                { (yyval.etree) = (yyvsp[-1].etree); }
#line 4183 "ldgram.c"
    break;

  case 315:
#line 1148 "ldgram.y"
                                { (yyval.etree) = (etree_type *) NULL;  }
#line 4189 "ldgram.c"
    break;

  case 316:
#line 1153 "ldgram.y"
                        { (yyval.integer) = 0; }
#line 4195 "ldgram.c"
    break;

  case 317:
#line 1155 "ldgram.y"
                        { (yyval.integer) = 1; }
#line 4201 "ldgram.c"
    break;

  case 318:
#line 1160 "ldgram.y"
                { (yyval.name) = (yyvsp[0].name); }
#line 4207 "ldgram.c"
    break;

  case 319:
#line 1161 "ldgram.y"
                { (yyval.name) = DEFAULT_MEMORY_REGION; }
#line 4213 "ldgram.c"
    break;

  case 320:
#line 1166 "ldgram.y"
                {
		  (yyval.section_phdr) = NULL;
		}
#line 4221 "ldgram.c"
    break;

  case 321:
#line 1170 "ldgram.y"
                {
		  struct lang_output_section_phdr_list *n;

		  n = ((struct lang_output_section_phdr_list *)
		       xmalloc (sizeof *n));
		  n->name = (yyvsp[0].name);
		  n->used = false;
		  n->next = (yyvsp[-2].section_phdr);
		  (yyval.section_phdr) = n;
		}
#line 4236 "ldgram.c"
    break;

  case 323:
#line 1186 "ldgram.y"
                        {
			  ldlex_script ();
			  lang_enter_overlay_section ((yyvsp[0].name));
			}
#line 4245 "ldgram.c"
    break;

  case 324:
#line 1191 "ldgram.y"
                        { ldlex_popstate (); ldlex_expression (); }
#line 4251 "ldgram.c"
    break;

  case 325:
#line 1193 "ldgram.y"
                        {
			  ldlex_popstate ();
			  lang_leave_overlay_section ((yyvsp[0].fill), (yyvsp[-1].section_phdr));
			}
#line 4260 "ldgram.c"
    break;

  case 330:
#line 1210 "ldgram.y"
                     { ldlex_expression (); }
#line 4266 "ldgram.c"
    break;

  case 331:
#line 1211 "ldgram.y"
                                            { ldlex_popstate (); }
#line 4272 "ldgram.c"
    break;

  case 332:
#line 1213 "ldgram.y"
                {
		  lang_new_phdr ((yyvsp[-5].name), (yyvsp[-3].etree), (yyvsp[-2].phdr).filehdr, (yyvsp[-2].phdr).phdrs, (yyvsp[-2].phdr).at,
				 (yyvsp[-2].phdr).flags);
		}
#line 4281 "ldgram.c"
    break;

  case 333:
#line 1221 "ldgram.y"
                {
		  (yyval.etree) = (yyvsp[0].etree);

		  if ((yyvsp[0].etree)->type.node_class == etree_name
		      && (yyvsp[0].etree)->type.node_code == NAME)
		    {
		      const char *s;
		      unsigned int i;
		      static const char * const phdr_types[] =
			{
			  "PT_NULL", "PT_LOAD", "PT_DYNAMIC",
			  "PT_INTERP", "PT_NOTE", "PT_SHLIB",
			  "PT_PHDR", "PT_TLS"
			};

		      s = (yyvsp[0].etree)->name.name;
		      for (i = 0;
			   i < sizeof phdr_types / sizeof phdr_types[0];
			   i++)
			if (strcmp (s, phdr_types[i]) == 0)
			  {
			    (yyval.etree) = exp_intop (i);
			    break;
			  }
		      if (i == sizeof phdr_types / sizeof phdr_types[0])
			{
			  if (strcmp (s, "PT_GNU_EH_FRAME") == 0)
			    (yyval.etree) = exp_intop (0x6474e550);
			  else if (strcmp (s, "PT_GNU_STACK") == 0)
			    (yyval.etree) = exp_intop (0x6474e551);
			  else
			    {
			      einfo (_("\
%X%P:%pS: unknown phdr type `%s' (try integer literal)\n"),
				     NULL, s);
			      (yyval.etree) = exp_intop (0);
			    }
			}
		    }
		}
#line 4326 "ldgram.c"
    break;

  case 334:
#line 1265 "ldgram.y"
                {
		  memset (&(yyval.phdr), 0, sizeof (struct phdr_info));
		}
#line 4334 "ldgram.c"
    break;

  case 335:
#line 1269 "ldgram.y"
                {
		  (yyval.phdr) = (yyvsp[0].phdr);
		  if (strcmp ((yyvsp[-2].name), "FILEHDR") == 0 && (yyvsp[-1].etree) == NULL)
		    (yyval.phdr).filehdr = true;
		  else if (strcmp ((yyvsp[-2].name), "PHDRS") == 0 && (yyvsp[-1].etree) == NULL)
		    (yyval.phdr).phdrs = true;
		  else if (strcmp ((yyvsp[-2].name), "FLAGS") == 0 && (yyvsp[-1].etree) != NULL)
		    (yyval.phdr).flags = (yyvsp[-1].etree);
		  else
		    einfo (_("%X%P:%pS: PHDRS syntax error at `%s'\n"),
			   NULL, (yyvsp[-2].name));
		}
#line 4351 "ldgram.c"
    break;

  case 336:
#line 1282 "ldgram.y"
                {
		  (yyval.phdr) = (yyvsp[0].phdr);
		  (yyval.phdr).at = (yyvsp[-2].etree);
		}
#line 4360 "ldgram.c"
    break;

  case 337:
#line 1290 "ldgram.y"
                {
		  (yyval.etree) = NULL;
		}
#line 4368 "ldgram.c"
    break;

  case 338:
#line 1294 "ldgram.y"
                {
		  (yyval.etree) = (yyvsp[-1].etree);
		}
#line 4376 "ldgram.c"
    break;

  case 339:
#line 1300 "ldgram.y"
                {
		  ldlex_version_file ();
		  PUSH_ERROR (_("dynamic list"));
		}
#line 4385 "ldgram.c"
    break;

  case 340:
#line 1305 "ldgram.y"
                {
		  ldlex_popstate ();
		  POP_ERROR ();
		}
#line 4394 "ldgram.c"
    break;

  case 344:
#line 1322 "ldgram.y"
                {
		  lang_append_dynamic_list (current_dynamic_list_p, (yyvsp[-1].versyms));
		}
#line 4402 "ldgram.c"
    break;

  case 345:
#line 1330 "ldgram.y"
                {
		  ldlex_version_file ();
		  PUSH_ERROR (_("VERSION script"));
		}
#line 4411 "ldgram.c"
    break;

  case 346:
#line 1335 "ldgram.y"
                {
		  ldlex_popstate ();
		  POP_ERROR ();
		}
#line 4420 "ldgram.c"
    break;

  case 347:
#line 1344 "ldgram.y"
                {
		  ldlex_version_script ();
		}
#line 4428 "ldgram.c"
    break;

  case 348:
#line 1348 "ldgram.y"
                {
		  ldlex_popstate ();
		}
#line 4436 "ldgram.c"
    break;

  case 351:
#line 1360 "ldgram.y"
                {
		  lang_register_vers_node (NULL, (yyvsp[-2].versnode), NULL);
		}
#line 4444 "ldgram.c"
    break;

  case 352:
#line 1364 "ldgram.y"
                {
		  lang_register_vers_node ((yyvsp[-4].name), (yyvsp[-2].versnode), NULL);
		}
#line 4452 "ldgram.c"
    break;

  case 353:
#line 1368 "ldgram.y"
                {
		  lang_register_vers_node ((yyvsp[-5].name), (yyvsp[-3].versnode), (yyvsp[-1].deflist));
		}
#line 4460 "ldgram.c"
    break;

  case 354:
#line 1375 "ldgram.y"
                {
		  (yyval.deflist) = lang_add_vers_depend (NULL, (yyvsp[0].name));
		}
#line 4468 "ldgram.c"
    break;

  case 355:
#line 1379 "ldgram.y"
                {
		  (yyval.deflist) = lang_add_vers_depend ((yyvsp[-1].deflist), (yyvsp[0].name));
		}
#line 4476 "ldgram.c"
    break;

  case 356:
#line 1386 "ldgram.y"
                {
		  (yyval.versnode) = lang_new_vers_node (NULL, NULL);
		}
#line 4484 "ldgram.c"
    break;

  case 357:
#line 1390 "ldgram.y"
                {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[-1].versyms), NULL);
		}
#line 4492 "ldgram.c"
    break;

  case 358:
#line 1394 "ldgram.y"
                {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[-1].versyms), NULL);
		}
#line 4500 "ldgram.c"
    break;

  case 359:
#line 1398 "ldgram.y"
                {
		  (yyval.versnode) = lang_new_vers_node (NULL, (yyvsp[-1].versyms));
		}
#line 4508 "ldgram.c"
    break;

  case 360:
#line 1402 "ldgram.y"
                {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[-5].versyms), (yyvsp[-1].versyms));
		}
#line 4516 "ldgram.c"
    break;

  case 361:
#line 1409 "ldgram.y"
                {
		  (yyval.versyms) = lang_new_vers_pattern (NULL, (yyvsp[0].name), ldgram_vers_current_lang, false);
		}
#line 4524 "ldgram.c"
    break;

  case 362:
#line 1413 "ldgram.y"
                {
		  (yyval.versyms) = lang_new_vers_pattern (NULL, (yyvsp[0].name), ldgram_vers_current_lang, true);
		}
#line 4532 "ldgram.c"
    break;

  case 363:
#line 1417 "ldgram.y"
                {
		  (yyval.versyms) = lang_new_vers_pattern ((yyvsp[-2].versyms), (yyvsp[0].name), ldgram_vers_current_lang, false);
		}
#line 4540 "ldgram.c"
    break;

  case 364:
#line 1421 "ldgram.y"
                {
		  (yyval.versyms) = lang_new_vers_pattern ((yyvsp[-2].versyms), (yyvsp[0].name), ldgram_vers_current_lang, true);
		}
#line 4548 "ldgram.c"
    break;

  case 365:
#line 1425 "ldgram.y"
                        {
			  (yyval.name) = ldgram_vers_current_lang;
			  ldgram_vers_current_lang = (yyvsp[-1].name);
			}
#line 4557 "ldgram.c"
    break;

  case 366:
#line 1430 "ldgram.y"
                        {
			  struct bfd_elf_version_expr *pat;
			  for (pat = (yyvsp[-2].versyms); pat->next != NULL; pat = pat->next);
			  pat->next = (yyvsp[-8].versyms);
			  (yyval.versyms) = (yyvsp[-2].versyms);
			  ldgram_vers_current_lang = (yyvsp[-3].name);
			}
#line 4569 "ldgram.c"
    break;

  case 367:
#line 1438 "ldgram.y"
                        {
			  (yyval.name) = ldgram_vers_current_lang;
			  ldgram_vers_current_lang = (yyvsp[-1].name);
			}
#line 4578 "ldgram.c"
    break;

  case 368:
#line 1443 "ldgram.y"
                        {
			  (yyval.versyms) = (yyvsp[-2].versyms);
			  ldgram_vers_current_lang = (yyvsp[-3].name);
			}
#line 4587 "ldgram.c"
    break;

  case 369:
#line 1448 "ldgram.y"
                {
		  (yyval.versyms) = lang_new_vers_pattern (NULL, "global", ldgram_vers_current_lang, false);
		}
#line 4595 "ldgram.c"
    break;

  case 370:
#line 1452 "ldgram.y"
                {
		  (yyval.versyms) = lang_new_vers_pattern ((yyvsp[-2].versyms), "global", ldgram_vers_current_lang, false);
		}
#line 4603 "ldgram.c"
    break;

  case 371:
#line 1456 "ldgram.y"
                {
		  (yyval.versyms) = lang_new_vers_pattern (NULL, "local", ldgram_vers_current_lang, false);
		}
#line 4611 "ldgram.c"
    break;

  case 372:
#line 1460 "ldgram.y"
                {
		  (yyval.versyms) = lang_new_vers_pattern ((yyvsp[-2].versyms), "local", ldgram_vers_current_lang, false);
		}
#line 4619 "ldgram.c"
    break;

  case 373:
#line 1464 "ldgram.y"
                {
		  (yyval.versyms) = lang_new_vers_pattern (NULL, "extern", ldgram_vers_current_lang, false);
		}
#line 4627 "ldgram.c"
    break;

  case 374:
#line 1468 "ldgram.y"
                {
		  (yyval.versyms) = lang_new_vers_pattern ((yyvsp[-2].versyms), "extern", ldgram_vers_current_lang, false);
		}
#line 4635 "ldgram.c"
    break;


#line 4639 "ldgram.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1478 "ldgram.y"

void
yyerror(arg)
     const char *arg;
{
  if (ldfile_assumed_script)
    einfo (_("%P:%s: file format not recognized; treating as linker script\n"),
	   ldlex_filename ());
  if (error_index > 0 && error_index < ERROR_NAME_MAX)
    einfo ("%F%P:%pS: %s in %s\n", NULL, arg, error_names[error_index - 1]);
  else
    einfo ("%F%P:%pS: %s\n", NULL, arg);
}
