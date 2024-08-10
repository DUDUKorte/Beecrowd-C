#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, i = 0;
    string frase;
    cin >> n;
    //getchar();
    cin.ignore();

    while(n>0){
        getline(cin, frase);
        char letra_atual;

        // Primeira passada
        i = 0;
        do{
            letra_atual = frase[i];
            if((letra_atual >= 'a' && letra_atual <= 'z') || (letra_atual >= 'A' && letra_atual <= 'Z')){
                frase[i] += 3;
            }
            i++;
        }while(letra_atual != '\0');

        // Segunda passada
        reverse(frase.begin(), frase.end());

        // Terceira Passada    
        for(int j = (trunc((frase.size() / 2.0))) ; j < frase.size(); j++){
            frase[j] -= 1;
        }

        cout << frase << endl;
        n--;
    }
    
    return 0;
}