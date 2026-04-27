#include <stdio.h>

int main(){
    int x; 
    int y;
    int z;

    int *px = NULL, *py = NULL, *pz = NULL;

    px = &x;
    py = &y;
    pz = &z;

    puts("Entre o valor de x: ");
    scanf("%d",px);

    puts("Entre o valor de y: ");
    scanf("%d",py);

    *pz = *px + *py;

    printf("[%p] %d + [%p] %d = [%p] %d \n\n",px, *px, py, *py, pz, *pz);

    return 0;

}