#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c;
    cin >> a >> b >> c;
    vector<int> valores = {a, b, c};
    sort(valores.begin(), valores.end());
    cout << valores[2] << " eh o maior" << endl;

    return 0;
}