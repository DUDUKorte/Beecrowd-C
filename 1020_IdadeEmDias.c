#include <stdio.h>

int main(void){
  int num, anos, meses, dias;
  anos = 0 ; meses = 0 ; dias = 0 ;

  scanf("%d", &num);

  if(num>=365){
    anos = num/365;
    num -= anos*365;
  }if(num>=30){
    meses = num/30;
    num -= meses*30;
  }

  dias = num;

  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
  
  return 0;
}
