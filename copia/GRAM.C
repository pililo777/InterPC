/*  A Bison parser, made from grammar.y with Bison version GNU Bison version 1.24
  */
  
  
extern  int yylex();
extern   void yyerror(char *);

#define YYBISON 1  /* Identify Bison output.  */

#define	GUARDAR	258
#define	PUSH	259
#define	POP	260
#define	FUNCION	261
#define	RETORNAR	262
#define	BUSCAR	263
#define	INSERTAR	264
#define	ELIMINAR	265
#define	USE_INDICE	266
#define	CLOSE_INDICE	267
#define	STOP	268
#define	REGISTRO	269
#define	FINREGISTRO	270
#define	ABRIR	271
#define	CERRAR	272
#define	MOSTRAR	273
#define	VACIAR	274
#define	LLAMAR	275
#define	PROC	276
#define	END	277
#define	PROCNAME	278
#define	GRAFICOS	279
#define	DIM	280
#define	LINEA	281
#define	CIRCULO	282
#define	CONVERTIR	283
#define	EVALUAR	284
#define	EQ	285
#define	TERMINAR	286
#define	DECIMALES	287
#define	VENTANA	288
#define	FIN	289
#define	BOTON	290
#define	MENSAJE	291
#define	ETIQUETA	292
#define	TEXTO	293
#define	NE	294
#define	LT	295
#define	LE	296
#define	GT	297
#define	GE	298
#define	PLUS	299
#define	MINUS	300
#define	MULT	301
#define	DIVIDE	302
#define	RPAREN	303
#define	LPAREN	304
#define	ASSIGN	305
#define	SEMICOLON	306
#define	COMMA	307
#define	IF	308
#define	THEN	309
#define	ELSE	310
#define	FI	311
#define	WHILE	312
#define	FOR	313
#define	TO	314
#define	DO	315
#define	OD	316
#define	PRINT	317
#define	LEER	318
#define	BORRAR	319
#define	NUMBER	320
#define	NAME	321
#define	SNAME	322
#define	PAUSA	323
#define	CONSULTA	324
#define	LITERAL	325
#define	STRING	326
#define	DOBLECOMILLA	327
#define	OR	328
#define	AND	329
#define	CONTINUAR	330
#define	SALIR	331
#define	ACTUALIZAR	332

//#line 2 "grammar.y"

#include "nodo.h"

extern ast far * procedimientos[127]; //cambiar esta forma
extern int idx_prc;

extern ast far * pila_programas[32];
extern ast far * pila_records[32]; // pila de registros
 extern int idx_prg;

 extern int nro_decimales;
 extern long memoria;


#include "stdio.h"
#include "vars.h"
 
#define MSDOS
//char constantes[127][127];
//char variables[127][127];

//#line 24 "grammar.y"
typedef union {
 ast far * nodo;
} YYSTYPE;

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif

extern  ast far* nodo1(tiponodo, ast far*);
extern  ast far* nodo2(tiponodo, ast far*,ast far*);
extern  ast far* nodo3(tiponodo, ast far*,ast far*,ast far*);
extern  ast far* nodo4(tiponodo, ast far*,ast far*,ast far*,ast far*);


#define	YYFINAL		307
#define	YYFLAG		-32768
#define	YYNTBASE	81

#define YYTRANSLATE(x) ((unsigned)(x) <= 332 ? yytranslate[x] : 102)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,    80,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    78,     2,    79,     2,     2,     2,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
    76,    77
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     6,     8,    11,    13,    15,    19,    23,    27,
    31,    36,    40,    46,    50,    57,    67,    74,    81,    88,
    98,   101,   108,   113,   116,   119,   122,   125,   133,   139,
   145,   155,   160,   165,   169,   173,   180,   186,   193,   196,
   199,   205,   214,   221,   225,   229,   232,   234,   238,   241,
   244,   250,   255,   264,   267,   270,   273,   275,   277,   282,
   287,   290,   293,   295,   298,   301,   305,   311,   316,   321,
   323,   326,   333,   340,   343,   347,   349,   353,   355,   357,
   359,   361,   365,   367,   369,   371,   375,   377,   379,   381,
   386,   389,   391,   393,   397,   401,   405,   409,   413,   417,
   421,   425,   429,   433,   435,   439,   443,   447,   451,   453,
   457,   461,   464,   467,   471,   473,   475,   480,   488,   493,
   495,   497,   499,   504
};

static const short yyrhs[] = {    92,
     0,    92,    31,    82,     0,    83,     0,    82,    83,     0,
   100,     0,   101,     0,    98,    30,    93,     0,    97,    30,
    71,     0,    97,    30,    70,     0,    97,    30,    97,     0,
    97,    44,    30,    97,     0,    25,    98,    65,     0,    25,
    98,    65,    52,    65,     0,    25,    97,    65,     0,    98,
    78,    93,    79,    30,    93,     0,    98,    78,    93,    79,
    78,    93,    79,    30,    93,     0,    97,    78,    93,    79,
    30,    70,     0,    97,    78,    93,    79,    30,    97,     0,
    97,    30,    97,    78,    93,    79,     0,    97,    78,    93,
    79,    30,    97,    78,    94,    79,     0,    20,    99,     0,
    97,    30,    99,    49,    86,    48,     0,    99,    49,    86,
    48,     0,     7,    93,     0,     7,    97,     0,    32,    65,
     0,    62,    90,     0,    53,    93,    54,    92,    55,    92,
    56,     0,    53,    93,    54,    92,    56,     0,    57,    93,
    60,    92,    61,     0,    58,    98,    30,    93,    59,    93,
    60,    92,    61,     0,    33,    98,    65,    65,     0,    63,
    33,    98,    70,     0,    20,    33,    98,     0,    98,    33,
    70,     0,    98,    35,    70,    99,    65,    65,     0,    98,
    37,    70,    65,    65,     0,    98,    38,    67,    94,    52,
    94,     0,    36,    90,     0,    20,    70,     0,    24,    99,
    98,    98,    98,     0,    26,    94,    52,    94,    52,    94,
    52,    94,     0,    27,    94,    52,    94,    52,    94,     0,
    28,    97,    98,     0,    28,    98,    97,     0,    29,    71,
     0,    13,     0,    16,    97,    98,     0,    17,    98,     0,
    63,    98,     0,    63,    80,    98,    97,    98,     0,     3,
    80,    98,    97,     0,     3,    80,    98,    97,    52,    94,
    52,    65,     0,    63,    97,     0,    18,    97,     0,    19,
    97,     0,    75,     0,    76,     0,     8,    97,    98,    98,
     0,     9,    97,    98,    98,     0,    10,    97,     0,    11,
    97,     0,    12,     0,     4,    89,     0,     5,    89,     0,
    77,    33,    98,     0,    14,    98,    70,    85,    15,     0,
     8,    14,    98,    98,     0,    77,    14,    98,    98,     0,
    68,     0,    68,    65,     0,    69,    70,    52,    97,    52,
    97,     0,    69,    71,    52,    97,    52,    97,     0,    97,
    65,     0,    97,    65,    85,     0,    87,     0,    87,    52,
    86,     0,    93,     0,    70,     0,    97,     0,    89,     0,
    89,    52,    88,     0,    98,     0,    97,     0,    91,     0,
    90,    52,    91,     0,    93,     0,    70,     0,    97,     0,
    97,    78,    94,    79,     0,    92,    84,     0,    84,     0,
    94,     0,    94,    30,    94,     0,    94,    39,    94,     0,
    94,    40,    94,     0,    94,    41,    94,     0,    94,    42,
    94,     0,    94,    43,    94,     0,    97,    30,    70,     0,
    97,    30,    97,     0,    97,    39,    70,     0,    97,    39,
    97,     0,    95,     0,    94,    44,    95,     0,    94,    45,
    95,     0,    94,    73,    95,     0,    94,    74,    95,     0,
    96,     0,    95,    46,    96,     0,    95,    47,    96,     0,
    44,    96,     0,    45,    96,     0,    49,    93,    48,     0,
    65,     0,    98,     0,    98,    78,    93,    79,     0,    98,
    78,    93,    79,    78,    93,    79,     0,    99,    49,    86,
    48,     0,    67,     0,    66,     0,    66,     0,    21,    99,
    92,    22,     0,     6,    99,    49,    88,    48,    92,    22,
     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    72,    76,    82,    84,    88,    90,    94,    96,    97,    98,
    99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
   109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
   119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
   129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   160,   161,   162,
   163,   164,   165,   168,   170,   174,   176,   179,   181,   182,
   186,   188,   191,   193,   196,   198,   201,   203,   204,   205,
   208,   210,   213,   215,   216,   217,   218,   219,   220,   221,
   222,   223,   224,   227,   229,   230,   231,   232,   235,   237,
   238,   241,   243,   244,   245,   246,   247,   248,   249,   252,
   255,   258,   262,   273
};

