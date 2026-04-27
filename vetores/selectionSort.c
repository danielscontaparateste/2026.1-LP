#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MX 100

int main(){

    int v[TAM];

    //Gerar o vetor
    srand(time(NULL));
    for (int k=0; k<TAM; k++){
        v[k] = rand() % MX;
    }

    // Imprimir o vetor gerado
    puts("Vetor gerado: ");
    for (int k=0; k<TAM; k++){
        printf("%d\n",v[k]);
    }

    // // Ordenação (crescente)
    int aux;
    for (int k=0; k<TAM-1; k++){
        for (int j=k+1; j<TAM; j++){
            if (v[k]>v[j]){
                aux = v[k];
                v[k] = v[j];
                v[j] = aux;
            }

        }
    }

    // Ordenação (decrescente)
    // int aux;
    // for (int k=0; k<TAM-1; k++){
    //     for (int j=k+1; j<TAM; j++){
    //         if (v[k]<v[j]){
    //             aux = v[k];
    //             v[k] = v[j];
    //             v[j] = aux;
    //         }

    //     }
    // }

    puts("Vetor ordenado: ");
    for (int k=0; k<TAM; k++){
        printf("%d\n",v[k]);
    }


    return 0;
}