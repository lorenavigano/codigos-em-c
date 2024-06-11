#include <stdio.h>

int main() {
    int capital, tempo, resultado;
    float juros;
    printf("Bem vindo! Utilize a calculadora corretamente");
    printf("\n Qual o seu valor inicial?");
    scanf("%i", &capital);
    printf("\n Quanto tempo?");
    scanf("%i", &tempo);

    juros = 0.05;
    resultado = capital + (capital * juros * tempo);

    printf("\n Seu resultado eh: %i\n", resultado);

    return 0;
    }



