#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, soma;

    printf("Digite dois números: ");
    scanf("%d", &n1); //scanf("%d %d", &n1, &n2);
    scanf("%d", &n2);

    soma = n1+n2;

    printf("Soma de %d + %d = %d", n1, n2, soma);
    return 0;
}
