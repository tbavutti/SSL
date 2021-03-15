#include <stdio.h>
#include <string.h>


struct Simbolo{
    char* variable;
    int valor;
    struct Simbolo *sgte;

};

struct Simbolo *listaDeSimbolos = NULL;

void insertarSimbolo(char *variableAInsertar, int valorAInsertar){
  struct Simbolo *new_node = (struct Simbolo*) malloc(sizeof(struct Simbolo)); // asigno memoria para que no rompa
  struct Simbolo *last = listaDeSimbolos; // indice para no perder la referencia del primero


  new_node -> variable = strdup(variableAInsertar);
  new_node -> valor = strdup(valorAInsertar);
  new_node -> sgte = NULL; // para saber donde terminar, en todo caso se va asgnando


  if (listaDeSimbolos == NULL){
    listaDeSimbolos = new_node;
    return;
  }

  while (last -> sgte != NULL){ // si hay mas de un elemento para no repetirse, ej nuevo valor de a es 7
    if(strcmp(last->variable, variableAInsertar) == 0){ // que no este repetido
      listaDeSimbolos -> valor = valorAInsertar; // actualiza el valor
      return;
    }else
    last = last->sgte; // sigue buscando
  }

  if(strcmp(last->variable, variableAInsertar) == 0){ // caso de q no sea el unico pero sea el utlimo, que apunta a NULL, y el de arriba no lo toma en cuenta
    listaDeSimbolos -> valor = valorAInsertar;
    return;
 }else
    last->sgte = new_node;

}

int buscarVariable(char *variable){
  struct Simbolo *last = listaDeSimbolos;
  while (last != NULL){
    if (strcmp(last->variable, variable) == 0) return last -> valor;
    last = last->sgte;
    }
  printf("\n----------Variable No Declarada----------n");
  return 0;
}