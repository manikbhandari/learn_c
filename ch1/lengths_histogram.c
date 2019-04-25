#include<stdio.h>

#define MAX_LEN 10
#define MAX_FREQ 10

int main()
{
    int c;
    int lengths[MAX_LEN];

    int i;
    for(i = 0; i < MAX_LEN; i++)
        lengths[i] = 0;

    int wrd_num = 0, len = 0;
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            ++lengths[len % MAX_LEN]; /* assuring no out of bounds access */
            len = 0;
        }
        else ++len;
    }

    for(i = 0; i < MAX_LEN; i++){
        printf("%d: ", i);
        int j;
        for(j = 0; j < lengths[i]; j++)
            printf("%s", "-");
        putchar('\n');
    }

    int freq;
    printf("0 1 2 3 4 5 6 7 8 9\n");
    for(freq = 1; freq <= MAX_FREQ; freq++){
        for(i = 0; i < MAX_LEN; i++){
            if(lengths[i] >= freq) printf("| ");
            else printf("  ");
        }
        putchar('\n');
    }
    return 0;
}

