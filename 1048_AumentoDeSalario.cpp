#include <bits/stdc++.h>
using namespace std;

int main(){

    double salario;
    cin >> salario;
    double percent;
    if(salario >= 0 && salario <= 400.0){ percent = 15; }
    else if(salario > 400 && salario <= 800){ percent = 12; }
    else if(salario > 800 && salario <= 1200){ percent = 10; }
    else if(salario > 1200 && salario <= 2000){ percent = 7; }
    else if(salario > 2000){ percent = 4; }
    percent /= 100.0;
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << salario + salario*percent << endl << "Reajuste ganho: " << salario*percent << endl << "Em percentual: " << (int)(percent*100) << " %" << endl;

    return 0;
}