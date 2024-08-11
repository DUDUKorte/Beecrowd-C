#include <bits/stdc++.h>
using namespace std;

int main(){

    map<int, string> meses = {
        {1, "January"},
        {2, "February"},
        {3, "March"},
        {4, "April"},
        {5, "May"},
        {6, "June"},
        {7, "July"},
        {8, "August"},
        {9, "September"},
        {10, "October"},
        {11, "November"},
        {12, "December"}
    };

    int mes;
    cin >> mes;

    cout << meses[mes] << endl;

    return 0;
}