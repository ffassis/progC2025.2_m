#include <stdio.h>

int main(){
    int n1, n2, soma;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &n1); //tipo int %d
    printf("Digite o segundo n�mero: ");
    scanf("%d", &n2); //tipo int %d

    soma = n1+n2;

    printf("Soma dos valores = %d", soma);
    return 0;
}
