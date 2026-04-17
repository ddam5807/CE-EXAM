#include <stdio.h>

int factorial(int n)
{
    if(n == 0) return 1;
    if(n == 1) return 1;
    n *= factorial(n-1);
    return n;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("n!: %d",factorial(n));
}