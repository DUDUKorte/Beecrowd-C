#include <stdio.h>
#include <stdbool.h>

bool verifica_aprovacao(double media, bool em_exame){
		if(em_exame){
				if(media >=5){
						printf("Aluno aprovado.\n");
						printf("Media final: %.1lf\n", media);
						return true;
				}else{
						printf("Aluno reprovado.\n");
						printf("Media final: %.1lf\n", media);
						return false;
				}
		}

		if(media >= 7.0){
				printf("Aluno aprovado.\n");
		}else if(media < 5.0){
				printf("Aluno reprovado.\n");
		}
}

int main(void){

		double nota1, nota2, nota3, nota4 = 0;
		int peso1 = 2, peso2 = 3, peso3 = 4, peso4 = 1;

		scanf("%lf %lf %lf %lf",&nota1, &nota2, &nota3, &nota4);
		double media = ((nota1*peso1) + (nota2*peso2) + (nota3*peso3) + (nota4*peso4)) / (peso1+peso2+peso3+peso4);

		printf("Media: %.1lf\n", media);

		if(media >= 5.0 && media <= 6.9){
				//exame
				double exame;
				printf("Aluno em exame.\n");
				scanf("%lf", &exame);
				printf("Nota do exame: %.1lf\n", exame);
				media = (media + exame) / 2;
				verifica_aprovacao(media, true);
		}else{
				verifica_aprovacao(media, false);
		}

		return 0;
}