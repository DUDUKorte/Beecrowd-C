#include <bits/stdc++.h>
using namespace std;

int main(){

    int root_dias;
    cin >> root_dias;
    int dias, meses, anos;

    anos = root_dias / 365 ; root_dias %= 365;
    meses = root_dias / 30 ; root_dias %= 30;
    dias = root_dias;

    cout << anos << " ano(s)" << endl << meses << " mes(es)" << endl << dias << " dia(s)" << endl;

    return 0;
}