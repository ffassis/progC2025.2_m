#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "us-en");
    ______ a=__ , b=__;

    if(a>b){//falso
        printf("\nO valor de a � maior que o de b.");
        a=__;
    }
    if(a<b){ //v
        printf("\nO valor de a � menor que o de b.");
        b=__;
    }
    if(a==b){
        printf("\nO valor de a � igual o de b.");
       a=__;
    }
    if(a){
        printf("\nO valor de a � diferente de 0.");
    }

    return 0;
}

