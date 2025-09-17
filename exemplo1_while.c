//verificar quantos multiplo de 1 até n digitado pelo usuário é multiplo de 3.
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i=1, n;
    printf("Digite um valor: ");
    scanf("%d", &n);

    while(i<=n){
        if(n%i==0)
            printf("O valor É multiplo de %d.\n", i);

        i++;
    }

    return 0;
}
