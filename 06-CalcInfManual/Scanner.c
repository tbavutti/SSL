#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "Scanner.h"

bool isSUM(const int c);
bool isMULTIPLICATION(const int c);
void isCONSTANT();
void isIDENTIFIER();
bool isDIGIT(const int c);
bool isID(const int  c);
bool isFDT(const int c);



Token GetNextToken(){
    
    Token token = TOKEN_INI;

    int c; 
    c = getc(stdin);
   	
    if(isFDT(c)){
        token = TOKEN_FDT;
    }
    else if(isSUM(c)){
        token = TOKEN_SUM;
    }
    else if(isMULTIPLICATION(c)){
        token = TOKEN_MUL;
    }
    else if(isDIGIT(c)){
        isCONSTANT();
        token = TOKEN_CONST;
    }
    else if(isID(c)){
        isIDENTIFIER();
        token = TOKEN_IDEN;
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




