#include <bits/stdc++.h>
using namespace std;

int main(){

    map<int, string> ddd = {
        {61, "Brasilia"},
        {71, "Salvador"},
        {11, "Sao Paulo"},
        {21, "Rio de Janeiro"},
        {32, "Juiz de Fora"},
        {19, "Campinas"},
        {27, "Vitoria"},
        {31, "Belo Horizonte"}
    };

    int _ddd;
    cin >> _ddd;
    if(ddd.find(_ddd) == ddd.end()){ cout << "DDD nao cadastrado" << endl; return 0; }
    
    cout << ddd[_ddd] << endl;

    return 0;
}