#include <stdio.h>

int main(void){
  int x;
  double y, consumo;

  scanf("%d %lf", &x, &y);

  consumo = x/y;

  printf("%.3lf km/l\n", consumo);
  
  return 0;
}