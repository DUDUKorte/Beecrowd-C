#include <stdio.h>

int calcular_nova_media(){

    double nota, media = 0;
    int i = 0;

    while(1){
		scanf("%lf", &nota);
		if(nota >= 0 && nota <= 10){
			media += nota;
			i++;
		}else{
			printf("nota invalida\n");
		}
		if(i>=2){ break; }
	}

	printf("media = %.2lf\n", media/2);
    
    return 0;
}

int main(){

    calcular_nova_media();
	while (1)
    {
        int novo_calculo;
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &novo_calculo);
        if(novo_calculo == 1){
            calcular_nova_media();
        }else if(novo_calculo == 2){
            break;
        }else{
            continue;
        }
    }
	
	return 0;
}