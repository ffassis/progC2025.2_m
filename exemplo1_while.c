//verificar quantos multiplo de 1 at� n digitado pelo usu�rio � multiplo de 3.
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i=1, n;
    printf("Digite um valor: ");
    scanf("%d", &n);

    while(i<=n){
        if(n%i==0)
            printf("O valor � multiplo de %d.\n", i);

        i++;
    }

    return 0;
}
