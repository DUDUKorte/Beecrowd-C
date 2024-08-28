#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    while (n > 0)
    {
        
        int pilha1, pilha2, maior, menor;
        cin >> pilha1 >> pilha2;
        maior = max(pilha1, pilha2);
        menor = min(pilha1, pilha2);

        while(maior > 0){
            int temp = menor%maior;
            menor = maior;
            maior = temp;
            if(menor%maior == 0){
                cout << maior << endl;
                break;
            }
        }
        n--;
    }
    

    return 0;
}