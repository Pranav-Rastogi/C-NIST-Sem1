#include<stdio.h>

int main(void)
{
    char c[100], b[100];

    printf("Input first string :: ");
    scanf("%s", c);
    printf("Input second string :: ");
    scanf("%s", b);

    int n = 0, flag=0;
    while(c[n] == b[n])
    {
        if(c[n] == '\0')
        {
            flag=1;
            break;
        }
        n++;
    }

    if(flag)
        printf("Entered strings are equal.\n");
    else
        printf("Entered strings are not equal.\n");
}
