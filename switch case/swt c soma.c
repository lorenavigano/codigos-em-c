#include <stdio.h>
int main() {
  char operacao;
  float n1;
  float n2;
  float resultado;

    printf("Digite a operacao desejada (+, -, *, /):  ");
    scanf(" %c", &operacao);

    printf ("Digite seu primeiro numero: ");
    scanf ("%f", &n1);

    printf ("Digite seu segundo numero: ");
    scanf ("%f", &n2);

    switch (operacao) {
    case '+':
      printf("Soma\n", resultado);{
      resultado = n1 + n2;
      }

      break;
    case '-':
      printf("Subtracao\n", resultado);{
      resultado = n1 - n2;
      }

      break;
    case '*':
      printf("Multiplicacao\n", resultado);{
      resultado = n1 * n2;
      }

      break;
    case '/':
      printf("Divisao\n", resultado);{
      resultado = n1/n2;
      }
      break;

    default:
      printf("Operacao invalida!\n");
  }
    printf("o resultado da sua operacao eh:%.0f \n", resultado);
  return 0;
}
