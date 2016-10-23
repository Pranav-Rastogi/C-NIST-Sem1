#include<stdio.h>
#include<string.h>

int main(void)
{
    char ch[100], str[100];

    printf("Enter the string :: ");
    gets(ch);

    strcpy(str, ch);

    printf("new String :: %s\n", str);

    return 0;
}
