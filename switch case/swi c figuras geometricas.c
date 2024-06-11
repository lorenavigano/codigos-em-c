#include <stdio.h>
int main() {
  int forma;
  printf("digite os lados da sua forma:  ");
  scanf(" %d", &forma);
  switch (forma) {
    case 3:
      printf("triangulo\n");
      break;

    case 4:
      printf("quadrado\n");
      break;

    case 5:
      printf("pentagono\n");
      break;

    case 6:
      printf("hexagono\n");
      break;

    default:

    if (forma>=7){
    printf("poligono qualquer \n");
    }
    else{
    printf("Operacao invalida!\n");
    }
    break;
  }
  return 0;
}
