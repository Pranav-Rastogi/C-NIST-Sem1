#include<stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);
    int f = fact(n);
    printf("factorial of %d is :: %d", n, f);

    return 0;
}

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
