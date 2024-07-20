#include <stdio.h>

int main(void){

  char nome[30];
  double salario_fixo, vendas, vendas_15p, salario_final;

  //Pega mais de uma palavra
  //fgets(nome, sizeof(nome), stdin);

  scanf("%s %lf %lf", nome, &salario_fixo, &vendas);
  vendas_15p = vendas * 0.15;
  salario_final = vendas_15p + salario_fixo;
  
  printf("TOTAL = R$ %.2lf\n", salario_final);
  
  return 0;
}