static const char * const yytname[] = {   "$","error","$undefined.","GUARDAR",
"PUSH","POP","FUNCION","RETORNAR","BUSCAR","INSERTAR","ELIMINAR","USE_INDICE",
"CLOSE_INDICE","STOP","REGISTRO","FINREGISTRO","ABRIR","CERRAR","MOSTRAR","VACIAR",
"LLAMAR","PROC","END","PROCNAME","GRAFICOS","DIM","LINEA","CIRCULO","CONVERTIR",
"EVALUAR","EQ","TERMINAR","DECIMALES","VENTANA","FIN","BOTON","MENSAJE","ETIQUETA",
"TEXTO","NE","LT","LE","GT","GE","PLUS","MINUS","MULT","DIVIDE","RPAREN","LPAREN",
"ASSIGN","SEMICOLON","COMMA","IF","THEN","ELSE","FI","WHILE","FOR","TO","DO",
"OD","PRINT","LEER","BORRAR","NUMBER","NAME","SNAME","PAUSA","CONSULTA","LITERAL",
"STRING","DOBLECOMILLA","OR","AND","CONTINUAR","SALIR","ACTUALIZAR","'['","']'",
"'#'","ROOT","procedimientos","subprograma","statement","lista_campos","lista_parametros",
"parametro","lista_argumentos","variable","lista_expr","lista_expr2","stmtseq",
"expression","expr2","expr3","expr4","sdesignator","designator","proc_designator",
"procedimiento","funcion",""
};
#endif

static const short yyr1[] = {     0,
    81,    81,    82,    82,    83,    83,    84,    84,    84,    84,
    84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
    84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
    84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
    84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
    84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
    84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
    84,    84,    84,    85,    85,    86,    86,    87,    87,    87,
    88,    88,    89,    89,    90,    90,    91,    91,    91,    91,
    92,    92,    93,    93,    93,    93,    93,    93,    93,    93,
    93,    93,    93,    94,    94,    94,    94,    94,    95,    95,
    95,    96,    96,    96,    96,    96,    96,    96,    96,    97,
    98,    99,   100,   101
};

static const short yyr2[] = {     0,
     1,     3,     1,     2,     1,     1,     3,     3,     3,     3,
     4,     3,     5,     3,     6,     9,     6,     6,     6,     9,
     2,     6,     4,     2,     2,     2,     2,     7,     5,     5,
     9,     4,     4,     3,     3,     6,     5,     6,     2,     2,
     5,     8,     6,     3,     3,     2,     1,     3,     2,     2,
     5,     4,     8,     2,     2,     2,     1,     1,     4,     4,
     2,     2,     1,     2,     2,     3,     5,     4,     4,     1,
     2,     6,     6,     2,     3,     1,     3,     1,     1,     1,
     1,     3,     1,     1,     1,     3,     1,     1,     1,     4,
     2,     1,     1,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     1,     3,     3,     3,     3,     1,     3,
     3,     2,     2,     3,     1,     1,     4,     7,     4,     1,
     1,     1,     4,     7
};

static const short yydefact[] = {     0,
     0,     0,     0,     0,     0,     0,     0,     0,    63,    47,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   121,   120,    70,     0,    57,    58,     0,    92,     1,     0,
     0,     0,     0,   121,    64,    84,    83,    65,     0,     0,
     0,   115,    24,    93,   104,   109,    25,   116,     0,     0,
     0,     0,    61,    62,     0,     0,    49,    55,    56,     0,
   122,    40,    21,     0,     0,     0,     0,     0,     0,     0,
    46,    26,     0,    88,    39,    85,    87,    89,     0,     0,
     0,     0,    27,     0,     0,    54,    50,    71,     0,     0,
     0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   112,   113,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    48,    34,
     0,    14,    12,     0,     0,    44,    45,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    66,     0,
     0,     2,     3,     5,     6,     9,     8,    10,     0,     0,
     0,     7,    35,     0,     0,     0,     0,    79,     0,    76,
    78,    80,    52,   114,    94,    95,    96,    97,    98,    99,
   105,   106,   107,   108,   110,   111,   100,   101,   102,   103,
     0,     0,    68,    59,    60,     0,     0,     0,     0,     0,
     0,    32,    86,     0,     0,     0,     0,    33,     0,     0,
     0,    69,     0,     0,     4,     0,     0,    11,     0,     0,
     0,     0,     0,    23,     0,     0,   117,   119,    67,    74,
    41,    13,     0,     0,    90,     0,    29,    30,     0,    51,
     0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
     0,     0,    77,     0,     0,    75,     0,    43,     0,     0,
    72,    73,     0,    81,   123,    19,    22,    17,    18,    36,
    38,    15,     0,     0,     0,     0,    28,     0,     0,     0,
     0,     0,    53,   118,    42,     0,     0,    82,     0,     0,
    31,   124,    20,    16,     0,     0,     0
};

