/*

Test de funciones definidas en String.c:

*/

#include "String.h"
#include <assert.h>
#include <string.h>

void TestGetLength() {

    //cadena de caracteres con longitud 5
    size_t longitud = GetLength("gthq");
    assert(longitud == 5);

    //cadena definida antes de tiempo de ejecucion
    char cadenadefinida[8+1] = "vcvcvcvc";
    size_t longitud2 = GetLength(cadenadefinida);
    assert(longitud2 == 9);

    //cadena vacia
    size_t longitud3 = GetLength("");
    assert(longitud3 == 0);  

}

void TestIsEmpty(){

    //cadena vacia
    bool cadenavacia = IsEmpty("");
    assert(cadenavacia == true);

    //cadena no vacia
    bool cadenavacia2 = IsEmpty("abcdefg");
    assert(cadenavacia2 == false);

}

void TestPower(){

    //cadena elevada al cubo 
    char cadenaelevada = Power("abc", 3);
    assert(cadenaelevada == "abcabcabc");

    //cadena elevada a la cero 
    char cadenaelevada2 = Power("String", 0);
    assert(cadenaelevada2 == "");

}

void TestSonIguales(){

    //dos cadenas iguales
    char cadenasiguales = SonIguales("wuuu", "wuuu");
    assert(cadenasiguales == true);

    //dos cadenas diferentes
    char cadenasiguales2 = SonIguales("igual", "noigual");
    assert(cadenasiguales2 == false);

}


int main(void){
    
    TestGetLength();
    
    TestIsEmpty();
    
    TestPower();

    TestSonIguales();

    printf("FUNCIONA\n");
}
