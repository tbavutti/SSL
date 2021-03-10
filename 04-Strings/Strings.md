# Parte II

a. Para cada operación, escribir en Strings.md la especificación matemática
de la operación, con conjuntos de salida y de llegada, y con especificación
de la operación.

## [1]Getlength:

    Epsilon* -> N    0eN;

Donde el conjunto de salida es una Clausura de Kleene y el conjunto de llegada son los naturales incluido el 0. 

    Ejemplos:

    Getlength(String) -> 6
    Getlength() -> 0
    Getlength(qwe) -> 3

## [2]IsEmpty:

    Epsilon* -> Bool 

Donde el conjunto de salida es una Clausura de Kleene y el conjunto de llegada es un booleano, que en el caso de cumplir con la condicion o condiciones impuestas (en este caso una cadena vacia), es verdado y en caso contrario, falso. 

    Ejemplos:

    IsEmpty() -> True
    IsEmpty(String) -> False

## [3]Power:

    Epsilon* x N -> Epsilon*

Donde el conjunto de salida es una Clausura de Kleene y los numeros naturales incluido el 0, y el conjunto de llegada es la Clausura de Kleene del conjunto de salida repetida la cantidad de veces impuesta al principio representada por el numero N. 

    Ejemplos:

    Power(asd, 3) -> asdasdasd
    Power(asd, 0) -> λ
    Power(qweee, 2) -> qweeeqweee

## [4]SonIguales:

    Epsilon* x Epsilon* -> Bool

Donde el conjunto de salida son dos Clausuras de Kleene y el conjunto de llegada es un booleano, que en el caso de cumplir con la condicion o condiciones impuestas (en este caso, que las cadenas sean iguales), es verdado y en caso contrario, falso. 

    Ejemplos:

    SonIguales(asd, asd) -> True
    SonIguales(qwe, asd) -> False



