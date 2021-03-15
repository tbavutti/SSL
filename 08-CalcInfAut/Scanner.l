%{

#include <stdlib.h>
#include "Scanner.h"

%}

%option noyywrap

%%

[0-9]+  { yylval.dval = atoi(yytext); 
            return TOKEN_CONST;} 
[a-zA-Z]+ { yylval->strval=strdup(yytext);
            return TOKEN_IDEN;}
\=    {return TOKEN_ASIG;}
\$    {return TOKEN_EVAL;}
\+     {return TOKEN_SUM;}
\(    {return TOKEN_PI;}
\)    {return TOKEN_PD;}
<<EOF>> return TOKEN_FDT;

.   {LexicalError(); return TOKEN_INC;}



%%

int GetNextToken()
{
  return yylex();
}

void LexicalError()
{
  printf("Error Lexico\n");
}