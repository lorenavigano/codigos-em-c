#include <stdio.h>

int main() {
    int numeros[10];
    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }

    int soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += numeros[i];
    }

    printf("A soma de todos os numeros do array eh: %d\n", soma);

    return 0;
}
