#include <stdio.h>

int main(void)
{
    unsigned long n, i;
    double numer = -1.0, denom = 3.0, frac;
    long double pi;

    printf("How many terms to calculate pi to? ");
    scanf("%lu", &n);

    pi = 1.0;

    for (i = 1; i < n; i = i + 1)
    {
        frac = numer / denom;
        pi = pi + frac;
        numer = -numer;
        denom = denom + 2.0;
    }

    pi = pi * 4.0;
    printf("The value of pi is: %.20Lf\n", pi);

    return 0;
}