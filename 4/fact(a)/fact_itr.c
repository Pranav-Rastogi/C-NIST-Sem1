#include<stdio.h>

int main(void)
{
    int n, fact=1;

    scanf("%d", &n);
    int num = n;
    while(n--)
    {
        fact = fact*(n+1);
    }

    printf("factorial of %d is :: %d", num, fact);

    return 0;
}
