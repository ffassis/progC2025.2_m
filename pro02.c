#include <stdio.h>

int main(){
    int soma=0, n1=0, n2=0;
    printf("Digite um n�mero: ");
    scanf("%d", &n1);//leitura de dado
    printf("Digite outro n�mero: ");
    scanf("%d", &n2);

    soma = n1 + n2;
    printf("Soma: %d", soma);

    //printf("%d %d %d", soma, n1, n2);
    return 0;
}
