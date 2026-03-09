#include <stdio.h>

/*

    Requisitos: 
    1. Uso obrigatório do continue
    2. Uso obrigatório do break 
    3. Não considerar na média números divisíveis por 3.

*/

#define NUM 3 

int main(){

    int x, k = 1, somatorio = 0;

    float media;

    while(1){
        puts("Entre com um número inteiro ");
        scanf("%d",&x);

        if (!x) break;

        if (!(x%NUM)) continue;

        somatorio += x;

        media = (float) somatorio/k++; 

        printf("Media atualizada: %.2f\n",media);

        // k++;

    }

    // Exercício : Refatorar o código acima de forma que não precise utilizar o break. Faça também outras melhorias que julgar necessário.


    return 0;
}