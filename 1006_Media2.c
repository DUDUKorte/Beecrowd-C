#include <stdio.h>

int main(void){

  double num1, num2, num3, media;
  double pesoA, pesoB, pesoC;
  pesoA = 2 ; pesoB = 3 ; pesoC = 5 ;

  scanf("%lf %lf %lf", &num1, &num2, &num3);

  num1 = num1 * pesoA ; num2 = num2 * pesoB ; num3 = num3 * pesoC ;
  media = (num1 + num2 + num3) / (pesoA + pesoB + pesoC);

  printf("MEDIA = %.1lf\n", media);
  
  return 0;
}