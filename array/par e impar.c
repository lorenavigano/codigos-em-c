#include <stdio.h>

int main() {
    int numeros[10];
    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }

    printf("Numeros pares no array:\n");
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
        }
    }

    printf("\n");
    return 0;
}
