#include<stdio.h>
#define FOO (12)
#define square(x) ((x)*(x))

int main(void)
{
    printf("The value of FOO is :: %d", FOO);
    printf("\nThe square of %d is :: %d", 4, square(4));

    return 0;
}
