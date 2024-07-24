#include <stdio.h>

int total_grenais = 0, inter = 0, gremio = 0, empates = 0;

int main(){

    int n;

    while(1){

        int i, g;
        scanf("%d %d", &i, &g);

        total_grenais++;
        if(i > g){
            inter++;
        }else if(g > i){
            gremio++;
        }else{
            empates++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &n);
        
        if(n == 1){
            continue;
        }else{
            break;
        }
    }

    printf(
    "%d grenais\n"
    "Inter:%d\n"
    "Gremio:%d\n"
    "Empates:%d\n"
    "%s venceu mais\n", total_grenais, inter, gremio, empates, inter > gremio ? "Inter" : "Gremio");

    return 0;
}