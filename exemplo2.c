//verificar se um n�mero digitado pelo usu�rio � multiplo de 3.
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);

    if(n%3==0)
        printf("O valor � multiplo de 3.");
    else
        printf("O valor N�O � multiplo de 3.");

    return 0;
}
