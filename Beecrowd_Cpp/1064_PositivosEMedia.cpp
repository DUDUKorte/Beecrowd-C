#include <bits/stdc++.h>
using namespace std;

int main(){

    int pos = 0;
    double sum = 0;
    for(int i = 0; i < 6; i++){
        double n;
        cin >> n;
        if(n >= 0){ pos++; sum+=n; }
    }
    cout << pos << " valores positivos" << endl << fixed << setprecision(1) << sum/pos << endl;

    return 0;
}