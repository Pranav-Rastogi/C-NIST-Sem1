#include<stdio.h>
#include<string.h>

int main(void)
{
    char c[100], b[100];

    printf("Input first string :: ");
    scanf("%s", c);
    printf("Input second string :: ");
    scanf("%s", b);

    if(strcmp(c,b)==0)
        printf("Entered strings are equal.\n");
    else
        printf("Entered strings are not equal.\n");
}
