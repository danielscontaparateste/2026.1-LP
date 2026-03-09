#include <stdio.h>

int main(){
    unsigned char x = 255;

    printf("x: %d\n", x);

    x = x + 1;

    printf("x + 1 : %d\n", x);

    x = x + 1;

    printf("x + 1 + 1 : %d\n", x);

    x = x + 1;

    printf("x + 1 + 1 + 1 : %d\n", x);

    return 0;
}