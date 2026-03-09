#include <stdio.h>

int main(){

    int x;

    puts("Digite um valor : ");
    scanf("%d",&x);

    puts("Sem o operador ternário: ");

    if (x%2){
        puts("x é IMPAR");
    }else{
        puts("x é PAR");
    }

    puts("Com o operador ternário: ");

    // [variavel =] (condicao)?instrucao_verdade:instrucao_falsa;
    
    (x%2)?puts("x é IMPAR"):puts("x é PAR");

    // ------

    // int y;
    // if (x%2){
    //     y = x * 10;
    // }else{
    //     y = x * 2;
    // }

    // y = (x%2)?x*10:x*2;

    x *= (x%2)?10:2; // x = (x%2)?x*10:x*2;

    printf("Valor de y: %d\n",x);
    

    return 0;
}
