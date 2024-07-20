#include <stdio.h>

double calc_triangulo(double A, double B, double C){
  //A base
  //C altura
  double area = (A * C) / 2.0;
  printf("TRIANGULO: %.3lf\n", area);
  
  return 0;
}

double calc_circulo(double A, double B, double C){
  double area = 3.14159 * (C * C);
  printf("CIRCULO: %.3lf\n", area);
  
  return 0;
}

double calc_trapezio(double A, double B, double C){
  double area = ((A + B) * C) / 2;
  printf("TRAPEZIO: %.3lf\n", area);
  
  return 0;
}

double calc_quadrado(double A, double B, double C){
  double area = B * B;
  printf("QUADRADO: %.3lf\n", area);
  
  return 0;
}

double calc_retangulo(double A, double B, double C){
  double area = A * B;
  printf("RETANGULO: %.3lf\n", area);
  
  return 0;
}


int main(void){

  double A, B, C;

  scanf("%lf %lf %lf", &A, &B, &C);
  
  calc_triangulo(A, B, C);
  calc_circulo(A, B, C);
  calc_trapezio(A, B, C);
  calc_quadrado(A, B, C);
  calc_retangulo(A, B, C);

  return 0;
}