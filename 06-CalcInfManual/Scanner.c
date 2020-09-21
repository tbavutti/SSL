#include <stdio.h>
#include <stdbool.h>
#include "Scanner.h"

int main(){
    GetNextToken();
    return 0;
}

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

bool esSDP(int t){
    if(t == ' '){
        return true;
    }
    else
    {
        return false;
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
    if(t == '0' || t == '1' || t == '2' || t == '3' || t == '4' || t == '5' || t =='6' || t == '7' || t == '8' || t == '9'){
        return true;
    }
    else{
        return false;
    }
}

bool esIdentificador(int t){
    if(t == 'a' | 'b' | 'c' | 'A' | 'B' | 'C'){
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
        return;
    }
}

void errorLexico(){
    printf("Error Lexico");
}