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




#### Implementacion #2: Sentencias goto.

#### Implementacion #3: Funciones Recursivas.



