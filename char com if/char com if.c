#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[10];
    int idade;

    printf ("Digite o nome de usuario: ");
    scanf ("%s", &nome);

    printf ("Digite a idade: ");
    scanf ("%d", &idade);

    if (stricmp(nome, "lovigano") == 0 && idade >= 18){
         printf ("Acesso permitido");
    }
    else{
         printf ("Acesso negado");

    }
    return 0;
    }

