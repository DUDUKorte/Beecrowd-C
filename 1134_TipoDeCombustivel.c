#include <stdio.h>

int main(){

    int combustivel, alcool = 0, gasolina = 0, diesel = 0;
    printf("MUITO OBRIGADO\n");

    while(1){
        scanf("%d", &combustivel);
        
        switch(combustivel){
            case 1: alcool++; continue;
            case 2: gasolina++; continue;
            case 3: diesel++; continue;
            case 4: break;
            default: continue;
        }
        break;
    }

    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);
    return 0;
}
