#include <bits/stdc++.h>
using namespace std;

int calcular_nota(double media, bool exame){
    if(media >= 7.0 || (media >= 5.0 && exame)){
        cout << "Aluno aprovado." << endl;
    }else{
        cout << "Aluno reprovado." << endl;
    }
    return 0;
}

int main(){

    double n1, n2, n3, n4, ne;
    cin >> n1 >> n2 >> n3 >> n4;
    double media = ((n1*2) + (n2*3) +  (n3*4) +  (n4*1)) / 10;
    
    cout << "Media: " << fixed << setprecision(1) << media << endl;

    if(media >= 5.0 && media <= 6.9){
        cout << "Aluno em exame." << endl;
        cin >> ne;
        cout << "Nota do exame: " << ne << endl;
        media = (media + ne) / 2.0;
        calcular_nota(media, true);
        cout << "Media final: " << media << endl;
    }else{
        calcular_nota(media, false);
    }

    return 0;
}