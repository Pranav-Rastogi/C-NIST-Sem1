#include<stdio.h>

int main(void)
{
    int var = 20;
    int *ip = &var;
    printf("Value :: %d\tAddress :: %d\n\n", var, ip);

    char *str = "String\n";
    puts(str);

    char ch[10], *cp = ch;
    gets(cp);
    while(*cp!='\0')
    {
        printf("Value :: %c\tAddress :: %d\n\n", *cp, cp);
        cp++;
    }

    return 0;
}
