// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <cstdio>
using namespace std;


unsigned long long int fat(int n){
	unsigned long long int m = n, result = 1;
	for(int i = 1; i < n; i++){
		result = m*result;
		m--;
	}
	return result;
} 

int main() {
	int a, b;
	while(cin >> a >> b){
		unsigned long long int fat_a = fat(a), fat_b = fat(b);
		cout << fat_a+fat_b << endl;
	}
}
