#include <stdio.h>
//biblioteca utilizada para funcionar o código
int main() {//iniciar programa
  int numeroTabuada;//numero da tabuada
  char continuar;//loop para continuar a tabuada
  do {//fazer
    printf("Digite o numero para ver a tabuada: ");//texto para mostrar a tabuada
    scanf("%d", &numeroTabuada);//receber e guardar a tabuada

    if (numeroTabuada == 0) {//se o numero digitado for igual a 0
      break; // Sair do loop se o usuário digitar 0
    }
    printf("\nTabuada de %d:\n", numeroTabuada);//numero da tabuada

    for (int i = 1; i <= 10; i++) {//cont para definir limite
      printf("%d x %d = %d\n", numeroTabuada, i, numeroTabuada * i);//exibir e calcular tabuada
    }

    printf("\nDeseja ver outra tabuada? (s/n): ");//mensagem para uma segunda tabuada
    scanf(" %c", &continuar);//leitura do segundo numero
  } while (continuar == 's' || continuar == 'S');//se desejar ver outra tabuada

  printf("Programa finalizado.\n");//mensagem para finalizar o programa

  return 0;//fim
}
