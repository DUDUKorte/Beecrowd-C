#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    double num1, num2, num3, media;
    cin >> num1 >> num2 >> num3;
    media = ((num1*2) + (num2*3) + (num3*5)) / 10;

    cout << "MEDIA = " << fixed << setprecision(1) << media << endl;

    return 0;
}