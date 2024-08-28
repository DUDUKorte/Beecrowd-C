#include <bits/stdc++.h>
using namespace std;

int main(){

    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    vector<int> valores = {num1, num2, num3};
    sort(valores.begin(), valores.end());

    for(int i = 0; i < valores.size(); i++){ cout << valores[i] << endl; }
    cout << endl << num1 << endl << num2 << endl << num3 << endl;

    return 0;
}