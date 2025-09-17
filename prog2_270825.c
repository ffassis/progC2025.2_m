#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int idade;
    char nome[30];
    char letra='G';
    printf("---------Sistema de Cadastro de Aluno-----------\n");
    printf("Digite a letra inicial do seu nome: ");
    scanf(" %c", &letra);
    printf("Digite seu nome: ");
    scanf(" %29[^\n]", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("\n---------Confirme os Dados Cadastrados-----------\n");
    printf("Inicial do aluno: %c\n", letra);
    printf("Nome do aluno: %s", nome);
    printf("\nIdade do aluno: %d", idade);

    return 0;
}
