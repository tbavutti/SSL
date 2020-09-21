#include <stdio.h>
#include <stdbool.h>


typedef enum TOKENS{
    OPERADOR,
    IDENTIFICADOR,
    CONSTANTE,
    EI,
    FDT,
    ASIGNACION,
    TOKENINVALIDO
} TOKEN;

TOKEN GetNextToken();
void errorLexico();
bool esOperador();
bool esIdentificador();
bool esConstante(const int t); 
bool esFDT();
bool esSDP();
void imprimirToken();   


