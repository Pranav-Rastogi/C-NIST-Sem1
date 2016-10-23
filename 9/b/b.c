#include<stdio.h>

int main(void)
{
    char ch[100], str[100];

    printf("Enter the string :: ");
    gets(ch);

    int i;
    for(i = 0; ch[i]!='\0'; i++)
    {
        str[i]=ch[i];
    }
    str[i]='\0';

    printf("new String :: %s\n", str);

    return 0;
}
