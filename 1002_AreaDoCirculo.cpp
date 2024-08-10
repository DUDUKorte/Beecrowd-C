#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double pi = 3.14159, r, a;

    cin >> r;

    a = pi * (r*r);
    
    cout << fixed << setprecision(4) << "A=" << a << endl;

    return 0;
}