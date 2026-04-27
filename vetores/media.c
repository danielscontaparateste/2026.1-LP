#include <stdio.h>

#define TAM 4
#define MED 7

int main(){
    float notas[TAM];

    // Entrada de Dados
    puts("Entre com as notas: ");
    for (int k=0; k<TAM; k++){
        scanf("%f",&notas[k]);
    }

    // Processamento
    float media = 0;
    for (int k=0; k<TAM; k++){
        media += notas[k]/TAM;
    }
    
    // Saída
    if (media < MED)
        printf("Média = %.2f\n, \t\tportanto, REPROVADO\n",media);
    else
        printf("Média = %.2f, portanto, aprovado\n",media);


    return 0;
}