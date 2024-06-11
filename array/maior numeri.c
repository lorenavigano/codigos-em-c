#include <stdio.h>

int main() {
    int numeros[10];
    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }

    int menor = numeros[0];
    for (int i = 1; i < 10; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("O menor numero do array eh: %d\n", menor);

    return 0;
}



