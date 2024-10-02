/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "main.h"

/*
- A long is a longer integer; it has the same properties but llows us to store larger values.
- A long long is a longer long.
- %lld is the long long scanf format
*/

int main(void)
{
    int n;
    double sum = 0.0;
    
    printf("Enter your n:\n");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
    long long pow = power(i,i);
    long long fact = factorial(i);
    sum += (double)pow / fact;
    }
    
    printf("Summation of the series from 1 to %d is: %.2lf\n", n, sum);
    return 0;
}

long long factorial(int n) {
    
    long long fact = 1;
    
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    
    return fact;
}

long long power(int x, int y) {
    long long pow = 1;
    
    while(y > 0) {
        pow *= x;
        y--;
    }
    
    return pow;
}
