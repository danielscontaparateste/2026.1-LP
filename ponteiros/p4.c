#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SZ 100

int main(){
    
    unsigned int q;

    puts("Digite a quantidade de elementos do vetor: ");
    scanf("%u",&q);

    int *v;

    v = malloc(q * sizeof(int));

    if (v==NULL) {
        puts("Não há memória disponível");
        exit(1);
    }

    srand(time(NULL));

    // Popular o vetor
    for (int k=0; k<q; k++){
        *(v+k) = rand() % SZ;
    }

    // Imprimir o vetor
    for (int k=0; k<q; k++){
        printf("[%p] %d\n",v+k,*(v+k));
    }

    // Busca do maior e menor elemento
    int *menor, *maior;

    menor = v;
    maior = v;

    for (int k=1; k<q; k++){
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

    free(v);
    
    return 0;
}

