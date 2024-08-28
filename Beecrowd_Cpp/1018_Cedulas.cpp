#include <bits/stdc++.h>
using namespace std;

int main(){

    int n_100, n_50, n_20, n_10, n_5, n_2, n_1;
    int notas, notas_aux;
    cin >> notas_aux;
    notas = notas_aux;
    n_100 = notas / 100; notas -= n_100*100;
    n_50 = notas / 50; notas -= n_50*50;
    n_20 = notas / 20; notas -= n_20*20;
    n_10 = notas / 10; notas -= n_10*10;
    n_5 = notas / 5; notas -= n_5*5;
    n_2 = notas / 2; notas -= n_2*2;
    n_1 = notas;

    string prefix = " nota(s) de R$ ";
    cout << notas_aux << endl;
    cout << n_100 << prefix << "100,00" << endl;
    cout << n_50 << prefix << "50,00" << endl;
    cout << n_20 << prefix << "20,00" << endl;
    cout << n_10 << prefix << "10,00" << endl;
    cout << n_5 << prefix << "5,00" << endl;
    cout << n_2 << prefix << "2,00" << endl;
    cout << n_1 << prefix << "1,00" << endl;


    return 0;
}