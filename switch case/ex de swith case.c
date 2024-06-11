#include <stdio.h>
int main() {
  char operacao;
  printf("Digite a operacao desejada (+, -, *, /):  ");
  scanf(" %c", &operacao);
  switch (operacao) {
    case '+':
      printf("Soma\n");
      // Implementar código para pegar os números e somar
      break;
    case '-':
      printf("Subtracao\n");
      // Implementar código para pegar os números e subtrair
      break;
    case '*':
      printf("Multiplicacao\n");
      // Implementar código para pegar os números e multiplicar
      break;
    case '/':
      printf("Divisao\n");
      // Implementar código para pegar os números e dividir (verificar divisão por zero)
      break;
    default:
      printf("Operacao invalida!\n");
  }
  return 0;
}