static const short yydefgoto[] = {   305,
   162,   163,    38,   206,   179,   180,   273,   274,    85,    86,
    39,   181,    54,    55,    56,    40,    58,    59,   164,   165
};

static const short yypact[] = {  1012,
   -51,     5,     5,    77,    -7,   -32,   -32,   -32,-32768,-32768,
   -10,   -32,   -10,   -32,   -32,    -3,    -1,     5,   163,   163,
     5,   -28,    11,   -10,   304,    77,    77,   -10,   304,   -16,
    19,-32768,    45,    63,-32768,-32768,    12,-32768,   562,     2,
     1,    32,   -10,-32768,-32768,-32768,-32768,-32768,   163,   163,
    77,-32768,-32768,    43,    94,-32768,     3,    30,    65,   -10,
   -10,   -10,-32768,-32768,    48,   -10,-32768,-32768,-32768,   -10,
-32768,-32768,-32768,   -10,    60,    70,    -4,    75,   -10,   -32,
-32768,-32768,    74,-32768,    71,-32768,-32768,   -21,    96,     3,
    68,   122,    71,   -10,   -10,-32768,-32768,-32768,   104,   112,
   -10,   -10,    16,-32768,   236,   135,    77,    77,   103,   105,
   109,   116,    77,   334,   -32,-32768,-32768,   134,   163,   163,
   163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
   -23,    22,    77,   334,   -10,   -10,   -10,   -32,-32768,-32768,
   -10,-32768,   132,   163,   163,-32768,-32768,   128,   304,   163,
  1012,  1012,    77,   124,   -32,   -32,   -32,   -10,-32768,    -1,
    -1,    16,-32768,-32768,-32768,-32768,-32768,   118,   148,   -32,
   136,-32768,-32768,    -1,   138,   163,   137,-32768,   153,   159,
-32768,     3,   162,-32768,   115,   115,   115,   115,   115,   115,
    94,    94,    94,    94,-32768,-32768,-32768,-32768,-32768,-32768,
   141,   157,-32768,-32768,-32768,   206,   158,   -10,   165,   117,
   126,-32768,-32768,    17,   487,   637,   168,-32768,   -10,   179,
   185,-32768,   190,  1012,-32768,    77,   334,-32768,   211,   180,
   181,   212,   -19,-32768,   334,   163,   176,-32768,-32768,   -32,
-32768,-32768,   163,   163,-32768,  1012,-32768,-32768,    77,-32768,
   -32,   -32,     5,   712,   173,   210,    37,   200,-32768,   163,
    77,    77,-32768,   227,    77,-32768,   245,   115,   787,   207,
-32768,-32768,   218,   225,-32768,-32768,-32768,-32768,   192,-32768,
   115,-32768,   199,   215,   204,   163,-32768,  1012,  1012,     5,
   163,   254,-32768,-32768,   115,   862,   937,-32768,    93,    77,
-32768,-32768,-32768,-32768,   287,   291,-32768
};

static const short yypgoto[] = {-32768,
-32768,   130,    27,    53,  -126,-32768,     4,   143,   266,   156,
  -131,    73,   242,   -73,   -35,    -2,   174,    58,-32768,-32768
};


#define	YYLAST		1089


static const short yytable[] = {    46,
    46,    57,    61,    62,    63,    64,    60,   202,   131,    66,
   261,    68,    69,   116,   117,    75,    94,   132,    79,   215,
   216,   160,    88,    90,    90,   101,    88,    96,    43,    70,
   108,   105,   131,   109,    32,   110,   161,   111,   112,   125,
   126,   132,    81,    32,   102,   106,   197,   144,    90,    44,
    32,   191,   192,   193,   194,    44,   150,    42,   262,    32,
   125,   126,    71,    95,    71,   104,    72,  -122,   127,   128,
    44,    32,   119,    73,    74,    82,    53,   147,   113,   107,
   114,   120,   121,   122,   123,   124,   125,   126,    32,   127,
   128,   199,   254,   195,   196,   245,    42,    87,    89,    91,
   256,    87,   168,    32,    90,    90,   278,   133,   263,    98,
    90,   182,   183,   134,   269,   127,   128,   138,   125,   126,
    49,    50,   149,   118,   142,    51,   145,   152,   198,   200,
    90,   182,    99,   100,   143,   207,   125,   126,   148,   129,
   130,    52,    31,    32,    45,    48,    88,   127,   128,   151,
    90,   153,   219,   220,   221,   156,   296,   297,   125,   126,
   125,   126,   169,   157,   170,   127,   128,   228,   243,   125,
   126,   303,   173,    41,   174,    47,    47,   244,   175,   171,
   172,   184,   176,   209,    65,   177,    67,   127,   128,   127,
   128,    76,   212,   218,    80,   226,   227,    83,   127,   128,
   234,    92,   231,    97,   238,   201,    49,    50,    42,    42,
   235,    51,    41,   236,   229,   233,   115,   223,   224,   237,
   239,    87,   240,    90,   182,   217,   249,    52,    31,   242,
   251,   230,   182,   135,   136,   137,   252,   207,   253,   139,
   257,   104,   104,   140,   258,   259,    90,   141,   271,   272,
    46,   276,   146,   265,   279,   125,   126,   277,    90,    90,
    77,    78,    90,   260,   280,   289,   288,   154,   155,   291,
   125,   126,    42,    42,   158,   159,   290,   292,   284,   293,
   104,    42,   294,   300,   127,   128,   306,    46,   125,   126,
   307,   225,   266,   298,    93,   104,   286,    90,   255,   127,
   128,    71,    32,    42,   213,   166,   167,     0,   203,   204,
   205,    42,     0,     0,   208,     0,     0,   127,   128,     0,
     0,   270,   104,   104,    41,    41,    42,     0,     0,     0,
     0,   222,     0,   282,   283,     0,     0,   285,     0,     0,
     0,     0,     0,     0,     0,    42,    42,    49,    50,     0,
     0,     0,    51,    42,    42,     0,     0,     0,     0,     0,
   185,   186,   187,   188,   189,   190,     0,     0,    52,    31,
    32,     0,   304,    84,     0,     0,     0,    49,    50,     0,
     0,   241,    51,     0,     0,   210,   211,     0,    41,    41,
     0,   214,   250,     0,     0,     0,     0,    41,    52,    31,
    32,     0,     0,   178,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   232,     0,    41,
     0,     0,     0,     0,     0,     0,    47,    41,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    41,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    41,    41,    47,     0,     0,     0,     0,     0,    41,
    41,     0,     0,     0,     0,     0,     0,   264,     0,     0,
     0,     0,     0,     0,   267,   268,     0,     0,     0,     1,
     2,     3,     0,     4,     5,     6,     7,     8,     9,    10,
    11,   281,    12,    13,    14,    15,    16,     0,     0,     0,
    17,    18,    19,    20,    21,    22,     0,     0,    23,    24,
     0,     0,    25,     0,     0,     0,     0,   295,     0,     0,
     0,     0,   299,     0,     0,     0,     0,     0,     0,    26,
     0,   246,   247,    27,    28,     0,     0,     0,    29,    30,
     0,     0,    31,    32,    33,    34,     0,     0,     0,     0,
     0,    35,    36,    37,     1,     2,     3,     0,     4,     5,
     6,     7,     8,     9,    10,    11,     0,    12,    13,    14,
    15,    16,     0,     0,     0,    17,    18,    19,    20,    21,
    22,     0,   103,    23,    24,     0,     0,    25,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    26,     0,     0,     0,    27,    28,
     0,     0,     0,    29,    30,     0,     0,    31,    32,    33,
    34,     0,     0,     0,     0,     0,    35,    36,    37,     1,
     2,     3,     0,     4,     5,     6,     7,     8,     9,    10,
    11,     0,    12,    13,    14,    15,    16,     0,     0,     0,
    17,    18,    19,    20,    21,    22,     0,     0,    23,    24,
     0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
     0,     0,     0,    27,    28,     0,     0,   248,    29,    30,
     0,     0,    31,    32,    33,    34,     0,     0,     0,     0,
     0,    35,    36,    37,     1,     2,     3,     0,     4,     5,
     6,     7,     8,     9,    10,    11,     0,    12,    13,    14,
    15,    16,     0,   275,     0,    17,    18,    19,    20,    21,
    22,     0,     0,    23,    24,     0,     0,    25,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    26,     0,     0,     0,    27,    28,
     0,     0,     0,    29,    30,     0,     0,    31,    32,    33,
    34,     0,     0,     0,     0,     0,    35,    36,    37,     1,
     2,     3,     0,     4,     5,     6,     7,     8,     9,    10,
    11,     0,    12,    13,    14,    15,    16,     0,     0,     0,
    17,    18,    19,    20,    21,    22,     0,     0,    23,    24,
     0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
     0,     0,   287,    27,    28,     0,     0,     0,    29,    30,
     0,     0,    31,    32,    33,    34,     0,     0,     0,     0,
     0,    35,    36,    37,     1,     2,     3,     0,     4,     5,
     6,     7,     8,     9,    10,    11,     0,    12,    13,    14,
    15,    16,     0,     0,     0,    17,    18,    19,    20,    21,
    22,     0,     0,    23,    24,     0,     0,    25,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    26,     0,     0,     0,    27,    28,
     0,     0,   301,    29,    30,     0,     0,    31,    32,    33,
    34,     0,     0,     0,     0,     0,    35,    36,    37,     1,
     2,     3,     0,     4,     5,     6,     7,     8,     9,    10,
    11,     0,    12,    13,    14,    15,    16,     0,   302,     0,
    17,    18,    19,    20,    21,    22,     0,     0,    23,    24,
     0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
     0,     0,     0,    27,    28,     0,     0,     0,    29,    30,
     0,     0,    31,    32,    33,    34,     0,     0,     0,     0,
     0,    35,    36,    37,     1,     2,     3,     0,     4,     5,
     6,     7,     8,     9,    10,    11,     0,    12,    13,    14,
    15,    16,     0,     0,     0,    17,    18,    19,    20,    21,
    22,     0,     0,    23,    24,     0,     0,    25,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    26,     0,     0,     0,    27,    28,
     0,     0,     0,    29,    30,     0,     0,    31,    32,    33,
    34,     0,     0,     0,     0,     0,    35,    36,    37
};

