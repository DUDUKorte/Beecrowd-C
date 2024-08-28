#include <bits/stdc++.h>
using namespace std;

int main(){

    int root_seconds;
    cin >> root_seconds;
    int s, m, h;
    h = root_seconds/3600; root_seconds = root_seconds%3600;
    m = root_seconds/60; root_seconds = root_seconds%60;
    s = root_seconds;

    cout << h << ":" << m << ":" << s << endl;

    return 0;
}