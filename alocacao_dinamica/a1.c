#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // Alocação de Memória
    unsigned qtd; // unsigned int qtd;
    puts("Entre com a quantidade de elementos: ");
    scanf("%d",&qtd);

    unsigned int *p = (unsigned int *) malloc(qtd * sizeof(unsigned int));
    if (!p){ // if (p==NULL){
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


    // Contar a frequência
    unsigned *f = NULL;

    // if (!(f = (unsigned int *) malloc( (max+1) * sizeof(unsigned)))){
    // calloc - garantir zero nos elementos a partir de f 
    if (!(f = (unsigned int *) calloc( (max+1), sizeof(unsigned)))){    
        puts("Não há memória disponível");
        exit(2);
    }

    for (int k=0; k<qtd; k++){
        f[p[k]]++; // Exercício : colocar essa instrução em aritmética de ponteiros.
    }

    // Exibir o vetor de frequência
    puts("Contando a frequência dos elementos.. ");
    for (int k=0; k<(max+1); k++){
        printf("[%p] %u - elemento %d \n", f+k, *(f+k), k);
    }
    puts("---");

    return 0;
}