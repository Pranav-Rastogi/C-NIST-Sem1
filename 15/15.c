#include<stdio.h>
#include<conio.h>

int main(void)
{
    char a[10];
    int i;

    for(i=0; i<10; i++)
    {
        scanf(" %c", &a[i]);
    }

    printf("Encrypted values are :: \n");
    for(i=0; i<10; i++)
        printf("%c ", a[i]+i);

    return 0;
}
