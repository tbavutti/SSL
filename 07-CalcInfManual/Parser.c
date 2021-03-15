#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "Scanner.h"
#include "Parser.h"
#include "TablaDeSimbolos.h" 

int resultado = 0;


void Programa();
void ListaSentencia();
void Sentencia();
int Expresion();
int Termino();
int Factor();
void Match();
void ErrorSintactico();

void Parser(void){
    Programa();
    Match(TOKEN_FDT);
}

void Programa(){
    ListaSentencia();
}


void ListaSentencia(){
  sentencia();
  while (1) {
    switch (GetNextToken()) {
      case TOKEN_IDEN:
      case TOKEN_EVAL:
        sentencia();
        break;
      default:
        return;
    }
  }
}

void sentencia(){
  char identificador[100];
  int numero;
  switch (GetNextToken())
  {
  case TOKEN_EVAL:
        Match(TOKEN_EVAL);
        resultado=Expresion();
        printf("\nResultado: %d",resultado);
        return;
  case TOKEN_IDEN:
    Match(TOKEN_IDEN);
    strcpy(identificador,lexema);
    Match(TOKEN_ASIG);
    Match(TOKEN_CONST);
    numero=atoi(lexema);
    insertarSimbolo(identificador,numero);
    return;
  default:
    return;
  }
}


int Expresion(){
 int r=termino();
  switch (GetNextToken())
    {
    case TOKEN_SUM:   
      Match(TOKEN_SUM);
      r=r+ Expresion();
      return r;
    default:  
      return r;
    }
}

int termino(){
  int r =Factor();
  Token t;
  t=GetNextToken();
    switch (t){    
      case TOKEN_MUL: 
        Match(TOKEN_MUL);
        r=r*termino();
        return r;
      default:
        return r;
    }
}

int Factor(){

  int r;
  
  switch (GetNextToken())
  {
  case TOKEN_IDEN:  
    Match(TOKEN_IDEN);
    r= buscarVariable(lexema);
    return r;
  case TOKEN_CONST:
    Match(TOKEN_CONST);
    r=atoi(lexema);
    return r;
  case TOKEN_PI:
    Match(TOKEN_PI);
    r=Expresion();
    Match(TOKEN_PD);
    return r;
  default:
    ErrorSintactico();     
    return r;
  }
    

}

void Match(){
    Token t;
    if(t != GetNextToken()){
        ErrorSintactico();
    }
    else{
        return GetNextToken();
    }      
}
void ErrorSintactico(){
    printf("[ERROR SINTACTICO]: Expresion no valida \n");
    resultado = 0;
}