static const short yycheck[] = {     2,
     3,     4,     5,     6,     7,     8,    14,   134,    30,    12,
    30,    14,    15,    49,    50,    18,    33,    39,    21,   151,
   152,     6,    25,    26,    27,    14,    29,    30,    80,    33,
    30,    30,    30,    33,    67,    35,    21,    37,    38,    44,
    45,    39,    71,    67,    33,    44,    70,    52,    51,    66,
    67,   125,   126,   127,   128,    66,    78,     0,    78,    67,
    44,    45,    66,    80,    66,    39,    70,    49,    73,    74,
    66,    67,    30,    16,    17,    65,     4,    80,    78,    78,
    49,    39,    40,    41,    42,    43,    44,    45,    67,    73,
    74,    70,   224,   129,   130,    79,    39,    25,    26,    27,
   227,    29,   105,    67,   107,   108,    70,    78,   235,    65,
   113,   114,   115,    49,   246,    73,    74,    70,    44,    45,
    44,    45,    52,    51,    65,    49,    52,    60,   131,   132,
   133,   134,    70,    71,    65,   138,    44,    45,    65,    46,
    47,    65,    66,    67,     2,     3,   149,    73,    74,    54,
   153,    30,   155,   156,   157,    52,   288,   289,    44,    45,
    44,    45,   105,    52,    30,    73,    74,   170,    52,    44,
    45,    79,    70,     0,    70,     2,     3,    52,    70,   107,
   108,    48,    67,    52,    11,   113,    13,    73,    74,    73,
    74,    18,    65,    70,    21,    78,    49,    24,    73,    74,
    48,    28,    65,    30,    48,   133,    44,    45,   151,   152,
    52,    49,    39,    52,    79,    79,    43,   160,   161,    79,
    15,   149,    65,   226,   227,   153,    59,    65,    66,    65,
    52,   174,   235,    60,    61,    62,    52,   240,    49,    66,
    30,   215,   216,    70,    65,    65,   249,    74,   251,   252,
   253,    79,    79,    78,   257,    44,    45,    48,   261,   262,
    19,    20,   265,    52,    65,    48,    60,    94,    95,    78,
    44,    45,   215,   216,   101,   102,    52,    79,    52,    65,
   254,   224,    79,    30,    73,    74,     0,   290,    44,    45,
     0,   162,   240,   290,    29,   269,    52,   300,   226,    73,
    74,    66,    67,   246,   149,    70,    71,    -1,   135,   136,
   137,   254,    -1,    -1,   141,    -1,    -1,    73,    74,    -1,
    -1,   249,   296,   297,   151,   152,   269,    -1,    -1,    -1,
    -1,   158,    -1,   261,   262,    -1,    -1,   265,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   288,   289,    44,    45,    -1,
    -1,    -1,    49,   296,   297,    -1,    -1,    -1,    -1,    -1,
   119,   120,   121,   122,   123,   124,    -1,    -1,    65,    66,
    67,    -1,   300,    70,    -1,    -1,    -1,    44,    45,    -1,
    -1,   208,    49,    -1,    -1,   144,   145,    -1,   215,   216,
    -1,   150,   219,    -1,    -1,    -1,    -1,   224,    65,    66,
    67,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,   246,
    -1,    -1,    -1,    -1,    -1,    -1,   253,   254,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   288,   289,   290,    -1,    -1,    -1,    -1,    -1,   296,
   297,    -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,    -1,
    -1,    -1,    -1,    -1,   243,   244,    -1,    -1,    -1,     3,
     4,     5,    -1,     7,     8,     9,    10,    11,    12,    13,
    14,   260,    16,    17,    18,    19,    20,    -1,    -1,    -1,
    24,    25,    26,    27,    28,    29,    -1,    -1,    32,    33,
    -1,    -1,    36,    -1,    -1,    -1,    -1,   286,    -1,    -1,
    -1,    -1,   291,    -1,    -1,    -1,    -1,    -1,    -1,    53,
    -1,    55,    56,    57,    58,    -1,    -1,    -1,    62,    63,
    -1,    -1,    66,    67,    68,    69,    -1,    -1,    -1,    -1,
    -1,    75,    76,    77,     3,     4,     5,    -1,     7,     8,
     9,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
    19,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
    29,    -1,    31,    32,    33,    -1,    -1,    36,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    58,
    -1,    -1,    -1,    62,    63,    -1,    -1,    66,    67,    68,
    69,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,     3,
     4,     5,    -1,     7,     8,     9,    10,    11,    12,    13,
    14,    -1,    16,    17,    18,    19,    20,    -1,    -1,    -1,
    24,    25,    26,    27,    28,    29,    -1,    -1,    32,    33,
    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
    -1,    -1,    -1,    57,    58,    -1,    -1,    61,    62,    63,
    -1,    -1,    66,    67,    68,    69,    -1,    -1,    -1,    -1,
    -1,    75,    76,    77,     3,     4,     5,    -1,     7,     8,
     9,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
    19,    20,    -1,    22,    -1,    24,    25,    26,    27,    28,
    29,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    58,
    -1,    -1,    -1,    62,    63,    -1,    -1,    66,    67,    68,
    69,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,     3,
     4,     5,    -1,     7,     8,     9,    10,    11,    12,    13,
    14,    -1,    16,    17,    18,    19,    20,    -1,    -1,    -1,
    24,    25,    26,    27,    28,    29,    -1,    -1,    32,    33,
    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
    -1,    -1,    56,    57,    58,    -1,    -1,    -1,    62,    63,
    -1,    -1,    66,    67,    68,    69,    -1,    -1,    -1,    -1,
    -1,    75,    76,    77,     3,     4,     5,    -1,     7,     8,
     9,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
    19,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
    29,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    58,
    -1,    -1,    61,    62,    63,    -1,    -1,    66,    67,    68,
    69,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,     3,
     4,     5,    -1,     7,     8,     9,    10,    11,    12,    13,
    14,    -1,    16,    17,    18,    19,    20,    -1,    22,    -1,
    24,    25,    26,    27,    28,    29,    -1,    -1,    32,    33,
    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,    63,
    -1,    -1,    66,    67,    68,    69,    -1,    -1,    -1,    -1,
    -1,    75,    76,    77,     3,     4,     5,    -1,     7,     8,
     9,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
    19,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
    29,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    58,
    -1,    -1,    -1,    62,    63,    -1,    -1,    66,    67,    68,
    69,    -1,    -1,    -1,    -1,    -1,    75,    76,    77
};
/* -*-C-*-  Note some compilers choke on comments on `//#line' lines.  */
//#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

