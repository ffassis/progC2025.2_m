#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i=1, n;
    printf("Digite um valor: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        printf("%d\n", i);
    }

    return 0;
}
