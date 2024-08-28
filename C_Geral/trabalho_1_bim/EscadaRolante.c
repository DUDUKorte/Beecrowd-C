/*
    Escada Rolante - Problema 6
    Eduardo Nogueira Korte
*/

#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int tempo_anterior = -1, segundos = 10;
    for(int i = 0; i < n; i++){
        int tempo_atual;
        scanf("%d", &tempo_atual);
        tempo_anterior == -1? tempo_anterior = tempo_atual : 0; // Adicionar a primeira passagem
        segundos += tempo_atual - tempo_anterior;
        tempo_anterior = tempo_atual;
    }

    printf("%d\n", segundos);

    return 0;
}