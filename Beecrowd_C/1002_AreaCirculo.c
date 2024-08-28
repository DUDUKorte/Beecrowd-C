#include <stdio.h>

int main(void) {

  double raio;

  scanf("%lf", &raio);

  double area;
  area = (raio * raio) * 3.14159;

  printf("A=%.4f\n", area);

  return 0;
}