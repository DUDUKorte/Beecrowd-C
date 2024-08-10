#include <bits/stdc++.h>
using namespace std;

int main(){

    double a, b, c;
    cin >> a >> b >> c;
    vector<double> lados = {a, b, c};
    sort(lados.begin(), lados.end());
    a = lados[2]; b = lados[1]; c = lados[0];

    if(a >= b+c) { cout << "NAO FORMA TRIANGULO" << endl; return 0;}
    if(pow(a, 2) == pow(b, 2) + pow(c, 2)) { cout << "TRIANGULO RETANGULO" << endl; }
    if(pow(a, 2) > pow(b, 2) + pow(c, 2)) { cout << "TRIANGULO OBTUSANGULO" << endl; }
    if(pow(a, 2) < pow(b, 2) + pow(c, 2)) { cout << "TRIANGULO ACUTANGULO" << endl; }
    if(a == b && b == c) { cout << "TRIANGULO EQUILATERO" << endl; }
    if((a == b && b != c) || (c == b && b != a) || (c == a && a != b)) { cout << "TRIANGULO ISOSCELES" << endl; }

    return 0;
}