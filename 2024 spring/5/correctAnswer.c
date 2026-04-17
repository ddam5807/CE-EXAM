#include<stdio.h>

int factorial(int i)
{
    int result = i;
    if(i == 0) return 1;
    if(i == 1)
    {
        return 1;
    }
    result = i * factorial(i - 1);
    return result;
}
int combination(int line, int n)
{
    int result;
    result = factorial(line) / (factorial(line - n) * factorial(n));
    return result;
}
int main()
{
    int num;
    scanf("%d",&num);
    int line = 0;
    while (line < num)
    {
        
    int n = 0;
	while(n <= line)
	{
		printf("%d ",combination(line,n));
		n += 1;
	}
	printf("\n");
	line += 1;
    }
}