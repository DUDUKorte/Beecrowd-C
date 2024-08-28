#include <bits/stdc++.h>
using namespace std;

double calc_triangulo(double A, double B, double C){
  //A base
  //C altura
  double area = (A * C) / 2.0;
  cout << "TRIANGULO: " << area << endl;
  
  return area;
}

double calc_circulo(double A, double B, double C){
  double area = 3.14159 * (C * C);
  cout << "CIRCULO: " << area << endl;
  
  return area;
}

double calc_trapezio(double A, double B, double C){
  double area = ((A + B) * C) / 2.0;
  cout << "TRAPEZIO: " << area << endl;
  
  return area;
}

double calc_quadrado(double A, double B, double C){
  double area = B * B;
  cout << "QUADRADO: " << area << endl;
  
  return area;
}

double calc_retangulo(double A, double B, double C){
  double area = A * B;
  cout << "RETANGULO: " << area << endl;
  
  return area;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double a, b, c;
    cin >> a >> b >> c;

    cout << fixed << setprecision(3);

    calc_triangulo(a, b, c);
    calc_circulo(a, b, c);
    calc_trapezio(a, b, c);
    calc_quadrado(a, b, c);
    calc_retangulo(a, b, c);

    return 0;
}