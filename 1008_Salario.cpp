#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int trabalhadores, horas;
    double sal_hora;

    cin >> trabalhadores >> horas >> sal_hora;
    cout << "NUMBER = " << trabalhadores << endl << "SALARY = " << fixed << setprecision(2) << "U$ " << horas*sal_hora << endl;

    return 0;
}