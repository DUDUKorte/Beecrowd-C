#include <stdio.h>

int main(){

    while(1){
        int n;
        scanf("%d", &n);
        if(n==0){ break; }

        for(int i = 0; i < n; i++){
            char saida = '*';
            int validacao = -1;
            for(int j = 0; j < 5; j++){
                int num;
                scanf("%d", &num);
                if(num <= 127){
                    switch(j){
                        case 0:
                            saida = 'A';
                            break;
                        case 1:
                            saida = 'B';
                            break;
                        case 2:
                            saida = 'C';
                            break;
                        case 3:
                            saida = 'D';
                            break;
                        case 4:
                            saida = 'E';
                            break;
                    }
                    validacao++;
                }
            }
            if(!validacao){
                printf("%c\n", saida);
            }else{
                printf("*\n");
            }
        }

    }

    return 0;
}