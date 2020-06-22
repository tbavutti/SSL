# Parte I  

— Análisis Comparativo del tipo String en Lenguajes de Programación:

Realizar un análisis comparativo de dato String en el lenguaje C versus un lenguaje de programación a elección. El análisis debe contener, por lo menos, los siguientes ítems:

## a. ¿El tipo es parte del lenguaje en algún nivel?

En C: No existe un tipo de dato para manejar una cadena de caracteres (String), pero existen funciones de una biblioteca llamada <String.h>. No existe a nivel sintáctico o léxico, pero si a nivel semántico. 

En Haskell: Existe un tipo de dato de dato para manejar cadena de caracteres y existe a nivel sintáctico, semántico, léxico. 

## b. ¿El tipo es parte de la biblioteca?

En c: No hay un tipo definido en la biblioteca standard para String, pero existe una biblioteca <String.h>, que permite manejar cadenas de caracteres mediante funciones.

En Haskell: Pertenecen a la biblioteca standard como un tipo de dato.

## c. ¿Qué alfabeto usa?

En los dos lenguajes, están definidos en el estándar internacional ISO/IEC 10646.

## d. ¿Cómo se resuelve la alocación de memoria?

En C: En el caso de que se defina en memoria estática, al ser un arreglo de char, reserva 1 byte por cada char y 1 byte para marcar el fin del String (carácter nulo). Si se define de forma dinámica, usa el mismo razonamiento, solo que se puede definir en tiempo de ejecución y sin un valor estático como en el caso del stack. 

En Haskell: Haskell a diferencia de c, es un leguaje funcional, por lo que el manejo de la memoria lo maneja el mismo lenguaje sin que el desarrollador tenga que pensar donde y cuando hacer uso de la memoria. Para esto, existe el “Garbage Collector”, que se encarga de limpiar los datos residuos evitando que los valores se pisen. 

## e. ¿El tipo tiene mutabilidad o es inmutable?

En C: String es inmutable, porque, aunque le “asignemos” un nuevo valor, en realidad lo que hace es crear uno nuevo. La variable siempre se apunta al último valor guardado, pero en otro lado de la memoria. 

En Haskell: El tipo de dato String es inmutable, porque no se pueden pisar los valores.

## f. ¿El tipo es un first class citizen?

En C: No es un first class citizen, ya que no puede ser testeado mediante la igualdad o equidad “==”, ya que compararian los punteros y no las cadenas.

En Haskell: Es un first class citizen. Se puede usar como parámetro de una función, puede ser resultado de una función, ser sujeto de una sentencia de asignación y puede ser testeado mediante la equidad o igualdad. 

## g. ¿Cuál es la mecánica para ese tipo cuando se los pasa como argumentos?

En C: Para pasar un String como parámetro de una función se usa un puntero que apunta al primer elemento del array.

En Haskell: Se pasa como parámetro de una función al especificar que va a recibir un String.
    
    Ejemplo:
    
    Getlength :: String -> Number
        

## h. ¿Y cuando son retornados por una función?

En C: Un String puede ser retornado por una función mediante un puntero que apunta a un espacio de memoria, donde se almacena el resultado. 

En Haskell: Funciona de la misma manera que pasarlo como argumento, en vez de marcar que lo que va a recibir, especifico que me va a devolver un String. 

     Ejemplo:
     
     sumarString :: String -> String -> String
