#include <bits/stdc++.h>
using namespace std;

int main(){

    int hrs, kmh;
    cin >> hrs >> kmh;
    double gasto = (hrs * kmh)/ 12.0;
    cout << fixed << setprecision(3) << gasto << endl;

    return 0;
}