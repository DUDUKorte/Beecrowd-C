#include <bits/stdc++.h>
using namespace std;

int main(){

    long int hri, mi, hrf, mf, hr, m, s;
    cin >> hri >> mi >> hrf >> mf;

    long int s_inicial = (hri*3600) + (mi*60);
    long int s_final = (hrf*3600) + (mf*60);
    long int s_total = s_final > s_inicial ? s_final - s_inicial : s_final - (s_inicial - (24*3600));

    hr = (s_total/3600.0);
    if (hri == hrf == mi == mf) {hr = 24;}
    s_total%=3600;
    m = (s_total/60.0);
    s = s_total%=60;
    cout << "O JOGO DUROU " << hr << " HORA(S) E " << m << " MINUTO(S)" << endl;
    

    return 0;
}