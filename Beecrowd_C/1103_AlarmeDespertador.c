#include <stdio.h>

int main(){

    int h1, m1, h2, m2;
    int mt = 0;

    while(1){
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        if(h1+m1+h2+m2 == 0){ break; }

        m1 += h1*60;
        m2 += h2*60;
        int mt;

        if(m1 < m2){
            mt = m2 - m1;
        }else{
            mt = (m2 + 1440) - m1;
        }

        printf("%d\n", mt);

    }

    return 0;
}