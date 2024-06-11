#include<stdio.h>

int main(){

    int opcao, opcao2;
    float preco, quant, total;
    char continua;
    do{
    printf("[1] BATATA");
    printf("\n[2] CENOURA");
    printf("\n[3] COUVE");
    printf("\n[4] CESTA");
    printf("\n[5] CALCULAR COMPRA \n");
    scanf("%i", &opcao);

    switch(opcao){
    case 1:
        printf("BATATA R$5,00");
        break;
    case 2:
        printf("CENOURA R$4,00");
        break;
    case 3:
        printf("COUVE R$3,00");
        break;
    case 4:
        printf("CESTA - R$80,00 \n itens: \n 1kg de batata, \n 1kg de tomate, \n 1kg de cebola");
        break;
    case 5:
         printf("Qual produto voce comprou?");
         printf("\n[1] BATATA");
         printf("\n[2] CENOURA");
         printf("\n[3] COUVE");
         printf("\n[4] CESTA \n");
         scanf("%d", &opcao2);

         switch(opcao2){
         case 1:
             preco = 5;
             break;
         case 2:
             preco = 4;
             break;
         case 3:
             preco = 3;
             break;
         case 4:
            preco = 80;
            break;
         }
         printf("Quanto voce comprou?");
         scanf("%f", &quant);
         total = preco*quant;

         printf("Voce gastou %.2f", total);
         break;
         default:
            printf("opcao invalida");

    }
    printf("\nDeseja continuar s/n\n");
    scanf(" %c", &continua);
    }while(continua=='s'|| continua=='S');

    printf("programa finalizado.");

}
