#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i=1,n;

    for(i=1;i<=10;i++){//9, 19
        if(i>3 && i<10){ //i=4
            i=i*2;//i=4*2=8, i=9*2=18
            printf("%d ",i*2);//8*2=16, 18*2= 36
        }
    }

    return 0;
}
