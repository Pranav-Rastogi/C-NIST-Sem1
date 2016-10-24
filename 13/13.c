#include<stdio.h>
#include<ctype.h>

int main(void)
{
    char ch;
    scanf("%c", ch);

    if(isdigit(ch))
        printf("Digit");
    else
        printf("Not a Digit");

    return 0;
}
