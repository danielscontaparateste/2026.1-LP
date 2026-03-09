#include <stdio.h>


int main(){

    unsigned char idade;

    puts("Qual a sua idade? ");
    scanf("%hhu",&idade);

    if (idade < 16){
        puts("Não votar, não dirigir");
    }else if (idade < 18){
        puts("Votar, não dirigir");
    }else{
        puts("Votar, dirigir");
    }


    return 0;
}