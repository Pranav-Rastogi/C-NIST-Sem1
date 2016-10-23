#include<stdio.h>

int main(void)
{
    int a, b;

    scanf("%d%d", &a, &b);
    printf("Calling swapval...");
    swapval(a, b);
    printf("Value after call by value ::\na = %d\tb = %d", a, b);
    return 0;
}

void swapval(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

void swapref(int *a, int *b)
{

}
