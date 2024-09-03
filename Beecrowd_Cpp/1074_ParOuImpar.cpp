#include <bits/stdc++.h>
using namespace std;

int main(){
    cout.tie(0); cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(num == 0) { cout << "NULL" << endl; continue; }
        
        num%2 == 0 ? cout << "EVEN" : cout << "ODD";
        num > 0 ? cout << " POSITIVE" : cout << " NEGATIVE";
        cout << endl;
    }
}