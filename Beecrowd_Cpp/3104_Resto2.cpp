#include <iostream>
#include <string>

using namespace std;

int modulo(const string& A, int B) {
    long long remainder = 0;

    for (char digit : A) {
        remainder = (remainder * 10 + (digit - '0')) % B;
    }

    return remainder;
}

int main() {
    string A;
    int B;

    cin >> A;

    cin >> B;

    int result = modulo(A, B);

    cout << result << endl;
}
