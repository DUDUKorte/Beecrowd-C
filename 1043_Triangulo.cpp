#include <bits/stdc++.h>
using namespace std;

int main(){

    double a, b, c;
    cin >> a >> b >> c;
    vector<double> lados = {a, b, c};
    sort(lados.begin(), lados.end());
    cout << fixed << setprecision(1);

    if(lados[0] + lados[1] > lados[2]){ /*accumulate(lados.begin(), lados.end(), 0)*/
        cout << "Perimetro = " << a+b+c << endl;
    }else{
        cout << "Area = " << ((a+b) * c) / 2.0 << endl;
    }


    return 0;
}