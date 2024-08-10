#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double num1, num2, media;
    cin >> num1 >> num2;

    media = (num1*3.5 + num2*7.5) / 11;
    cout << "MEDIA = " << fixed << setprecision(5) << media << endl;

    return 0;
}