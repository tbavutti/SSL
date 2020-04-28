#TP-2

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


| Nivel      |                    diferencias                         |                    Similitudes                        | 
|------------|--------------------------------------------------------|-------------------------------------------------------|
| Lexico     | "::" es usado en Hello.cpp, que no existe en C,  y que en hello.c, usa "()" para imprimir y hello.cpp usa "<<". | Los tokens "#", "include", "<>", "int", "main", "{}" y ";" son usados en ambos programas.|
| Sintactico | Se usa una funcion en hello.c y se usa una expresion en hello.cpp.| Tiene una estructura similar, misma cantidad de lineas misma cantidad de variables, empiezan con # y terminan con "}". |
| Semantico  | No es necesario usar "void" en hello.cpp               | Son bastante similares                                |
