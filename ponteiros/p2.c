#include <stdio.h>

#define TAM 5

int main(){ 
    int v[TAM];

    puts("Digite os valores do vetor: ");
    for (int k=0; k<TAM; k++){
        scanf("%d",&v[k]);
    }

    puts("Valores do vetor: ");

    // printf("[%p] %d \n", v+0, *(v+0));
    // printf("[%p] %d \n", v+1, *(v+1));
    // printf("[%p] %d \n", v+2, *(v+2));

    for (int k=0; k<TAM; k++){
        printf("[%p] %d \n", v+k, *(v+k));
    }


    return 0;

}