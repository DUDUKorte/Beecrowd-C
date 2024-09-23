// Vector.c
#include "Vector.h"
#include <stdio.h>
#include <stdlib.h>

/********************************************
 * Implementação das funções do tipo Vector *
 ********************************************/

// Função para alocação do Vector
short initVector(Vector *V, unsigned size){
    V->data = (dado*)calloc(size, sizeof(dado));
    if(!V->data){
        return -1; // Código de erro de alocação
    }
    V->size = size;
    return 0;
}

// Função para desalocar um Vector
void freeVector(Vector *V){
    free(V->data);
    V->size = 0;
}

// Função que imprime um Vector
void printVector(Vector V){
    printf("[");
    for(unsigned i = 0; i < V.size; i++){
        printf("%hd%s", V.data[i], i < V.size-1 ? ", " : "]");
    }
}

// Função que lê um Vector
void scanVector(Vector *V){
    for(unsigned i = 0; i < V->size; i++){
        scanf("%hd", &V->data[i]);
    }
}
