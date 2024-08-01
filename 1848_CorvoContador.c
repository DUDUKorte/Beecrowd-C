#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char inpt[10];
    int caw_count = 0;
    int count = 0;
    while (caw_count < 3){
        fgets(inpt, 10, stdin);

        if(strcmp(inpt, "caw caw\n") == 0){
            caw_count++;
            printf("%d\n", count);
            count = 0;
        }else{
            for(int i = 0; i < 3; i++){
                if(inpt[i] == '*'){
                    count+=pow(2, 2-i);
                }
            }
        }
    }
    

    return 0;
}