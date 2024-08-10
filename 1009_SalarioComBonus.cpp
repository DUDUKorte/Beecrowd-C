#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int  main(){

    string name;
    double salariofixo, vendas, salar_bonus;
    cin >> name;
    cin >> salariofixo >> vendas;

    salar_bonus = salariofixo + (vendas * 0.15);

    cout << "TOTAL = R$ " << fixed << setprecision(2) << salar_bonus << endl;

    return 0;
}