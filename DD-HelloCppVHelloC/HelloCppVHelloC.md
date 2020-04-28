##TP-2

##Hello.c

    #include <stdio.h>
 
    int main(void) {

    printf("Hello, World!\n");

    }


##Hello.cpp

    #include <iostream>
  
    int main() {

    std::cout << "Hello, World!\n";

    }


| Nivel      |                    Diferencias                         |                    Similitudes                         | 
|------------|--------------------------------------------------------|--------------------------------------------------------|
| Lexico     | "::" es usado en Hello.cpp, que no existe en C,        | Los tokens "#", "include", "<>", "int", "main", "{}"   |
|               y que en hello.c, usa "()" para imprimir y hello.cpp    y ";" son usados en ambos programas.                   |   
|               usa "<<".                                                                                                      |
| Sintactico | Se usa una funcion en hello.c y se usa una             | Tiene una estructura similar, misma cantidad de lineas |
|              una expresion en hello.cpp                               misma cantidad de variables, empiezan con "#" y termi- | 
|                                                                       -nan con "}".                                          |
| Semantico  | No es necesario usar "void" en hello.cpp               | Son bastante similares                                 |
