#include <stdio.h>

int main(){

    int op;
    int x = 5, y = 2;

    puts("1. Somar");
    puts("2 ou 3. Multiplicar");

    scanf("%d",&op);

    switch (op){
    case 1:
        printf("Resultado da soma : %d\n",x+y);
        break;
    
    case 2:
    case 3:
        printf("Resultado da multiplicação : %d\n",x*y);
        break;    
    default:
        puts("Opção inválida");
    }
    

    return 0;
}