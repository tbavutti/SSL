
UTN FRBA – SSL – K2051 – Examen #0

Parte 1:

1-El campo de aplicación de la ingeniería de sistemas es bastante amplio, pero si hay que remarcar una, seria la de construir artefactos que solucionan un problema. Que sean entendibles para el usuario y que la solución sea viable en el tiempo.

2-Información: datos procesados que le dan un sentido y/o utilidad al ingeniero en sistemas de la información.

3-Las asignaturas del área de programación son matemática discreta, algoritmos y estructura de datos, arquitectura de computadoras, sintaxis y semántica de los lenguajes, paradigmas de información, sistemas operativos, Ingeniería en software, investigación operativa, simulación e inteligencia artificial.

4-Las asignaturas del área de sistemas de información son sistemas y organizaciones, análisis de sistemas, diseño de sistemas, gestión de datos, teoría de control, redes de información, investigación operativa y sistemas de gestión. 

5-Un paradigma orientada a objetos o imperativa de multiplefuncion.

6-Abstracción en sistemas de información, significa “aislamiento de un elemento de su contexto o del resto de los elementos que lo acompañan.” 



Parte 2:

1-Los conjuntos no tienen que ser ordenados como las secuencias, sino que los elementos del conjunto tienen que pertenecer a una misma especie y no tiene porque tener un orden creciente o relación matemática, como en una secuencia, que es una de sus principales características. Por ejemplo, el conjunto {a, e, i, o, u}, son de la misma especie (x es una letra vocal), además no tiene por qué estar ordenado, {a, e, i, o, u} = {a, i, e, o, u}. El ejemplo anterior no es valido para Secuencia, no hay un orden, ni una razón o relación matemática.

2-“Una secuencia es una serie de elementos que se suceden unos a otros y guardan relación entre sí.”, ahora si nos referimos al concepto matemático, nos referimos a un conjunto ordenado con elementos relacionados por una razón matemática.

3-Una función matemática son dos conjuntos que cumplen con unicidad (todo elemento del primer conjunto debe relacionarse por lo menos con alguno del segundo) y existencia (debe tener imagen única).

4-Un grafo es toda terna (V; A; función de incidencia) donde: V no vacío, es un conjunto de vértices y nodos y A es un conjunto de aristas o lados. La función de incidencia es un subconjunto de 1 o 2 elementos de V siendo estos, los extremos de una arista.

5-Una partición del conjunto es una división de este en subconjuntos no vacíos. Mientras cumplan estas tres condiciones: (1) cada elemento de la partición pertenece a uno de los elementos del conjunto, (2) los subconjuntos son disjuntos y (3) la unión de los subconjuntos es igual al conjunto.

6-P(X)= {∅, {a}, {b}, X}

7-Sea A un alfabeto y A* el conjunto de todas las palabras que se pueden formar con los símbolos de A, llamamos lenguaje L a todo subconjunto de A*, es decir que L este incluido en A*.

8-Un autómata finito o máquina de estado finito es una herramienta que se utiliza para reconocer un determinado lenguaje regular. Es un modelo matemático de un sistema que recibe una palabra y determina si pertenece o no al lenguaje que reconoce. Cada autómata finito reconoce un único lenguaje regular. Está compuesto por:
- Conjunto de todos los estados
- Alfabeto de entrada
- Relación de transición de un estado al otro
- Estado inicial
- Conjunto de estados finales


Parte 3:

1-Un algoritmo es una seria finita y definida de instrucciones que permiten solucionar problemas, procesar datos y realizar operaciones.

2-La programación estructurada es un paradigma de programación que solo usa subrutinas (también llamada función) y tres estructuras: selección (if y switch), secuencia e iteración (bucles for y while). Esta orientado a mejorar la claridad, calidad y tiempo de desarrollo de un programa de computadora.

3-Secuencia: hace referencia al orden de ejecución de instrucciones, tal y como lo dice el nombre, de forma secuencial (una instrucción después de la otra). Como consecuencia el resultado de la instrucción anterior puede afectar la siguiente. Selección: para que se ejecute la instrucción, se tiene que cumplir cierta condición o ciertas condiciones. Las condiciones devuelven un valor, verdadero o falso, dando así las pautas a seguir. Un ejemplo sin armar una estructura seria “si 10=10(condición) entonces imprimí “si” (declaración)”. Las tres estructuras principales de selección son IF, IF-ELSE y SWITCH. Iteración: es una estructura de repetición que permite de forma eficiente crear un bucle que se ejecute un numero especifico de veces, o indefinidamente mientras se cumpla una condición. Las dos estructuras principales son FOR Y WHILE.

4-La diferencia es el momento en el que se lo llama, los parámetros son definidos en la declaración y los argumentos al momento de la llamada del procedimiento.

5-Paso por valor: cuando el argumento original no es modificado, sino que a la función se le pasa una copia, por lo que se le pueden hacer cambios dentro de la función sin afectar al argumento original.
Paso por referencia: la copia del argumento es usada para acceder al argumento original, por lo que, cualquier cambio hecho al argumento afecta al original.

6-En el parámetro de entrada el resultado depende del valor del parámetro, en cambio, en el parámetro de salida, se utiliza el parámetro para devolver un resultado. El parámetro de entrada/salida depende tanto del valor del parámetro, como que se utiliza el parámetro para devolver un resultado.

7-Primero que todo TDA está dado por un grupo de datos que cumplen ciertas condiciones, no por un lenguaje en específico. Consiste en omitir algunas características de los objetos, usando solo lo relevante para facilitar la resolución de un problema.

8-La diferencia principal es que, en la cola, el primer elemento en entrar es el primero en salir (FIFO), pero en la pila, el último elemento en entrar es el primero en salir (LIFO). 

9-Un archivo es un conjunto de datos almacenados que puede ser usado para guardar datos, imágenes o simplemente organizar información. Además de que permite el uso de estructuras completas mezclando diferentes tipos de datos. Un ejemplo, seria un archivo con la información de los empleados de una empresa nacional, que contenga nombre, edad, grupo sanguíneo, etc.



10-	 Programavectorexlongitud

        Escribir<< “Ingrese cantidad de números”;
        Leer >> a;
        Tipo arreglo[a];

Para (int n=1, n < a; n++) {

    Escribir<< “Ingrese el numero” << n;
    
    Leer longitud;
    
    arreglo[a]= longitud;
}

Suma= 0;

Para (n=1, n<a, n++) {
     
     Suma= Suma + arreglo[a];
}

Promedio = Suma/n;

Escribir << “el promedio de los naturales es:” << Promedio;

Fin de programa.



Bibliografía:

•	https://www.4rsoluciones.com/blog/que-son-los-paradigmas-de-programacion-2/

•	 https://es.wikipedia.org/wiki/Abstracci%C3%B3n

•	https://www.smartick.es/blog/matematicas/logica/concepto-de-secuencia/

•	Guia teórica 2019 de MATEMATICA DISCRETA UTN.BA

•	https://entrenamiento-python-basico.readthedocs.io/es/latest/leccion5/programacion_estructurada.html 

•	SoloLearn 

