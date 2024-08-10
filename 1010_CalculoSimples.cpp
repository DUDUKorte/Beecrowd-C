#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int cod, qtd;
    double val, payment = 0;
    for(int i = 0; i<2; i++){
        cin >> cod >> qtd >> val;
        payment += qtd*val;
    }
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << payment << endl;

    return 0;
}