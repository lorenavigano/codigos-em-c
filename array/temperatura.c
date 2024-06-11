#include <stdio.h>

int main() {
    float temperaturas[] = {27.5, 28, 29.7, 31.7, 25.3, 19, 16.3};
    int tamanho = 7;
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += temperaturas[i];
    }

    float media = soma / tamanho;

    printf("A temperatura média da semana é: %.2f\n", media);

    return 0;
}
