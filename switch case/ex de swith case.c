#include <stdio.h>
int main() {
  char operacao;
  printf("Digite a operacao desejada (+, -, *, /):  ");
  scanf(" %c", &operacao);
  switch (operacao) {
    case '+':
      printf("Soma\n");
      // Implementar c�digo para pegar os n�meros e somar
      break;
    case '-':
      printf("Subtracao\n");
      // Implementar c�digo para pegar os n�meros e subtrair
      break;
    case '*':
      printf("Multiplicacao\n");
      // Implementar c�digo para pegar os n�meros e multiplicar
      break;
    case '/':
      printf("Divisao\n");
      // Implementar c�digo para pegar os n�meros e dividir (verificar divis�o por zero)
      break;
    default:
      printf("Operacao invalida!\n");
  }
  return 0;
}
