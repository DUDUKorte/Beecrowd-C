#include <bits/stdc++.h>
using namespace std;

int main(){

    long int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i%2 == 0){
            cout << i << "^2 = " << i*i << endl;
        }
    }

    return 0;
}