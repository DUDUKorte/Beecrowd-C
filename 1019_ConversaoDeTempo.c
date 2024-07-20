#include <stdio.h>

int main(void){
  int num, horas, minutos, segundos;
  horas = 0 ; minutos = 0 ; segundos = 0 ;

  scanf("%d", &num);

  if(num >= 60){
    minutos = num/60;
    num -= minutos*60;
  }if(minutos >= 60){
    horas = minutos/60;
    minutos -= horas*60;
  }

  segundos = num;

  printf("%d:%d:%d\n", horas, minutos, segundos);
  
  return 0;
}