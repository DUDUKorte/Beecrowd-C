#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c, d;
    string exit = "nao " ;
    cin >> a >> b >> c >> d;

    if(b > c && d > a && c+d > a+b && c > 0 && d > 0 && a%2 == 0){ exit = ""; }
    cout << "Valores " << exit << "aceitos" << endl;

    return 0;
}