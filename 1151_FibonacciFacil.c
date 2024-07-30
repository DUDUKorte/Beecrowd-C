#include <stdio.h>

int main(){
    long int prev_i = 1, tmp, c = 0, n;
    scanf("%ld", &n);

    for(long int i = 0; ; i += tmp){
        if(c == n){ break; }
        printf("%ld%s", i, c+1 == n ? "\n":" ");
        tmp = prev_i;
        prev_i = i;
        c++;
    }

    return 0;
}
