#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "us-en");
    int a= 0 , b= 2 ;

    if(a>b){//falso
        printf("O valor de a � maior que o de b.");
        a=3;
    }
    if(a<b){ //v
        printf("O valor de a � menor que o de b.");
        b=0;
    }
    if(a==b){
        printf("\nO valor de a � igual o de b.");
       a=1;
    }
    if(a){
        printf("\nO valor de a � diferente de 0.");
    }

    return 0;
}

