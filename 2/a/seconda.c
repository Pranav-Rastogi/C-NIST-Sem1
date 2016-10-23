#include<stdio.h>

int main(void)
{
    int arr[10], maximum, minimum, location, i;

    printf("Enter 10 numbers :: \n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nYou entered ::");
    for(i=0; i<10; i++)
    {
        printf("\n%d", arr[i]);
    }

    return 0;
}
