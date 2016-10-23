#include<stdio.h>
#include"add.h"

int main(void)
{
    int a, b, c;

    printf("Enter the first number :: ");
    scanf("%d", &a);

    printf("Enter the second number :: ");
    scanf("%d", &b);

    c = add(a, b);
    printf("Sum of %d and %d is :: %d",a , b, c);

    return 0;
}
