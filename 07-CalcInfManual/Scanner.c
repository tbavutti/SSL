#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "Scanner.h"


void isCONSTANT();
void isIDENTIFIER();
bool isSUM(const int c);
bool isMULTIPLICATION(const int c);
bool isDIGIT(const int c);
bool isID(const int  c);
bool isFDT(const int c);
bool isPI(const int c);
bool isPD(const int c);
bool isASIG(const int c);
bool isEVAL(const int c);



Token GetNextToken(){
    
    Token token = TOKEN_INI;

    int c; 
    c = getc(stdin);
   	
    if(isFDT(c)){
        token = TOKEN_FDT;
        printf("FDT");
    }
    else if(isSUM(c)){
        token = TOKEN_SUM;
        printf("OPERADOR SUMA");
    }
    else if(isMULTIPLICATION(c)){
        token = TOKEN_MUL;
        printf("OPERADOR MULTIPLICACION");
    }
    else if(isDIGIT(c)){
        isCONSTANT();
        token = TOKEN_CONST;
        printf("CONSTANTE");
    }
    else if(isID(c)){
        isIDENTIFIER();
        token = TOKEN_IDEN;
        printf("IDENTIFICADOR");
    }
    else if(isPI(c)){
    	token = TOKEN_PI;
        printf("PARENTESIS IZQUIERDO");
	}
    else if(isPD(c)){
        token = TOKEN_PD;
        printf("PARENTESIS DERECHO");
    }
    else if(isASIG(c)){
        token = TOKEN_ASIG;
        printf("ASIGNACION");
    }
    else if(isEVAL(c)){
        token = TOKEN_EVAL;
        printf("CALCULO");
    }
    else{
        LexicalError(c);
        token = TOKEN_INC;
    }
    
    tokenIndice = token;
    return token;

};


bool isSUM(const int c){
    return c == '+';
}

bool isMULTIPLICATION(const int c){
    return c == '*';
}

bool isDIGIT(const int c){
    return isdigit(c);
}

bool isID(const int c){
    return isalpha(c);
}

bool isFDT(const int c){

    return c == EOF;

}
bool isPI(const int c){

    return c == '(';
}
bool isPD(const int c){

    return c == ')';

}

bool isASIG(const int c){

    return c == '=';

}

bool isEVAL(const int c){

    return c == '$';

}
void isCONSTANT(){

    int c;
    c = getc(stdin);
    if(isFDT(c)){
       ungetc(c, stdin);
       return;
    }
    else if(isDIGIT(c)){
        isCONSTANT();
    }
    else
    {
        ungetc(c, stdin);
        return;
    }
    
}

void isIDENTIFIER(){
    int  c;
    c = getc(stdin);
    if(isFDT(c)){
        ungetc(c, stdin);
        return;
    }
    else if(isID(c)){
        isIDENTIFIER();
    }
    else
    {
        ungetc(c, stdin);
        return;
    }
    
}

void LexicalError(const int c){
    printf("ERROR LEXICO");
}
