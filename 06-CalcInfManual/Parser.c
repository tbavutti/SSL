#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>


#include "Parser.h" 

Token GetNextToken();

int main(){
	
	Parser();
	
}
void Programa();
void Expresion();
void Factor();
void ErrorSintactico();

void Parser(void){
    Programa();
    printf("Expresion sintacticamente correcta \n");
}

void Programa(){
    Expresion();
}

void Expresion(){
    Token t;
    Factor();

    while(t != TOKEN_FDT){
        switch(GetNextToken()){
            case TOKEN_MUL:
            case TOKEN_SUM:
                Factor();
                break;
            default:
                break;

        }
    }

}


void Factor(){

    Token t = GetNextToken();
    if(t == TOKEN_IDEN || t == TOKEN_CONST){
        return;
    }
    else
    {
        ErrorSintactico();
    }
    

}

void ErrorSintactico(){
    printf("[ERROR SINTACTICO]: Expresion no valida \n");
}
