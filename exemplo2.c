//verificar se um número digitado pelo usuário é multiplo de 3.
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);

    if(n%3==0)
        printf("O valor É multiplo de 3.");
    else
        printf("O valor NÃO é multiplo de 3.");

    return 0;
}
