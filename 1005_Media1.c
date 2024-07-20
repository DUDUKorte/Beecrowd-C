#include <stdio.h>
int main(void){

  double num1, num2, media;
  double pesoA = 3.5;
  double pesoB = 7.5;

  scanf("%lf %lf", &num1, &num2);
  
  num1 = num1 * pesoA;
  num2 = num2 * pesoB;
  media = (num1 + num2) / (pesoA + pesoB);

  printf("MEDIA = %.5lf\n", media);
  
  return 0;
}