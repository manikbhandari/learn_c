#include<stdio.h>

/* use #define to define symbolic constants. 
 * Define constants in capitals */
#define LOWER 0
#define UPPER 300
#define STEP 20

/* output farhenheit to celcius table for fahr = 0, 20, ... 300 */
int main()
{
    int fahr;

    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + 20)
        printf("%3d\t%6.2f\n", fahr, (5.0/9.0) * (fahr - 32));

    return 0;
}

