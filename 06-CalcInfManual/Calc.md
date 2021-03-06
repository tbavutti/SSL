# Calculadora Infija: Iteración #1

## 14.1. Objetivos


    • Experimentar el diseño de la especificación de lenguajes a nivel léxico y
    sintáctico.

    • Experimentar la implementación manual del nivel léxico y sintáctico de
    lenguajes.


## 14.2. Temas


    • Especificación del nivel Léxico y Sintáctico.

    • Implementación del nivel Léxico y Sintáctico.

    • Implementación de Scanner

    • Implementación de Parser.


## 14.3. Problema


Análisis de expresiones aritméticas infijas simples que incluya:


    • Números naturales con representación literal en base 10.

    • Identificadores de variables.

    • Adición.

    • Multiplicación.



## Ejemplos de expresiones correctas:


    A+2*3

    2*A+3

    A

    2


## Ejemplos de expresiones incorrectas:


    +

    42+

    +A
    

## 14.4. Solución


    Especificar e implementar los niveles léxicos y sintácticos del lenguaje.


## 14.5. Restricciones


    • El scanner y el parser deben estar lógicamente separados.

    • El parser se comunica con el scanner con la operación GetNextToken, el
    scanner toma los caracteres de stdin con getchar.


## 14.6. Tareas


    1. Diseñar el nivel léxico del lenguaje.
    
    2. Diseñar el nivel sintáctico del lenguaje.
   
    3. Implementar el scanner.
     
    4. Implementar el parser.
   
    5. Probar.


## 14.7. Productos

    DD-CalcInfManual

        Productos

        |-- Calc.md

        |-- Makefile

        |-- Scanner.h // Opcional

        |-- Parser.h // Opcional

        |-- Parser.c // Opcional

        |-- Scanner.c // Opcional

        |-- Calc.c


## Solucion:

### Nivel Lexico:

Categorias Lexicas:


    -Identificador

    -Constante

    -Operador


Gramática léxica

    <token> -> uno de <identificador> <constante> <operador>

    <identificador> -> <letra> { <letra> }

    <constante> -> <dígito> { <dígito> }

    <operador> -> uno de + *

    <letra> -> una de A-Z a-z

    <dígito> -> uno de 0-9


### Nivel Sintactico:


Categorias Sintacticas

    Programa

    Expresion
    
    Factor


Gramatica sintactica

    <programa> -> <expresion> { <expresion> }

    <expresion> -> <factor> { <operador> <factor> }

    <factor> -> uno de <identificador> <entero>