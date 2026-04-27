#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 10
#define SZ 100

int main(){
    int v[TAM] = {0};

    srand(time(NULL));

    // Popular o vetor
    for (int k=0; k<TAM; k++){
        *(v+k) = rand() % SZ;
    }

    // Imprimir o vetor
    for (int k=0; k<TAM; k++){
        printf("[%p] %d\n",v+k,*(v+k));
    }

    // Busca do maior e menor elemento
    int *menor, *maior;

    menor = v;
    maior = v;

    for (int k=1; k<TAM; k++){
        if (*menor > *(v+k)){
            menor = v+k;
        }

        if (*maior < *(v+k)){
            maior = v+k;
        }
    }

    // Saída
    puts("======");
    printf("[%p] menor = %d\n",menor, *menor);
    printf("[%p] maior = %d\n",maior, *maior);
    
    return 0;
}

