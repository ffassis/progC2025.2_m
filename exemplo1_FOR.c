#include <stdio.h>

int main(){
    int i=0, n, valor, soma;

    // Solicita ao usu�rio quantos n�meros ele quer somar
    printf("Quantos n�meros voc� deseja somar? ");
    scanf("%d", &n);

    // Loop para ler os n�meros e som�-los
    for(i=1; i <= n; i++){
        printf("Digite o %d� n�mero: ", i);
        scanf("%d", &valor);  // L� o valor fornecido pelo usu�rio
        soma = soma + valor;//soma += valor;  // Soma o valor � vari�vel soma
    }
    printf("\nteste: %d", i);
    for(i=1; i <= n; i++){
        printf("\nteste: %d", i);
    }

    // Exibe o resultado da soma
    printf("\n\nA soma dos valores �: %d\n", soma);

    return 0;
}
