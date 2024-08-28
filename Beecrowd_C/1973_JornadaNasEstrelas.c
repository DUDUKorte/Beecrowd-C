#include <stdio.h>

int main(){

    long int n, stolen_stars = 0;
    long long total_sheeps = 0;
    scanf("%ld", &n);

    long int stars[n];
    long int pass_stars[n];

    for(int i = 0; i < n; i++){
        scanf("%ld", &stars[i]);
        pass_stars[i] = 0;
        total_sheeps += stars[i];
    }

    long int i = 0;
    for(; ; ){
        if(i > n-1 || i < 0) { break; }

        int aux = stars[i]; 
        if(stars[i] > 0){ total_sheeps--; stars[i]--; }
        if(pass_stars[i] == 0){ stolen_stars++; pass_stars[i]++; }

        if (aux%2 == 0){
            i--;
        }else{
            i++;
        }
        
    }
    printf("%ld %lld\n", stolen_stars, total_sheeps);

    return 0;
}