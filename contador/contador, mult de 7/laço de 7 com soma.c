#include <stdio.h>
int main(){
    int cont, numero, soma=0;
    for (cont=1; cont<=7; cont++){
    printf("Digite seus numeros: ");
        scanf("%d", &numero);

        soma= soma+numero;
        }

        printf("Sua soma eh: %d\n", soma);

    return 0;
    }

