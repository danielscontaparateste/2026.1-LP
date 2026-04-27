#include <stdio.h>

#define TAM 10

int main(){

    char str[TAM];
    int idade;

    puts("Qual a sua idade? ");
    scanf("%d",&idade);

    getchar();

    puts("Qual o seu nome?");
    // gets(str);
    // fgets(str, TAM, stdin);
    // scanf("%s", str);
    scanf("%9[^\n]s",str); 
    // scanf("%[^\n]s",str); 

    // gets(str);

    printf("Nome= %s e idade = %d\n",str, idade);

    puts("#####");
    for (int k=0; k<TAM; k++){
        printf("[%p] %d\n",&str[k],str[k]);
    }

    return 0;

}