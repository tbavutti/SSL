#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

typedef enum TOKENS{
    OPERADOR,
    IDENTIFICADOR,
    CONSTANTE,
    EI,
    FDT,
    ASIGNACION,
    TOKENINVALIDO,
    INICIAL
} TOKEN;

TOKEN GetNextToken();
void errorLexico();
bool esOperador(const int);
bool esIdentificador(const int);
bool esConstante(const int); 
bool esFDT(const int);
void imprimirToken();   


