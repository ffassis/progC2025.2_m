#include <stdio.h>
//#include <locale.h>
int main(){
    //setlocale(LC_ALL, "Portuguese");
    float soma=0, n1=0, n2=0;
    printf("Digite um número: ");
    scanf("%f", &n1);//leitura de dado
    printf("Digite outro número: ");
    scanf("%f", &n2);

    soma = n1 + n2;
    printf("Soma: %.1f", soma);

    //printf("%d %d %d", soma, n1, n2);
    return 0;
}
