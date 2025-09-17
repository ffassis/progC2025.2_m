#include <stdio.h>

int main(){
    int soma=0, n1=0, n2=0;
    printf("Digite um número: ");
    scanf("%d", &n1);//leitura de dado
    printf("Digite outro número: ");
    scanf("%d", &n2);

    soma = n1 + n2;
    printf("Soma: %d", soma);

    //printf("%d %d %d", soma, n1, n2);
    return 0;
}
