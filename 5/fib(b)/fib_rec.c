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
    fib(n-2);

    return 0;
}

int fib(int n)
{
    static int first=0,second=1,sum;

    if(n>0){
         sum = first + second;
         first = second;
         second = sum;
         printf("%d ",sum);
         fib(n-1);
    }

    return 0;
}
