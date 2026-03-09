#include <stdio.h>

int main(){
    char x = 65; // dec
    char y = 100;
    char z = x + y;

    char k = 0x6B; // hex
    
    char t =0155; // octal

    char d = 'a'; // char
    char c = 0b01100010; // bin

    // printf("%d\n",z);
    // printf("%d\n",d);
    // printf("%d\n",c);
    printf("%c\n",k);
    printf("%c\n",t);

    // Uso do sizeof
    printf("char : %lu byte\n",sizeof(x));
    printf("int : %lu bytes\n",sizeof(int));
    printf("float : %lu bytes\n",sizeof(float));
    printf("double : %lu bytes\n",sizeof(double));

    printf("unsigned char : %lu bytes\n",sizeof(unsigned char));
    printf("unsigned int : %lu bytes\n",sizeof(unsigned int));
    
    printf("short int : %lu bytes\n",sizeof(short int));
    printf("long int : %lu bytes\n",sizeof(long int));
    printf("long long int : %lu bytes\n",sizeof(long long int));


    return 0;
}