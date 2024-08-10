#include <bits/stdc++.h>
using namespace std;

string verify_q(double x, double y){
    string out;
    if(x == 0 && y == 0) { out = "Origem"; return out;}
    if(x == 0) { out = "Eixo Y"; return out;}
    if(y == 0) { out = "Eixo X"; return out;}
    
    if(x > 0){
        if(y > 0){
            out = "Q1";
        }else{
            out = "Q4";
        }
    }else{
        if(y > 0){
            out = "Q2";
        }else{
            out = "Q3";
        }
    }

    return out;
}

int main(){

    double x, y;
    cin >> x >> y;
    string out = verify_q(x, y);
    cout << out << endl;

    return 0;
}