//#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
//#line 73 "grammar.y"
{  pila_programas[idx_prg] = (yyvsp[0].nodo); /* stmtseq */ ;  idx_prg++ ; 
if (depurar)
  	printf("se ha reducido el programa por la primera  grammar.y\n"); ;
    break;}
case 2:
//#line 76 "grammar.y"
{
if (depurar)
  	printf("se ha reducido el programa por la segunda regla de grammar.y\n");
 	pila_programas[idx_prg] = (yyvsp[-2].nodo); /* stmtseq */ ;  idx_prg++; ;
    break;}
case 3:
//#line 83 "grammar.y"
{ yyval.nodo =  yyvsp[0].nodo  ;  /* un procedimiento  */ ;
    break;}
case 4:
//#line 84 "grammar.y"
{ yyval.nodo =  yyvsp[0].nodo ; /*varios procedim.*/ ;
    break;}
case 5:
//#line 89 "grammar.y"
{ yyval.nodo =  yyvsp[0].nodo  ;  /* un procedimiento  */ ;
    break;}
case 6:
//#line 90 "grammar.y"
{ yyval.nodo =  yyvsp[0].nodo  ;  /* una funcion  */ ;
    break;}
case 7:
//#line 95 "grammar.y"
{ yyval.nodo = nodo2(asigna_num, yyvsp[-2].nodo, yyvsp[0].nodo); /*asignacion*/;
    break;}
case 8:
//#line 96 "grammar.y"
{ yyval.nodo = nodo2(asigna_alfa, yyvsp[-2].nodo, yyvsp[0].nodo); /* asigna string a varalfa */;
    break;}
case 9:
//#line 97 "grammar.y"
{ yyval.nodo = nodo2(asigna_alfa, yyvsp[-2].nodo, yyvsp[0].nodo); /*asign literal*/;
    break;}
case 10:
//#line 98 "grammar.y"
{ yyval.nodo = nodo2(asigna_alfa_var, yyvsp[-2].nodo, yyvsp[0].nodo); /*asign literal*/;
    break;}
case 11:
//#line 99 "grammar.y"
{ yyval.nodo = nodo2(sumar_alfa, yyvsp[-3].nodo, yyvsp[0].nodo); /*suma alfa*/;
    break;}
case 12:
//#line 100 "grammar.y"
{ yyval.nodo = nodo2(dimensionar, yyvsp[-1].nodo, yyvsp[0].nodo); /*dimensionar un vector entero */ ;
    break;}
case 13:
//#line 101 "grammar.y"
{ yyval.nodo = nodo3(dimensionar, yyvsp[-3].nodo, yyvsp[-2].nodo, yyvsp[0].nodo); /*dimensionar un vector entero */ ;
    break;}
case 14:
//#line 102 "grammar.y"
{ yyval.nodo = nodo2(dimensionar_alfa, yyvsp[-1].nodo, yyvsp[0].nodo); /*dimensionar un vector strings */ ;
    break;}
case 15:
//#line 103 "grammar.y"
{ yyval.nodo = nodo3(asigna_vector, yyvsp[-5].nodo, yyvsp[-3].nodo, yyvsp[0].nodo );  ;
    break;}
case 16:
//#line 104 "grammar.y"
{ yyval.nodo = nodo4(asigna_vector, yyvsp[-8].nodo, yyvsp[-6].nodo, yyvsp[-3].nodo, yyvsp[0].nodo );  ;
    break;}
case 17:
//#line 105 "grammar.y"
{ yyval.nodo = nodo3(asigna_vector_alfa, yyvsp[-5].nodo, yyvsp[-3].nodo, yyvsp[0].nodo );  ;
    break;}
case 18:
//#line 106 "grammar.y"
{ yyval.nodo = nodo3(asigna_vector_alfa2, yyvsp[-5].nodo, yyvsp[-3].nodo, yyvsp[0].nodo );  ;
    break;}
