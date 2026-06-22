#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MX 100

typedef struct ponto{
    int x;
    int y;
    // double y;
} Pts;

void imprimirPts(Pts *, int);

int main(){
    Pts vp[TAM];

    srand(time(NULL));
    for (int k=0; k<TAM; k++){
        vp[k].x = rand() % MX;
        vp[k].y = rand() % MX;
    }

    imprimirPts(vp, TAM);

    FILE *fp;

    if (!(fp = fopen("dados.dat","wb+"))){
        puts("Não foi possível criar o arquivo. ");
        exit(1);
    }

    fwrite(vp, sizeof(Pts), TAM, fp);

    // rewind(fp);

    Pts pr;
    int pos;
    puts("Informe qual elemento você deseja ler: ");
    scanf("%d",&pos);

    fseek(fp, pos*sizeof(Pts), SEEK_SET);
    fread(&pr, sizeof(Pts), 1, fp);

    puts("Dados lidos do arquivo: ");
    printf("x = %d\n", pr.x);
    printf("y = %d\n", pr.y);
    
    fclose(fp);


    return 0;

}

void imprimirPts(Pts *p, int t){
    for (int k=0; k<t; k++){
        puts("====");    
        printf("x = %d\n",(p+k)->x);
        printf("y = %d\n",(p+k)->y);
        // printf("y = %.2f\n",(p+k)->y);
    }
}