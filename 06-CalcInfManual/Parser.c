#include "Parser.h"

static void Imprimir();

void Parser(){

    Imprimir();

    while(true){

        switch (GetNextToken())
        {
            case OPERADOR:
            Imprimir();
                break;
            case FDT:
                return;
            default:
                break;
        }
    }   
}

static void Imprimir(){
    TOKEN t = GetNextToken();
    if(t == IDENTIFICADOR || t == CONSTANTE)
            return;
        else
          printf("ERROR SINTACTICO");    
}
