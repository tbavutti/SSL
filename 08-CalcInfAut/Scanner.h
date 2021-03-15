#pragma once

#include <stdio.h>
#include <stdbool.h>

typedef enum {
TOKEN_INI, // TOKEN INICIAL
TOKEN_IDEN, // Identificador
TOKEN_CONST, 
TOKEN_MUL,
TOKEN_SUM,
TOKEN_PD, // Parentesis derecho
TOKEN_PI, // Parentesis izquierdo
TOKEN_INC, // Incorrecto
TOKEN_EVAL,
TOKEN_ASIG,
TOKEN_FDT
} Token;

// Funciones

Token tokenIndice;

int GetNextToken();
void LexicalError();
char lexema[1000];