case 19:
//#line 107 "grammar.y"
{ yyval.nodo = nodo3(asigna_vector_alfa3, yyvsp[-5].nodo, yyvsp[-3].nodo, yyvsp[-1].nodo );  ;
    break;}
case 20:
//#line 108 "grammar.y"
{ yyval.nodo = nodo4(asigna_vector_alfa4, yyvsp[-8].nodo, yyvsp[-6].nodo, yyvsp[-3].nodo, yyvsp[-1].nodo );  ;
    break;}
case 21:
//#line 109 "grammar.y"
{  yyval.nodo = nodo1(llamar, yyvsp[0].nodo) ;/*llamar proced.*/;
    break;}
case 22:
//#line 110 "grammar.y"
{  yyval.nodo = nodo3(llamar, yyvsp[-3].nodo, yyvsp[-1].nodo, yyvsp[-5].nodo) ;/*llamar proced.*/;
    break;}
case 23:
//#line 111 "grammar.y"
{  yyval.nodo = nodo2(llamar, yyvsp[-3].nodo, yyvsp[-1].nodo) ;/*llamar proced.*/;
    break;}
case 24:
//#line 112 "grammar.y"
{ yyval.nodo = nodo1( retorno, yyvsp[0].nodo);    ;
    break;}
case 25:
//#line 113 "grammar.y"
{ yyval.nodo = nodo1( retorno, yyvsp[0].nodo);    ;
    break;}
case 26:
//#line 114 "grammar.y"
{ yyval.nodo = nodo1(decimales, yyvsp[0].nodo ) ; ;
    break;}
case 27:
//#line 115 "grammar.y"
{ yyval.nodo = nodo1(imprimir_varios,  yyvsp[0].nodo); /*imprimir lista expr*/;
    break;}
case 28:
//#line 116 "grammar.y"
{ yyval.nodo = nodo3(si, yyvsp[-5].nodo, yyvsp[-3].nodo, yyvsp[-1].nodo); /*if con else */;
    break;}
case 29:
//#line 117 "grammar.y"
{ yyval.nodo = nodo2(si, yyvsp[-3].nodo, yyvsp[-1].nodo); /*if sin else*/;
    break;}
case 30:
//#line 118 "grammar.y"
{ yyval.nodo = nodo2(mientras, yyvsp[-3].nodo, yyvsp[-1].nodo); /*while*/;
    break;}
case 31:
//#line 119 "grammar.y"
{yyval.nodo = nodo4(desde, yyvsp[-7].nodo, yyvsp[-5].nodo, yyvsp[-3].nodo, yyvsp[-1].nodo); /*for*/;
    break;}
case 32:
//#line 120 "grammar.y"
{ yyval.nodo = nodo3(crear_ventana, yyvsp[-2].nodo, yyvsp[-1].nodo, yyvsp[0].nodo) ;  ;
    break;}
case 33:
//#line 121 "grammar.y"
{ yyval.nodo=nodo1(mostrar_ventana, yyvsp[-1].nodo) ;  ;
    break;}
case 34:
//#line 122 "grammar.y"
{ yyval.nodo=nodo1(mostrar_ventanas, yyvsp[0].nodo) ;  ;
    break;}
case 35:
//#line 123 "grammar.y"
{ yyval.nodo=nodo2(cambiar_titulo, yyvsp[-2].nodo, yyvsp[0].nodo) ;  ;
    break;}
case 36:
//#line 124 "grammar.y"
{ yyval.nodo=nodo5(guardar_boton, yyvsp[-5].nodo, yyvsp[-3].nodo, yyvsp[-2].nodo, yyvsp[-1].nodo, yyvsp[0].nodo) ;  ;
    break;}
case 37:
//#line 125 "grammar.y"
{ yyval.nodo=nodo4(guardar_etiqueta, yyvsp[-4].nodo, yyvsp[-2].nodo, yyvsp[-1].nodo, yyvsp[0].nodo) ;  ;
    break;}
case 38:
//#line 126 "grammar.y"
{ yyval.nodo=nodo4(guardar_texto, yyvsp[-5].nodo, yyvsp[-3].nodo, yyvsp[-2].nodo, yyvsp[0].nodo) ;  ;
    break;}
case 39:
//#line 127 "grammar.y"
{ yyval.nodo = nodo1(mensaje,  yyvsp[0].nodo); /*imprimir lista expr*/;
    break;}
case 40:
//#line 128 "grammar.y"
{   yyval.nodo = nodo1(interpreta, yyvsp[0].nodo);  ;
    break;}
case 41:
//#line 129 "grammar.y"
{ yyval.nodo = nodo4(graficos, yyvsp[-3].nodo, yyvsp[-2].nodo, yyvsp[-1].nodo, yyvsp[0].nodo);   ;
    break;}
case 42:
//#line 130 "grammar.y"
{ yyval.nodo = nodo4(dibuja_linea, yyvsp[-6].nodo, yyvsp[-4].nodo, yyvsp[-2].nodo, yyvsp[0].nodo) ; ;
    break;}
case 43:
//#line 131 "grammar.y"
{ yyval.nodo = nodo3(dibuja_circulo, yyvsp[-4].nodo, yyvsp[-2].nodo, yyvsp[0].nodo) ; ;
    break;}
case 44:
//#line 132 "grammar.y"
{yyval.nodo=nodo2(convertir_texto_a_numero, yyvsp[-1].nodo, yyvsp[0].nodo);;
    break;}
case 45:
//#line 133 "grammar.y"
{yyval.nodo=nodo2(convertir_numero_a_texto, yyvsp[-1].nodo, yyvsp[0].nodo);;
    break;}
case 46:
//#line 134 "grammar.y"
{  yyval.nodo = nodo1(interpreta, yyvsp[0].nodo );  ;
    break;}
case 47:
//#line 135 "grammar.y"
{ yyval.nodo=nodo1(stop, yyvsp[0].nodo); ;
    break;}
case 48:
//#line 136 "grammar.y"
{ yyval.nodo=nodo2(abrir, yyvsp[-1].nodo, yyvsp[0].nodo); ;
    break;}
case 49:
//#line 137 "grammar.y"
{ yyval.nodo=nodo1(cerrar, yyvsp[0].nodo); ;
    break;}
case 50:
//#line 138 "grammar.y"
{ yyval.nodo = nodo1(leer,  yyvsp[0].nodo) ; /*leer variable numerica*/;
    break;}
case 51:
//#line 139 "grammar.y"
{ yyval.nodo=nodo3(leer_archivo, yyvsp[-2].nodo, yyvsp[-1].nodo, yyvsp[0].nodo); ;
    break;}
case 52:
//#line 140 "grammar.y"
{ yyval.nodo=nodo2(escribir_archivo, yyvsp[-1].nodo, yyvsp[0].nodo); ;
    break;}
