#include <stdio.h>
#include <string.h>

int main(){

    int n;
    char sheldon[15], raj[15];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s %s", sheldon, raj);
        if(strcmp(sheldon, raj) == 0){
            printf("Caso #%d: De novo!\n", i+1);
            continue;
        }

        if(strcmp(sheldon, "tesoura") == 0){
            if(strcmp(raj, "papel") == 0 || strcmp(raj, "lagarto") == 0){
                printf("Caso #%d: Bazinga!\n", i+1);
                continue;
            }else{
                printf("Caso #%d: Raj trapaceou!\n", i+1);
                continue;
            }
        }
        if(strcmp(sheldon, "pedra") == 0){
            if(strcmp(raj, "tesoura") == 0 || strcmp(raj, "lagarto") == 0){
                printf("Caso #%d: Bazinga!\n", i+1);
                continue;
            }else{
                printf("Caso #%d: Raj trapaceou!\n", i+1);
                continue;
            }
        }
        if(strcmp(sheldon, "papel") == 0){
            if(strcmp(raj, "pedra") == 0 || strcmp(raj, "Spock") == 0){
                printf("Caso #%d: Bazinga!\n", i+1);
                continue;
            }else{
                printf("Caso #%d: Raj trapaceou!\n", i+1);
                continue;
            }
        }
        if(strcmp(sheldon, "lagarto") == 0){
            if(strcmp(raj, "papel") == 0 || strcmp(raj, "Spock") == 0){
                printf("Caso #%d: Bazinga!\n", i+1);
                continue;
            }else{
                printf("Caso #%d: Raj trapaceou!\n", i+1);
                continue;
            }
        }
        if(strcmp(sheldon, "Spock") == 0){
            if(strcmp(raj, "tesoura") == 0 || strcmp(raj, "pedra") == 0){
                printf("Caso #%d: Bazinga!\n", i+1);
                continue;
            }else{
                printf("Caso #%d: Raj trapaceou!\n", i+1);
                continue;
            }
        }
    }

    return 0;
}