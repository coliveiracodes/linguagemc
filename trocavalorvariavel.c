#include <stdio.h>
#include <stdlib.h>

/* Programa para trocar o valor de a e b, 
sem atribuir ou trocar a variavel a pela b*/

int main()
{
    int a = 4;
    int b = 2;
    int c;

    printf("a = %d e b = %d\n\n\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("a = %d e b = %d\n", a, b);
    return 0;
}
