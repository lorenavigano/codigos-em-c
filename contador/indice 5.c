#include <stdio.h>

int main() {
    int numeros[10];
    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }

    printf("O numero no indice 5 eh: %d\n", numeros[5]);

    return 0;
}
