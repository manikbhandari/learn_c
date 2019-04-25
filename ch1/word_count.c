#include<stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, nc, nw, nl, state;

    state = OUT;
    nc = nw = nl = 0;

    while((c = getchar()) != EOF){
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        if(state == OUT){
            state = IN;
            ++nw; 
        }
    }
    printf("chars: %d words: %d lines: %d\n", nc, nw, nl);

    return 0;
}