case 53:
//#line 141 "grammar.y"
{ yyval.nodo=nodo4(escribir_archivo, yyvsp[-5].nodo, yyvsp[-4].nodo, yyvsp[-2].nodo, yyvsp[0].nodo); ;
    break;}
case 54:
//#line 142 "grammar.y"
{ yyval.nodo = nodo1(leertexto,  yyvsp[0].nodo) ; /*leer variable alfa*/;
    break;}
case 55:
//#line 143 "grammar.y"
{ yyval.nodo=nodo1(mostrar, yyvsp[0].nodo); ;
    break;}
case 56:
//#line 144 "grammar.y"
{ yyval.nodo=nodo1(vaciar, yyvsp[0].nodo); ;
    break;}
case 57:
//#line 145 "grammar.y"
{ yyval.nodo=nodo1(continuar, yyvsp[0].nodo);
    break;}
case 58:
//#line 146 "grammar.y"
{ yyval.nodo=nodo1(salir, yyvsp[0].nodo);
    break;}
case 59:
//#line 147 "grammar.y"
{ yyval.nodo = nodo3(buscar_clave,  yyvsp[-2].nodo, yyvsp[-1].nodo, yyvsp[0].nodo); ;
    break;}
case 60:
//#line 148 "grammar.y"
{ yyval.nodo = nodo3(insertar_clave,  yyvsp[-2].nodo, yyvsp[-1].nodo, yyvsp[0].nodo); ;
    break;}
case 61:
//#line 149 "grammar.y"
{ yyval.nodo = nodo1(eliminar_clave,  yyvsp[0].nodo); ;
    break;}
case 62:
//#line 150 "grammar.y"
{ yyval.nodo=nodo1(use_indice, yyvsp[0].nodo); ;
    break;}
case 63:
//#line 151 "grammar.y"
{ yyval.nodo=nodo1(close_indice, yyvsp[0].nodo); ;
    break;}
case 64:
//#line 152 "grammar.y"
{ yyval.nodo = nodo1(push,  yyvsp[0].nodo); ;
    break;}
case 65:
//#line 153 "grammar.y"
{ yyval.nodo = nodo1(pop ,  yyvsp[0].nodo); ;
    break;}
case 66:
//#line 154 "grammar.y"
{ yyval.nodo = nodo1(actualizar, yyvsp[0].nodo); ;
    break;}
case 67:
//#line 155 "grammar.y"
{ yyval.nodo = nodo3(definir_registro, yyvsp[-3].nodo, yyvsp[-2].nodo, yyvsp[-1].nodo);
                        pila_records[idx_rec] = yyval.nodo   ; 
			array_variables[(int) yyvsp[-3].nodo->num].procedimiento = idx_rec  ;
			idx_rec++;
 ;
    break;}
case 68:
//#line 160 "grammar.y"
{ yyval.nodo=nodo2(buscar_registro, yyvsp[-1].nodo, yyvsp[0].nodo); ;
    break;}
case 69:
//#line 161 "grammar.y"
{ yyval.nodo=nodo2(actualizar_registro, yyvsp[-1].nodo, yyvsp[0].nodo); ;
    break;}
case 70:
//#line 162 "grammar.y"
{ yyval.nodo = nodo1(pausa, yyvsp[0].nodo); ;
    break;}
case 71:
//#line 163 "grammar.y"
{ yyval.nodo = nodo1(pausa, yyvsp[-1].nodo); ;
    break;}
case 72:
//#line 164 "grammar.y"
{ yyval.nodo = nodo3(consulta, yyvsp[-4].nodo, yyvsp[-2].nodo, yyvsp[0].nodo); ;
    break;}
case 73:
//#line 165 "grammar.y"
{ yyval.nodo = nodo3(consulta, yyvsp[-4].nodo, yyvsp[-2].nodo, yyvsp[0].nodo); ;
    break;}
case 74:
//#line 169 "grammar.y"
{ yyval.nodo = nodo2(listacampos, yyvsp[-1].nodo, yyvsp[0].nodo); ;
    break;}
case 75:
//#line 170 "grammar.y"
{ yyval.nodo = nodo3(listacampos, yyvsp[0].nodo, yyvsp[-2].nodo, yyvsp[-1].nodo); ;
    break;}
case 76:
//#line 175 "grammar.y"
{yyval.nodo = nodo1(lista_parametros, yyvsp[0].nodo);;
    break;}
case 77:
//#line 176 "grammar.y"
{ yyval.nodo=nodo2(lista_parametros, yyvsp[-2].nodo, yyvsp[0].nodo); ;
    break;}
case 78:
//#line 180 "grammar.y"
{ yyval.nodo=yyvsp[0].nodo; ;
    break;}
case 79:
//#line 181 "grammar.y"
{ yyval.nodo=yyvsp[0].nodo; ;
    break;}
case 80:
//#line 182 "grammar.y"
{ yyval.nodo=yyvsp[0].nodo; ;
    break;}
case 81:
//#line 187 "grammar.y"
{yyval.nodo = nodo1(lista_argumentos, yyvsp[0].nodo);;
    break;}
case 82:
//#line 188 "grammar.y"
{ yyval.nodo = nodo2(lista_argumentos, yyvsp[-2].nodo, yyvsp[0].nodo); ;
    break;}
case 83:
//#line 192 "grammar.y"
{yyval.nodo = yyvsp[0].nodo;;
    break;}
case 84:
//#line 193 "grammar.y"
{yyval.nodo = yyvsp[0].nodo;;
    break;}
case 85:
//#line 197 "grammar.y"
{ yyval.nodo=yyvsp[0].nodo ; /*lista expr*/ ;
    break;}
case 86:
//#line 198 "grammar.y"
{ yyval.nodo=nodo2 (secuencia, yyvsp[-2].nodo, yyvsp[0].nodo)  ; /*varias lista expr, separadas por coma*/ ;
    break;}
case 87:
//#line 202 "grammar.y"
{ yyval.nodo=nodo1(imprimir_expresion, yyvsp[0].nodo); /*lista expresion2*/;
    break;}
case 88:
//#line 203 "grammar.y"
{ yyval.nodo=nodo1(imprimir_literal, yyvsp[0].nodo ); /* un literal*/;
    break;}
case 89:
//#line 204 "grammar.y"
{ yyval.nodo=nodo1(imprimir_var_alfa, yyvsp[0].nodo); /* una variable literal*/;
    break;}
case 90:
//#line 205 "grammar.y"
{ yyval.nodo=nodo2(imprimir_var_vectoralfa, yyvsp[-3].nodo, yyvsp[-1].nodo); /* una variable literal*/;
    break;}
case 91:
//#line 209 "grammar.y"
{ yyval.nodo = nodo2(secuencia, yyvsp[-1].nodo, yyvsp[0].nodo); /*una seq de comandos*/;
    break;}
case 92:
//#line 210 "grammar.y"
{ yyval.nodo = yyvsp[0].nodo; /*un comando*/;
    break;}
