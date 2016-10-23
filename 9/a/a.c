#include<stdio.h>

int main(void)
{
    char s[100];
    printf("Enter the string :: ");
    gets(s);

    int i;
    for(i = 0; s[i]!='\0'; i++);

    printf("Length of String is :: %d\n", i-1);

    return 0;
}
