
# Calculadora Infija: Iteración #2

## Nivel Lexico:

Para la implementacion del nivel lexico, se desarrollo un Scanner, que mediante la funcion getc() que toma los caracteres de stdin, y valida los tokens definidos mediante GetNextToken.

Los espacios en blanco se ignoran, asi como la tabulacion.

### Categorias Lexicas:


    -Identificador

    -Constante

    -Suma

    -Multiplicacion

    -Evaluacion

    -Asignacion
    
    -Parentesis Izquierdo

    -Parentesis Derecho


### Gramática léxica:

  
    <token> -> uno de <identificador> <constante> <suma> <multiplicacion> <evaluacion> <asignacion> <parentesis_izq> <parentesis_der>

    <identificador> -> <letra> { <letra> }

    <constante> -> <dígito> { <dígito> }

    <suma> -> + 

    <multiplicacion> -> *

    <evaluacion> -> $

    <asignacion> -> =

    <letra> -> una de a-z A-Z

    <dígito> -> uno de 0-9

    <parentesis_izq> -> (

    <parentesis_der> -> )


## Nivel Sintactico:


### Gramatica Sintactica:


    <parser> -> <programa> 

    <programa> -> <listaSentencias> FDT

    <listaSentencia> -> <sentencia> { <sentencia>}

    <sentencia> -> <sentencia> <identificador> <asigancion> <constante> | <evaluacion> <expresion>

    <expresion> -> <termino> | <expresion> + <termino>

    <termino> -> <factor> | <termino> + <factor> 

    <factor> -> <constante> | <identificador> | (expresion)


#### Aclaraciones:


Para el parser, se va a utlilizar el Analisis Sintactico Descendente Recursivo, que es la utilizacion de rutinas que pueden ser recursivas(se pueden llamar a si mismas). 

La idea básica del ASDR es que cada noterminal de la Gramática Sintáctica tenga asociado una rutina de Análisis Sintáctico que puede reconocer cualquier secuencia de tokens generada por ese noterminal. Esta rutina se llama PAS(Procedimiento 
de Análisis Sintáctico). En ANSI C, los PAS se construyen como funciones void.

Ademas la gramatica esta hecha de esta forma para respetar las reglas prioridad y asociatividad. Ya que, cuanto mas cerca del axioma, menor es la prioridad de un operador.





