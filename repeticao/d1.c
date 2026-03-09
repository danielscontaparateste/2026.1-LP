#include <stdio.h>

int main(){
    int x;

    do{
        printf("Digite um número: ");
        scanf("%d",&x);
    }while(!(x % 2));

    printf("Você encerrou! Digitou o valor %d - ímpar\n",x);


    return 0;
}