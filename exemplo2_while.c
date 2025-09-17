#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i=1, n;
    printf("Digite um valor: ");
    scanf("%d", &n);

    while(i<=n){
        printf("%d\n", i);

        i++;
    }

    return 0;
}
