#ifndef LEXER_H_
#define LEXER_H_

enum {
      ABSTRACT = 256,
      ALIGNOF,
      AS,
      BE,
      BOX,
      BREAK,
      CONST,
      CONTINUE,
      CRATE,
      DO,
      ELSE,
      ENUM,
      EXTERN,
      FINAL,
      FN,
      FOR,
      IF,
      IMPL,
      IN,
      LET,
      LOOP,
      MACRO,
      MACRO_RULES,
      MATCH,
      MOD,
      MOVE,
      MUT,
      OFFSETOF,
      OVERRIDE,
      PRIV,
      PUB,
      PURE,
      REF,
      RETURN,
      SIZEOF,
      STATIC,
      SELF,
      STRUCT,
      SUPER,
      TRAIT,
      TYPE,
      TYPEOF,
      UNSAFE,
      UNSIZED,
      USE,
      VIRTUAL,
      WHERE,
      WHILE,
      YIELD,
      UNKNOWN,
      BOOL,
      U8,
      U16,
      U32,
      U64,
      I8,
      I16,
      I32,
      I64,
      F32,
      F64,
      USIZE,
      ISIZE,
      CHAR,
      STR,
      DBLCOL,
      SNGLARROW,
      DBLARROW,
      POUND,
      BASH,
      DOLLAR,
      LBRACK,
      RBRACK,
      LPAREN,
      RPAREN,
      LBRACE,
      RBRACE,
      COMMA,
      SEMI,
      DASH,
      ASTER,
      EXCLAM,
      PLUS,
      SLASH,
      PERCENT,
      AMP,
      BAR,
      CARAT,
      DBLLEFT,
      DBLRIGHT,
      DBLBAR,
      DBLAMP,
      DBLEQ,
      NOTEQ,
      LTHAN,
      GTHAN,
      LEQTHAN,
      GEQTHAN,
      PLUSEQ,
      MINEQ,
      ASTEQ,
      DASHEQ,
      PERCEQ,
      AMPEQ,
      BAREQ,
      CARATEQ,
      DBLLEFTEQ,
      DBLRIGHTEQ,
      ELIPSE,
      DBLPER,
      ID,
      LITDEC,
      LITBOOL,
      LITSTR,
      EQUAL,
      LITCHAR,
      PERIOD
};

char* yytext;
int yylineno;
int yylex(void);

#endif