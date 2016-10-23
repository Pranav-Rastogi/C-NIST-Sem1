#include<stdio.h>

int main(void)
{
    int a=0, b=1, sum, n;

    printf("Enter number of terms you want :: ");
    scanf("%d", &n);
    if(n==1)
    {
        printf("0");
        return 0;
    }
    if(n==2)
    {
        printf("0 1");
        return 0;
    }

    printf("0 1 ");
    n-=2;
    while(n--)
    {
        sum = a+b;
        printf("%d ", sum);
        a = b;
        b = sum;
    }

    return 0;
}
