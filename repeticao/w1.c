#include <stdio.h>

int main(){

    int x;
    puts("Digite o máximo valor : ");
    scanf("%d",&x);

    int k = 0;
    while(k<=x){
        printf("k = %d\n",k);
        k++;
    }


    return 0;
}