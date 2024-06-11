#include <stdio.h>

int main() {
    int livros, usuario, limite;
    char continuar;

    do{

    printf("Digite o tipo de usuario (aluno(1), professor(2), pesquisador(3), visitante(4): ");
    scanf("%d", &usuario);

    printf("Digite a quantidade de livros desejados para emprestimo: ");
    scanf("%d", &livros);

        switch (usuario) {
            case 1:
                limite = 3;
                if(livros<=limite){
                printf("Emprestimo permitido. Voce pode retirar %d livro(s).\n", livros);
                }
                else{
                printf("Emprestimo negado. Alunos podem retirar até 3 livros.\n");
                }
                break;

            case 2:
                limite = 5;
                if(livros<=limite){
                printf("Emprestimo permitido. Voce pode retirar %d livro(s).\n", livros);
                }
                else{
                printf("Emprestimo negado. Professoress podem retirar até 5 livros.\n");
                }
                break;

            case 3:
                limite = 10;
                if(livros<=limite){
                printf("Emprestimo permitido. Voce pode retirar %d livro(s).\n", livros);
                }
                else{
                printf("Emprestimo negado. Pesquisadores podem retirar até 10 livros.\n");
                }
                break;

            case 4:
                limite = 1;
                if(livros<=limite){
                printf("Emprestimo permitido. Voce pode retirar %d livro(s).\n", livros);
                }
                else{
                printf("Emprestimo negado. Visitantes podem retirar apenas 1 livro.\n");
                }
                break;

            default:
                printf("Emprestimo negado. Alunos podem retirar até 3 livros.\n");
                break;
        }
        printf("\nDeseja ver outra opcao? (s/n): ");
    scanf(" %c", &continuar);
        } while (continuar == 's' || continuar == 'S');

        printf("Programa finalizado.\n");
        return 0;//fim
        }
