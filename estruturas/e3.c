#include <stdio.h>

struct Node{
    int x;
    struct Node *prox;
};

int main(){
    struct Node n1, n2, n3, n4;

    n1.x = 10;
    n1.prox = &n2;

    n2.x = 20;
    n2.prox = &n3;

    n3.x = 30;
    n3.prox = &n4;

    n4.x = 40;
    n4.prox = NULL;

    // printf("n1 = %d\n", n1.x);

    // printf("n4 = %d\n", n1.prox->prox->prox->x);

    for (struct Node *p = &n1; p != NULL; p = p->prox) {
        printf("%d\n", p->x);
    }

    return 0;
}