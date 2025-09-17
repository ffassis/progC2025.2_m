#include <stdio.h>

int main(){
    int i, n, soma=0;

    for(i=0; i<5; i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &n);
        soma = soma + n;

    }
printf("O valor de n: %d\n", soma);
    return 0;

}
