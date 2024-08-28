#include <bits/stdc++.h>
using namespace std;

int main(){

    double a, b, c, r1, r2;
    cin >> a >> b >> c;

    r1 = ((-b) + sqrt(pow(b, 2)-(4*a*c)))/(2*a);
    r2 = ((-b) - sqrt(pow(b, 2)-(4*a*c)))/(2*a);

    if(isinf(r1) || isinf(r2) || isnan(r1) || isnan(r2)){
        cout << "Impossivel calcular" << endl;
    }else{
        cout << fixed << setprecision(5) << "R1 = " << r1 << endl << "R2 = " << r2 << endl;
    }

    return 0;
}