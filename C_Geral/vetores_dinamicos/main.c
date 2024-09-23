// Main.c
#include "Vector.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    // Declaração de variáveis
    Vector V1;
    unsigned n;

    // inicialização do Vector
    printf("Exemplo de Vetor dinâmico\n");
    printf("No. de Elementos do Vector? >> ");
    scanf("%u", &n);
    if(initVector(&V1, n)){
        printf("ERRO: Memória insuficiente\n");
        exit(1);
    }
    // Imprime o vetor inicial
    printf("Vector Inicial:\n");
    printVector(V1);
    printf("\n");
    printf("Valores do Vector? >> \n");
    scanVector(&V1);
    printf("Vector Pós-Scan:\n");
    printVector(V1);
    printf("\n");
    printf("Limpando Vector...\n");
    freeVector(&V1);
    printf("Vector pós-free:\n");
    printVector(V1);
    printf("\n");

    return 0;
}