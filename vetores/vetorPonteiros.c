#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 2

int main(){
    unsigned qtd;
    
    puts("Digite a quantidade de elementos: ");
    scanf("%u",&qtd);

    unsigned *p = NULL;
    if (!(p = (unsigned *) malloc(qtd * sizeof(unsigned)))){
        puts("Não existe memória disponível");
        exit(1);
    }

    // Popular o vetor
    unsigned max; 
    puts("Digite o maior valor possível no vetor: ");
    scanf("%u",&max);
    
    srand(time(NULL));
    for (int k=0; k<qtd; k++){
        // p[k] = rand() % (max+1);
        *(p+k) = rand() % (max+1);
    }

    // Exibir o vetor gerado
    puts("Dados gerados: ");
    for (int k=0; k<qtd; k++){
        printf("[%p] %u\n", p+k, *(p+k));
    }
    puts("---");

    // unsigned *menor = NULL, *maior = NULL;

    // menor = p;
    // maior = p;

    unsigned int *ends[TAM]; // [menor, maior]

    ends[0] = p; 
    ends[1] = p;

    for (int k=0; k<qtd; k++){
        ends[0] = (*ends[0] > *(p+k))?p+k:ends[0];
        ends[1] = (*ends[1] < *(p+k))?p+k:ends[1];
    }

    puts("---- Endereços do Menor e Maior elementos do Vetor :");
    printf("Endereço do menor: %p\n", ends[0]);
    printf("Endereço do maior: %p\n", ends[1]);



    return 0;
}