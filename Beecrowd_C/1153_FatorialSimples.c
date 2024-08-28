#include <stdio.h>

int main() {
    int n, result = 1, i = 0;
    scanf("%d", &n);

    while(n - i > 0){
        result = result * (n-i);
        i++;
    }

    printf("%d\n", result);
}