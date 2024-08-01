#include <stdio.h>

int main(){

    int n, menor = -1, pos = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int ti;
        scanf("%d", &ti);
        if(menor == -1){ menor = ti; pos=i+1; }
        else if(ti < menor) { menor = ti; pos=i+1; }
    }
    printf("%d\n", pos);

    return 0;
}