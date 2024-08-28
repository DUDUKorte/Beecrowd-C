#include <bits/stdc++.h>
using namespace std;

int main(){

    int num1, num2;
    cin >> num1 >> num2;

    string out = max(num1, num2) % min(num1, num2) == 0 ? "Sao" : "Nao sao";
    cout << out << " Multiplos" << endl;

    return 0;
}