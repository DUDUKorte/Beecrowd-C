#include <stdio.h>

int main(){

    int n, b;
    while(scanf("%d %d", &n, &b) != EOF){
        int points[n];
        
        for(int i = 0; i < n; i++){
            
            scanf("%d", &points[i]);

        }

        int soma = 0, menor = -1, maior = 0, menores = 0;
        int init_i = 0, limit_i = b-1;

        for(int i = init_i; limit_i < n; ){
            if(i > limit_i){
                init_i++;
                i = init_i;
                limit_i++;
                menores += (menor+maior);
                menor = -1; maior = 0;
                continue;
            }

            if(menor == -1 || points[i] < menor){ menor = points[i]; }
            if(points[i] > maior){ maior = points[i]; }
            soma += points[i];
            i++;
        }
        
        soma -= menores;
        printf("%d\n", soma);

    }

    return 0;
}