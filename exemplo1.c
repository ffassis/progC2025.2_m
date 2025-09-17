#include <stdio.h>
#include <locale.h>

int main(){
    //setlocale(LC_ALL, "Portuguese");
    int i=0, n, soma=5, idade;
    float valor = 15.79;
    char nome[30]; // %s para string não usar &
    char sigla='b';

    printf("Digite seu nome: ");
    scanf("%[^\n]", nome);
    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

    printf("A soma dos valores é: %d\n", soma);
    printf("Ovalor dos produtos: %.2f\n", valor);
    printf("Nome do aluno: %s\n", nome);
    printf("Sigla: %c\n", sigla);
    printf("Idade do aluno: %d", idade);

    return 0;
}
