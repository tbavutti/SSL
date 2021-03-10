#include <"String.h">

size_t GetLength(const char * cadena){

    int valor = 0;
    while (cadena[valor] != ´\0´) valor++; 
    return valor
    
}

bool IsEmpty(const char * cadena){

    return GetLength(cadena) == 0;
}

char Power(const char * cadena){

    size_t n;
    printf("Inserte cadena", cadena);
    printf("veces a repetir", n)
    for(size_t i = 1; i <= n; i++);
    return cadena;

}

bool SonIguales(const char * cad1, const char * cad2){

    int longitud
    bool x = 1;
    bool y = 0;
    igualdad = 0;
    for (size_t i = 0; i < longitud; i++){
        if (cad1[i] != cad2[i])
        igauldad = -1;
        }
    if(igualdad == 0){
        printf("%d\n", x);
        else;
        printf("%d\n", y);
    }

    return igualdad;
}