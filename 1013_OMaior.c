#include <stdio.h>

int main(void){
  int a, b, c;
  int maiorAB;
  
  scanf("%d %d %d", &a, &b, &c);
  if(a > b){
    maiorAB = ((a + b) + (a - b)) / 2;
  }else{
    maiorAB = ((a + b) + (b - a)) / 2;
  }

  if(maiorAB > c){
    printf("%d eh o maior\n", maiorAB);
  }else{
    printf("%d eh o maior\n", c);
  }
  
  return 0;
}