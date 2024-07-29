#include <stdio.h>
 
int main() {
 
    int bancos, n_reservas;
    int devedor, credor, valor;
    int reservas_bancos[20] = {0};
    int contas_vermelho = 0;

    while(scanf("%d %d", &bancos, &n_reservas) && (bancos || n_reservas)){
        for(int i = 0; i < bancos; i++){
            scanf("%d", &reservas_bancos[i]);
        }
    
        for(int i = 0; i < n_reservas; i++){
            scanf("%d %d %d", &devedor, &credor, &valor);
            reservas_bancos[devedor-1] -= valor;
            reservas_bancos[credor-1] += valor;
        }

        for(int i = 0; i < bancos; i++){
            if(reservas_bancos[i] < 0){
                contas_vermelho++;
            }
        }
        if(!contas_vermelho){
            printf("S\n");
        }else{
            printf("N\n");
        }
    }
 
    return 0;
}