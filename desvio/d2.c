#include <stdio.h>

// Exercício : Refatorar para usar um laço de repetição. Escolha o laço mais adequado. 

int main(){
    int x;
    int s = 0;

    loop: 
        puts("Entre com um número: ");
        scanf("%d",&x);
        s += x;
        printf("\tValor da soma atual é : %d\n",s);

    if (x){
        goto loop;
    }

    puts("Tchau!");

    return 0;

}