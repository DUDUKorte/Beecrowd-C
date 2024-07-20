#include <stdio.h>
#include <math.h>

int main(void){

  double x1, y1, x2, y2, resultado, resultado_raiz;

  scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
  resultado = sqrt(powl(x2 - x1, 2) + powl(y2 - y1, 2));
  
  printf("%.4lf\n", resultado);
  
  return 0;
}