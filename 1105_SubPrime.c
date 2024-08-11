#include <stdio.h>
 
int main() {
 
    int x, y;
 
    while(scanf("%d %d", &x, &y) && (x || y)){
        int reservas_bancos[20] = {0};
        for(int i = 0; i < x; i++){
            scanf("%d", &reservas_bancos[i]);
        }
        for(int i = 0; i < y; i++){
            int devedor, credor, valor;
            scanf("%d %d %d", &devedor, &credor, &valor);
            reservas_bancos[devedor-1] -= valor;
            reservas_bancos[credor-1] += valor;
        }
        int devedor = 0;

        for(int i = 0; i < 20; i++){
            if(reservas_bancos[i] < 0){
                devedor++;
            }
        }
        if(!devedor){
            printf("S\n");
        }else{
            printf("N\n");
        }
    }
 
    return 0;
}