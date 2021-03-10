# Fases de la Traducción y Errores

1. Escribir hello2.c, que es una variante de hello.c:
   
   
   #include <stdio.h>
   
   int/*medio*/main(void){
   
   int i=42;
   
   prontf("La respuesta es %d\n");
   
2. Preprocesar hello2.c, no compilar, y generar hello2.i. Analizar su
contenido.


3. Escribir hello3.c, una nueva variante:

   int printf(const char *s, ...);
   
   int main(void){
   
   int i=42;
   
   prontf("La respuesta es %d\n");
    
    
4. Investigar la semántica de la primera línea.


5. Preprocesar hello3.c, no compilar, y generar hello3.i. Buscar diferencias
entre hello3.c y hello3.i.


6. Compilar el resultado y generar hello3.s, no ensamblar.


7. Corregir en el nuevo archivo hello4.c y empezar de nuevo, generar
hello4.s, no ensamblar.


8. Investigar hello4.s.


9. Ensamblar hello4.s en hello4.o, no vincular.


10.Vincular hello4.o con la biblioteca estándar y generar el ejecutable.


11.Corregir en hello5.c y generar el ejecutable.


12.Ejecutar y analizar el resultado.


13.Corregir en hello6.c y empezar de nuevo.


14.Escribir hello7.c, una nueva variante:

        int main(void){ 
        
        int i=42;
        
        printf("La respuesta es %d\n", i);
        
        }
        
        
## Respuestas: 

2- Analisis:

- Sigue siendo legible.
- Elimina la linea donde estaba "#include <stdio.h>" y "/medio/" pero dije linea, porque por lo que entendi es que en realidad se aplica los archivos de la biblioteca stdio.h al programa.

4- Es el prototipo de la funcion printf. Pero nosotros estamos invocando prontf. La funcion imprime lo que esta en la posicion de memoria const char *s, y %d es para poder imprimir un entero en base 10 con signo (int).

5- La unica diferencia son los cuatro encabezados en hello3.i.

   -# 1 "hello3.c"
   
   -# 1 "<built-in>"
   
   -# 1 "<command-line>"
   
   -# 1 "hello3.c"
   
6- Intento compilar sin ensamblar pero me tira el siguiente error:


          hello3.c: In function 'main':
          
          hello3.c:4:2: warning: implicit declaration of function 'prontf'; did you mean 'printf'? [-Wimplicit-function-declaration]
          
          4 |  prontf("La respuesta es %d\n");
          
            |  ^~~~~~
            
            |  printf
            
          hello3.c:4:2: error: expected declaration or statement at end of input
 
 
7- Corregido, pongo } al final del main, ya que no hay.


8- Seria hello4.c en assembler.


9- Ensamblo sin vincular, pero me da el siguiente error: c:/mingw/bin/../lib/gcc/mingw32/9.2.0/../../../../mingw32/bin/ld.exe: C:\Users\DELL\AppData\Local\Temp\ccInv5Ne.o:hello4.c:(.text+0x1e): undefined reference to `prontf'
collect2.exe: error: ld returned 1 exit status


10- No se puede generar el ejecutable, ya que no se genero el archivo objeto para printf.


12- Ejecute y el resultado fue 4200688, falto especificar el segundo argumento en la funcion printf para el primer argumento. En este caso seria i.


13- Hago el ejecutable, lo ejecuto y me da: "La respuesta es 42".


15- Aunque no haya una biblioteca de referencia, ni el prototipo de la funcion printf, pero al ejecutarlo, funciona por la biblioteca estandar gracias al linker.
