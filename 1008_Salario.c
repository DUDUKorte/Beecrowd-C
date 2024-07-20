#include <stdio.h>

int main(void){

  int num_funcionario, horas_trabalhadas;
  double valor_hora, salario;

  scanf("%d %d %lf", &num_funcionario, &horas_trabalhadas, &valor_hora);

  salario = horas_trabalhadas * valor_hora;

  printf("NUMBER = %d\n", num_funcionario);
  printf("SALARY = U$ %.2lf\n", salario);
  
  return 0;
}