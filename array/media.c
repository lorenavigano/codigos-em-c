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

    float media = soma / 10.0;

    printf("A media dos numeros do array eh: %.2f\n", media);

    return 0;
}
