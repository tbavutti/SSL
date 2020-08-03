# Máquinas de Estado — Palabras en Líneas
         
             1-12. Escriba un programa que imprima su entrada una palabra por línea.

Problema: Imprimir cada palabra de la entrada en su propia línea. La cantidad de líneas en la salida coincide con la cantidad de palabras en la entrada. Cada línea tiene solo una palabra.

## 10.1. Objetivos

• Aplicar máquinas de estado para el procesamiento de texto.

• Implementar máquinas de estado con diferentes métodos.

## Respuestas:

### 1. Arboles de expresion: 

1B- Arbol: nl = nw = nc = 0

![alt text](https://github.com/tbavutti/SSL/blob/master/05-wl/Digraph1B.svg)

1C- Arbol: c == ' ' || c == '\n' || c == '\t'

![alt text](https://github.com/tbavutti/SSL/blob/master/05-wl/Digraph1C.svg)

### 2. Maquina de estado:

#### Formalizar la máquina de estados como una n-upla:

Tomando en cuenta el Vol 3 capitulo 1, el arbol se puede formalizar como un 5-upla (Q, Sigma, T, Q0, F), donde:

- Q = {In, Out}, conjunto finito no vacio de estados.

- Sigma = {'A...Z', 'a...z','\t', '\n', ' ' }, alfabeto de caracteres reconocidos por el automata.

- T: Q x Sigma -> Q es la funcion de transiciones, donde pasa de un estado al otro al cumplirse una condicion.

  Por lo tanto T = {Out => '\t' || '\n' || ' ' => Out, Out => 'A...Z' || 'a...z' => In, In => 'A...Z' || 'a...z' => In, In => '\t' || '\n' || ' ' => Out}.
 
- Q0 = {Out}, donde Out es el estado inicial.

- F = {In}, seria el estado final, ya que al terminar el programa va a estar sobre una linea.

### 3. Implementaciones de Máquinas de Estado:

#### Implementacion #1: Una variable para el estado actual.

Indicar ventajas y desventajas de la versión de [KR1988] y de esta implementción:

| | Ventajas | Desventajas|
| ------------- | ------------- | ------------- |
| typedef y enum para los estados posibles y switch. | Una de las grandes ventajas, a diferencia de define que no es conocido por c, es que enum puede seguir reglas de ambito normales y los valores se generan automaticamente, al ser parte del lenguaje c. Ademas, switch tiene mejor rendimiento frente if, ya que el tiempo necesario para realizar el swtich es independiente del numero de casos que tenga.  | En lo personal, creo que hay mucha repeticion de logica, por lo que desde el punto e vista pragmatico puede ser engorroso. |                                 
| define para los estados posibles y if    | Al no ser parte de c, no se toman en cuenta variables, seria como un editor de texto, por lo que el reemplazo de informacion se hace mas facil.  | defines son mas complicados de localizar, no forma parte del lenguaje c, es una palabra clave del pre- procesador. Esto en consecuencia trae muchos problemas dificiles de detectar |


#### Implementacion #2: Sentencias goto.

Responder en readme.md: ¿Tiene alguna aplicación go to hoy en día?¿Algún lenguaje moderno lo utiliza?

El GOTO no es muy popular, pero tampoco tan odiado como antes, en 1968 Edsger Dijkstra argumento que en lenguajes de alto nivel, estas declaraciones debian ser abolidas ya que complicaban la tarea de analizar y verificar la exactitud de los programas. Pero mas tarde, en el libro de Kernighan y Ritchie abalan su uso indicando ventajas como que es infinitamente usable, como tambien Linus Torvalds dijo que ser una característica del lenguaje útil, mejorar la velocidad de programa, el tamaño y la claridad del código cuando es usado por el programador correcto. Hoy en dia, GOTO puede ser usado en C, C++ y Kernel delinux, ademas forma parte de java siendo una palabra reservada pero sin poder ser usada.

#### Implementacion #3: Funciones Recursivas.



