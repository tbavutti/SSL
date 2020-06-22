/* 

String.h
Tomas Bavutti 
1732900

Parte  II

iii. Escribir en String.h comentarios con las precondiciones y
poscondiciones de cada función, arriba de cada prototipo.

*/

#include <stdio.h>
#include <stdbool.h> 

/*

Precondiciones: GetLength necesita una cadena como parametro, y debe terminar con el caracter nulo.

Postcondiciones: debe devolver un natural representando la cantidad de caracteres que tiene esa cadena.

*/
size_t GetLength(const char * cadena);
/*

Precondiciones: IsEmpty necesita una cadena como parametro, y debe terminar con el caracter nulo.

Postcondiciones: debe devolver un booleano, siendo verdadero en el caso que sea una cadena vacia, y en caso contrario falso, si no la es.

*/

bool IsEmpty(const char * cadena);
/*

Precondiciones: Power necesita una cadena como parametro, y debe terminar con el caracter nulo.

Postcondiciones: debe devolver la misma cadena pero repetida tantas veces como se aclare en el momento de ejecucion del programa.

*/
char Power(const char * cadena);
/*

Precondiciones: SonIguales necesita dos cadenas como parametro, y deben terminar con el caracter nulo.

Postcondiciones: debe devolver un booleano, siendo verdadero en el caso, que las cadenas sean iguales, y en caso contrario falso, si no la es.

*/
bool SonIguales(const char * cad1, const char * cad2);