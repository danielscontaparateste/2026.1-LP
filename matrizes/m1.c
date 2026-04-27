#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 3
#define COL 5

#define SZ 10

int main(){
    int mat[LIN][COL];

    srand(time(NULL));

    for (int k=0; k<LIN; k++){
        for (int j=0; j<COL; j++){
            mat[k][j] = rand() % SZ;
        }
    }

    unsigned int contador = 0; 
    for (int k=0; k<LIN; k++){
        for (int j=0; j<COL; j++){
            // if (!(mat[k][j] % 2)){
            //     contador++;
            // }
            contador += (mat[k][j] % 2)?0:1;
        }
    }

    for (int k=0; k<LIN; k++){
        for (int j=0; j<COL; j++){
            printf("%d\t",mat[k][j]);
        }
        printf("\n");
    }

    puts("=====");

    printf("Qtd. de números pares: %u\n",contador);


    return 0;
}
