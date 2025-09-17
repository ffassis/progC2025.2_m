#include <stdio.h>

int main(){
    int i=0, n, valor, soma;

    // Solicita ao usuário quantos números ele quer somar
    printf("Quantos números você deseja somar? ");
    scanf("%d", &n);

    // Loop para ler os números e somá-los
    for(i=1; i <= n; i++){
        printf("Digite o %dº número: ", i);
        scanf("%d", &valor);  // Lê o valor fornecido pelo usuário
        soma = soma + valor;//soma += valor;  // Soma o valor à variável soma
    }
    printf("\nteste: %d", i);
    for(i=1; i <= n; i++){
        printf("\nteste: %d", i);
    }

    // Exibe o resultado da soma
    printf("\n\nA soma dos valores é: %d\n", soma);

    return 0;
}
