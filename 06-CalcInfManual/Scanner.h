#pragma once

#include <stdio.h>
#include <stdbool.h>

typedef enum {
TOKEN_INI, // TOKEN INICIAL
TOKEN_IDEN, // Identificador
TOKEN_CONST, 
TOKEN_MUL,
TOKEN_SUM,
TOKEN_INC, // Incorrecto
TOKEN_FDT
} Token;

// Funciones

Token tokenIndice;

Token GetNextToken();
void LexicalError(const int);


