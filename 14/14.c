#include<stdio.h>
#include<string.h>

int main(void)
{
    int c[10], i;

    printf("Enter 10 integers ::\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &c[i]);
        printf("ASCII value of %d is :: %d\n", c[i], c[i]+42);
    }

    return 0;
}
