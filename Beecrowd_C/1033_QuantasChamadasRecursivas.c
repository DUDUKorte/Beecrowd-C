#include <stdio.h>


unsigned long v[1000000];
int i;
int casos = 1;

int main(){

    unsigned long n, b;

    while(scanf("%lu %lu", &n, &b), n+b != 0){
        v[0] = 1;
        v[1] = 1;
        for(i = 2; i < 1000000; i++){
            v[i] = (v[i-1] + v[i-2] + 1)%b;
            if((v[i] == 1) && (v[i-1] == 1)){
                break;
            }
        }
        i--;
        printf("Case %d: %lu %lu %lu\n", casos, n, b, v[n%i]);
        
        casos++;
    }

    return 0;
}