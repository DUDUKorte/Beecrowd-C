#include <bits/stdc++.h>
using namespace std;

int main(){

    double n;
    cin >> n;
    vector<string> options = {"(25,50]", "[0,25]", "(75,100]", "-1"};
    string option;

    if(n > 25 && n <= 50){
        option = options[0];
    }else if(n >= 0 && n <= 25){
        option = options[1];
    }else if(n > 75 && n <=100){
        option = options[2];
    }else{
        option = options[3];
    }

    if(option == options[3]){
        cout << "Fora de intervalo" << endl;
        return 0;
    }

    cout << "Intervalo " << option << endl;

    return 0;
}