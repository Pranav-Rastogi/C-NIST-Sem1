#include<stdio.h>
#include<string.h>

int main(void)
{
    char s[100];
    printf("Enter the string :: ");
    gets(s);

    printf("Length of String is :: %d\n", strlen(s));

    return 0;
}
