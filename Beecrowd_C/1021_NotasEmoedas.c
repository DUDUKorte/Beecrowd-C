#include <stdio.h>

int main(void){
  double valor;
  
  int _100, _50, _20, _10, _5, _2;
  int _1, _050, _025, _010, _005, _001;
  _100 = 0;  _50 = 0;  _20 = 0;  _10 = 0;  _5 = 0;  _2 = 0;
  _1 = 0; _050 = 0; _025 = 0; _010 = 0; _005 = 0; _001 = 0;

  scanf("%lf", &valor);

  //NOTAS
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
  
  //MOEDAS
  if(valor >= 1){
    _1 = valor/1;
    valor -= _1*1;
  }if(valor >= 0.50){
    _050 = valor/0.50;
    valor -= _050*0.50;
  }if(valor >= 0.25){
    _025 = valor/0.25;
    valor -= _025*0.25;
  }if(valor >= 0.10){
    _010 = valor/0.10;
    valor -= _010*0.10;
  }if(valor >= 0.05){
    _005 = valor/0.05;
    valor -= _005*0.05;
  }if(valor >= 0.01){
    _001 = valor/0.01;
    valor -= _001*0.01;
  }

  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", _100);
  printf("%d nota(s) de R$ 50.00\n", _50);
  printf("%d nota(s) de R$ 20.00\n", _20);
  printf("%d nota(s) de R$ 10.00\n", _10);
  printf("%d nota(s) de R$ 5.00\n", _5);
  printf("%d nota(s) de R$ 2.00\n", _2);
  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", _1);
  printf("%d moeda(s) de R$ 0.50\n", _050);
  printf("%d moeda(s) de R$ 0.25\n", _025);
  printf("%d moeda(s) de R$ 0.10\n", _010);
  printf("%d moeda(s) de R$ 0.05\n", _005);
  printf("%d moeda(s) de R$ 0.01\n", _001);
  
  return 0;
}