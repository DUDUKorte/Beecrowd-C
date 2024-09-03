#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); cout.tie(0);
    string linha1_in, linha2_in;
    while(cin >> linha1_in >> linha2_in){
        if(linha1_in[0] + linha2_in[0] == 96){ break; }
        vector<int> linha1, linha2;
        int carry = 0;

        for(char character : linha1_in){
            linha1.push_back(character-48);
        }
        for(char character : linha2_in){
            linha2.push_back(character-48);
        }

        for(int i = linha1.size()-1; i >= 0; i--){
            if(linha1[i] + linha2[i] > 9){
                carry++;
                if(i-1 > -1){ linha1[i-1] += 1; }
            }
        }

        carry > 0 ? cout << carry : cout << "No";
        cout << " carry operations." << endl;
    }
}