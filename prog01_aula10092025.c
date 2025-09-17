#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "us-en");
    int a= 0 , b= 2 ;

    if(a>b){//falso
        printf("O valor de a é maior que o de b.");
        a=3;
    }
    if(a<b){ //v
        printf("O valor de a é menor que o de b.");
        b=0;
    }
    if(a==b){
        printf("\nO valor de a é igual o de b.");
       a=1;
    }
    if(a){
        printf("\nO valor de a é diferente de 0.");
    }

    return 0;
}

