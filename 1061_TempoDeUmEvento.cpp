#include <bits/stdc++.h>
using namespace std;

int main(){

    int diai, hri, mi, si, diaf, hrf, mf, sf, dia, hr, m, s;
    string tmp;
    cin >> tmp >> diai;
    cin >> hri >> tmp >> mi >> tmp >> si;
    cin >> tmp >> diaf;
    cin >> hrf >> tmp >> mf >> tmp >> sf;

    int s_total = (((diaf*24)*3600) + (hrf*3600) + (mf*60) + sf) - (((diai*24)*3600) + (hri*3600) + (mi*60) + si);

    dia = (s_total/(3600*24));
    s_total %= 3600*24;
    hr = s_total /3600;
    s_total %= 3600l;
    m = s_total/60;
    s = s_total%60;

    cout << dia << " dia(s)" << endl << hr << " hora(s)" << endl << m << " minuto(s)" << endl << s << " segundo(s)" << endl;

    return 0;
}