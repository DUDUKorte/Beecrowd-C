#include <bits/stdc++.h>
using namespace std;

int main(){

    double root_money, notas, moedas;
    cin >> root_money;
    int n_100, n_50, n_20, n_10, n_5, n_2;
    int m_1, m_50, m_25, m_10, m_05;
    double m_01;

    //notas
    notas = root_money;
    n_100 = notas / 100; notas -= n_100*100;
    n_50 = notas / 50; notas -= n_50*50;
    n_20 = notas / 20; notas -= n_20*20;
    n_10 = notas / 10; notas -= n_10*10;
    n_5 = notas / 5; notas -= n_5*5;
    n_2 = notas / 2; notas -= n_2*2;
    //moedas
    moedas = notas;
    m_1 = moedas / 1; moedas -= m_1 * 1;
    m_50 = moedas / .5; moedas -= m_50 * .5;
    m_25 = moedas / .25; moedas -= m_25 * .25;
    m_10 = moedas / .1; moedas -= m_10 * .1;
    m_05 = moedas / .05; moedas -= m_05 * .05;
    m_01 = moedas >= 0.000001 ? moedas*100 : 0;

    string prefix_notas = " nota(s) de R$ ";
    string prefix_moedas = " moeda(s) de R$ ";

    cout << "NOTAS:" << endl;
    cout << n_100 << prefix_notas << "100.00" << endl;
    cout << n_50 << prefix_notas << "50.00" << endl;
    cout << n_20 << prefix_notas << "20.00" << endl;
    cout << n_10 << prefix_notas << "10.00" << endl;
    cout << n_5 << prefix_notas << "5.00" << endl;
    cout << n_2 << prefix_notas << "2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << m_1 << prefix_moedas << "1.00" << endl;
    cout << m_50 << prefix_moedas << "0.50" << endl;
    cout << m_25 << prefix_moedas << "0.25" << endl;
    cout << m_10 << prefix_moedas << "0.10" << endl;
    cout << m_05 << prefix_moedas << "0.05" << endl;
    cout << m_01 << prefix_moedas << "0.01" << endl;

    return 0;
}