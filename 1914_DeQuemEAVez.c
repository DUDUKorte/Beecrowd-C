#include <stdio.h>
#include <string.h>

int main(){

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        char p1[10], c1[7], p2[10], c2[7];
        scanf("%s %s %s %s", p1, c1, p2, c2);
        int n_p1, n_p2;
        scanf("%d %d", &n_p1, &n_p2);

        if(strcmp(c1, "PAR") == 0){
            if((n_p1+n_p2) %2 == 0){
                //p1 ganha
                printf("%s\n", p1);
            }else{
                //p2 ganha
                printf("%s\n", p2);
            }
        }else{
            if((n_p1+n_p2) %2 == 0){
                //p2 ganha
                printf("%s\n", p2);
            }else{
                //p1 ganha
                printf("%s\n", p1);
            }
        }
    }

    return 0;
}