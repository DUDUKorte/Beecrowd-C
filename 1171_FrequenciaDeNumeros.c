#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int numeros[n], frequencias[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &numeros[i]);
    }

    return 0;
}