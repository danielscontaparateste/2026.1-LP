#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define RG 100

int main(){
    int vetor[TAM];

    srand(time(NULL));
    for (int k=0; k<TAM; k++){
        vetor[k] = rand() % RG; // [0,99]
    }

    puts("Vetor Gerado: ");
    for (int k=0; k<TAM; k++){
        printf("%d\n",vetor[k]);
    }

    int menor, maior;

    menor=vetor[0];
    maior=vetor[0];

    for (int k=1; k<TAM; k++){
        menor = (menor>vetor[k])?vetor[k]:menor;
        maior = (maior<vetor[k])?vetor[k]:maior;
    }

    puts("=====");
    printf("Menor: %d\n",menor);
    printf("Maior: %d\n",maior);


    return 0;
}
