#include<stdio.h>

int main()
{
    int c;

    /* value of an expression is the left side of '=' */
    while((c = getchar()) != EOF)
        putchar(c);

    printf("eof is: %d\n", EOF);
    return 0;
}
