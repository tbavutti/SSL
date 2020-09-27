#include <stdio.h>
#include <stdbool.h>
#include "Scanner.h"
#include <ctype.h>


TOKEN GetNextToken(){
    
    int t;

    t = getchar();

    if(esOperador(t)){

        void imprimirToken();
        return OPERADOR;
    }
    else if(esIdentificador(t)){
        void imprimirToken();
        return IDENTIFICADOR;
    }
    else if(esConstante(t)){
        void imprimirToken();
        return CONSTANTE;
    }
    else if(esFDT(t)){
        return FDT;
    }
    else{
        errorLexico(t);
        return TOKENINVALIDO;
    }

}



bool esOperador(int t){
    if(t == '+' || t == '*'){
        return true;
    }
    else{
        return false;
    }
}

bool esFDT(int t){
    if(t == EOF){
        return true;
    }
    else{
        return false;
    }
}

bool esConstante(int t){
    if(isdigit(t)){
        return true;
    }
    else{
        return false;
    }
}

bool esIdentificador(int t){
    if(isalpha(t)){
        return true;
    }
    else{
        return false;
    }
}



void imprimirToken(){
    int t;
    t = getchar();
    if(esOperador(t) || esIdentificador(t) || esConstante(t)){
        ungetc(t, stdin);
        return t;
    }
}

void errorLexico(){
    printf("Error Lexico");
}