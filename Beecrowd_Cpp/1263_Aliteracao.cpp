#include <bits/stdc++.h>

using namespace std;

int check_aliateracao(string phrase_a){
    for(auto partition : phrase_a){
        cout << partition << endl;
    }
}

int main() {
    string phrase;

    while(getline(cin, phrase)){
        string phrase__;
        istringstream stream(phrase);

        while(stream >> phrase__){
            cout << phrase__ << endl;
        }
        //check_aliateracao(phrase);
    }
    return 0;
}
