#include <stdio.h>

int main(void){
  
  int tempo, velocidade_media;
  double resultado, distancia;
  scanf("%d %d", &tempo, &velocidade_media);

  distancia = velocidade_media * tempo;
  resultado = distancia / 12.0;

  printf("%.3lf\n", resultado);
  
  return 0;
}