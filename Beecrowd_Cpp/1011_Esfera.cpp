#include <bits/stdc++.h>
using namespace std;

int main(){

    double r, v;
    cin >> r;
    v = (4/3.0) * 3.14159 * (pow(r,3));
    cout << "VOLUME = " << fixed << setprecision(3) << v << endl;

    return 0;
}