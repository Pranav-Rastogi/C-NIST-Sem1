#include<stdio.h>

int main(void)
{
    int a, b;

    scanf("%d%d", &a, &b);

    printf("Calling swapval...\n");
    swapval(a, b);
    printf("Value after call by value ::\na = %d\tb = %d\n", a, b);


    printf("\nCalling swapref...");
    swapref(&a, &b);
    printf("Value after call by reference ::\na = %d\tb = %d", a, b);
    return 0;
}

void swapval(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
    printf("Value in swapval ::\na = %d\tb = %d\n", a, b);
}

void swapref(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    printf("Value in swapref ::\na = %d\tb = %d\n", *a, *b);
}
