// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int get_leds(string value){
	int sum = 0;
	for(char letter : value){
		switch(letter){
			case '1': sum+=2; break;
			case '2': 
			case '3': 
			case '5': sum+=5; break;
			case '4': sum+=4; break;
			case '7': sum+=3; break;
			case '8': sum+=7; break;
			case '6': 
			case '9': 
			case '0': sum+=6; break;
		}
	}
	return sum;
}

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		string valor;
		cin >> valor;
		cout << get_leds(valor) << " leds" << endl;
	}
}
