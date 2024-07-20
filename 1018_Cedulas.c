#include <stdio.h>

int main(void){

  int valor;
  int _100, _50, _20, _10, _5, _2, _1;
  _100 = 0;  _50 = 0;  _20 = 0;  _10 = 0;  _5 = 0;  _2 = 0;  _1 = 0;

  scanf("%d", &valor);
  printf("%d\n", valor);
  
  if(valor>=100){
    _100 = valor/100;
    valor -= _100*100;
  }if(valor>=50){
    _50 = valor/50;
    valor -= _50*50;
  }if(valor>=20){
    _20 = valor/20;
    valor -= _20*20;
  }if(valor>=10){
    _10 = valor/10;
    valor -= _10*10;
  }if(valor>=5){
    _5 = valor/5;
    valor -= _5*5;
  }if(valor>=2){
    _2 = valor/2;
    valor -= _2*2;
  }
  _1 = valor;
  
  printf("%d nota(s) de R$ 100,00\n", _100);
  printf("%d nota(s) de R$ 50,00\n", _50);
  printf("%d nota(s) de R$ 20,00\n", _20);
  printf("%d nota(s) de R$ 10,00\n", _10);
  printf("%d nota(s) de R$ 5,00\n", _5);
  printf("%d nota(s) de R$ 2,00\n", _2);
  printf("%d nota(s) de R$ 1,00\n", _1);
  
  return 0;
}