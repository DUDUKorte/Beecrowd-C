#include <bits/stdc++.h>
using namespace std;

int main(){
    double renda, diferenca, imposto;
    cin >> renda;

    if(renda >= 4500){
        imposto = (1000 * (8.0/100.0)) + (1500 * (18.0/100.0));
        diferenca = renda - 4500;
        imposto = imposto + diferenca * (28.0/100.0);
    }else if (renda > 3000){
		imposto = 1000 * (8.0/100.0);
		diferenca = renda - 3000;
		imposto = imposto + diferenca * (18.0/100.0);
	}else if (renda > 2000){
		diferenca = renda - 2000;
		imposto = diferenca*(8.0/100.0);
	}

    if(imposto > 0){
        cout << fixed << setprecision(2) << "R$ " << imposto << endl;
    }else{
        cout << "Isento" << endl;
    }

    return 0;
}