case 93:
//#line 214 "grammar.y"
{ yyval.nodo = yyvsp[0].nodo; /* expresion2*/;
    break;}
case 94:
//#line 215 "grammar.y"
{ yyval.nodo = nodo2(igualque,      yyvsp[-2].nodo, yyvsp[0].nodo); /*igualdad*/;
    break;}
case 95:
//#line 216 "grammar.y"
{ yyval.nodo = nodo2(noigualque,    yyvsp[-2].nodo, yyvsp[0].nodo); /*no igual*/;
    break;}
case 96:
//#line 217 "grammar.y"
{ yyval.nodo = nodo2(menorque,      yyvsp[-2].nodo, yyvsp[0].nodo); /*menor que*/;
    break;}
case 97:
//#line 218 "grammar.y"
{ yyval.nodo = nodo2(menorigualque, yyvsp[-2].nodo, yyvsp[0].nodo); /*menor o igual que*/;
    break;}
case 98:
//#line 219 "grammar.y"
{ yyval.nodo = nodo2(mayorque,      yyvsp[-2].nodo, yyvsp[0].nodo); /*mayor que*/;
    break;}
case 99:
//#line 220 "grammar.y"
{ yyval.nodo = nodo2(mayorigualque, yyvsp[-2].nodo, yyvsp[0].nodo); /*mayor o igual que*/;
    break;}
case 100:
//#line 221 "grammar.y"
{ yyval.nodo = nodo2(comparaliteral, yyvsp[-2].nodo, yyvsp[0].nodo) ; /*asigna literal*/;
    break;}
case 101:
//#line 222 "grammar.y"
{ yyval.nodo = nodo2(comparaliteral, yyvsp[-2].nodo, yyvsp[0].nodo) ; /*asigna literal*/;
    break;}
case 102:
//#line 223 "grammar.y"
{ yyval.nodo = nodo2(comparaliteral2, yyvsp[-2].nodo, yyvsp[0].nodo) ; /*asigna literal*/;
    break;}
case 103:
//#line 224 "grammar.y"
{ yyval.nodo = nodo2(comparaliteral2, yyvsp[-2].nodo, yyvsp[0].nodo) ; /*asigna literal*/;
    break;}
case 104:
//#line 228 "grammar.y"
{ yyval.nodo = yyvsp[0].nodo; /* expr2*/;
    break;}
case 105:
//#line 229 "grammar.y"
{ yyval.nodo = nodo2(suma, yyvsp[-2].nodo, yyvsp[0].nodo); /*suma*/;
    break;}
case 106:
//#line 230 "grammar.y"
{ yyval.nodo = nodo2(resta, yyvsp[-2].nodo, yyvsp[0].nodo); /*resta*/;
    break;}
case 107:
//#line 231 "grammar.y"
{ yyval.nodo = nodo2(or, yyvsp[-2].nodo, yyvsp[0].nodo); /*or*/;
    break;}
case 108:
//#line 232 "grammar.y"
{ yyval.nodo = nodo2(and, yyvsp[-2].nodo, yyvsp[0].nodo); /*and*/;
    break;}
case 109:
//#line 236 "grammar.y"
{ yyval.nodo = yyvsp[0].nodo; ;
    break;}
case 110:
//#line 237 "grammar.y"
{ yyval.nodo = nodo2(multiplica, yyvsp[-2].nodo, yyvsp[0].nodo); /*multiplicar*/;
    break;}
case 111:
//#line 238 "grammar.y"
{ yyval.nodo = nodo2 (divide, yyvsp[-2].nodo, yyvsp[0].nodo); /*dividir*/;
    break;}
case 112:
//#line 242 "grammar.y"
{ yyval.nodo = yyvsp[0].nodo; /*positivo*/;
    break;}
case 113:
//#line 243 "grammar.y"
{ yyval.nodo = nodo1(negativo, yyvsp[0].nodo); /*negativo*/;
    break;}
case 114:
//#line 244 "grammar.y"
{ yyval.nodo = yyvsp[-1].nodo; /*expr enter parentesis*/;
    break;}
case 115:
//#line 245 "grammar.y"
{ yyval.nodo =  yyvsp[0].nodo; /*numero*/;
    break;}
case 116:
//#line 246 "grammar.y"
{ yyval.nodo = yyvsp[0].nodo; /*designador variable*/;
    break;}
case 117:
//#line 247 "grammar.y"
{ yyval.nodo = nodo2(evalua_vector, yyvsp[-3].nodo, yyvsp[-1].nodo);   ;
    break;}
case 118:
//#line 248 "grammar.y"
{ yyval.nodo = nodo3(evalua_vector, yyvsp[-6].nodo, yyvsp[-4].nodo, yyvsp[-1].nodo);   ;
    break;}
case 119:
//#line 249 "grammar.y"
{  yyval.nodo = nodo2(llamar, yyvsp[-3].nodo, yyvsp[-1].nodo) ;/*llamar proced.*/;
    break;}
case 120:
//#line 253 "grammar.y"
{ yyval.nodo = yyvsp[0].nodo; /*designador string*/;
    break;}
case 121:
//#line 256 "grammar.y"
{ yyval.nodo = yyvsp[0].nodo;  /* nombre designador */ ;
    break;}
case 122:
//#line 259 "grammar.y"
{ yyval.nodo =  yyvsp[0].nodo ;  /*designador proced.*/ ;
    break;}
case 123:
//#line 263 "grammar.y"
{ 
			yyval.nodo = nodo2(procedimiento, yyvsp[-2].nodo, yyvsp[-1].nodo) ;/*un procedimiento*/
//cambiamos a que el nodo sea el procedimiento entero para poder liberarlo con free()
                        procedimientos[idx_prc] = yyval.nodo   ;   /* revisar este metodo */	
			array_variables[(int) yyvsp[-2].nodo->num].procedimiento = idx_prc  ;
                        array_variables[(int) yyvsp[-2].nodo->num].tipo = 'P'  ;
                        printf("P: %s\n", array_variables[(int) yyvsp[-2].nodo->num].nombre);
			idx_prc++;
			;
    break;}
case 124:
//#line 274 "grammar.y"
{ 
			yyval.nodo = nodo3(funcion, yyvsp[-5].nodo, yyvsp[-3].nodo, yyvsp[-1].nodo) ;/*una funcion*/
//cambiamos a que el nodo sea el procedimiento entero para poder liberarlo con free()
                        procedimientos[idx_prc] = yyval.nodo   ;   /* revisar este metodo */	
			array_variables[(int) yyvsp[-5].nodo->num].procedimiento = idx_prc  ;
                        array_variables[(int) yyvsp[-5].nodo->num].tipo = 'F'  ;
			printf("F: %s, %d\n", array_variables[(int) yyvsp[-5].nodo->num].nombre, idx_prc);
			idx_prc++;
			;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
//#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
//#line 284 "grammar.y"



