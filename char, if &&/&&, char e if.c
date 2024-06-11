#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[10];
    int renda;
    int idade;

    printf ("Digite o nome: ");
    scanf ("%s", &nome);

    printf ("Digite a idade: ");
    scanf ("%d", &idade);

    printf ("Digite a renda: ");
    scanf ("%d", &renda);

    if (stricmp(nome, "lorena") == 0 && idade>= 21 && renda>= 1500){
         printf ("Acesso permitido, %s", nome);
    }
    else{
         printf ("Acesso negado, %s", nome);

    }
    return 0;
    }

