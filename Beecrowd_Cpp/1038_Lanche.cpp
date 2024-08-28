#include <bits/stdc++.h>
using namespace std;

int main(){

    int cod, qtd;
    vector<float> values = {4.00, 4.50, 5.00, 2.00, 1.50};
    cin >> cod >> qtd;
    cout << "Total: R$ " << fixed << setprecision(2) << qtd * values[cod-1] << endl;

    return 0;
}