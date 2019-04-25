#include<stdio.h>

/* output farhenheit to celcius table for fahr = 0, 20, ... 300 */
int main()
{
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("%3s\t%6s\n", "far", "cel");
    fahr = lower; /* implicit conversion */
    while(fahr <= upper){
        celcius = (5.0 / 9.0) * (fahr - 32.0);
        /* This says total 6 characters with at elast 3 after 
         * decimal point. If %6.4 is used, it will destroy
         * right justify. */
        printf("%3.0f\t%6.2f\n", fahr, celcius);
        fahr = fahr + step;
    }
    return 0;
}
