#include <bits/stdc++.h>
using namespace std;

int main(){

    int inicio, fim, tempo = 0;
    cin >> inicio >> fim;

    if(fim <=inicio){
        tempo += 24 + (fim-inicio);
    }else{
        tempo = (fim-inicio);
    }

    cout << "O JOGO DUROU " << tempo << " HORA(S)" << endl;

    return 0;
}