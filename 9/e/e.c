#include<stdio.h>

int main(void)
{
    char s3[100], *cp2;

    printf("Input string :: ");
    scanf("%s", s3);

    cp2=s3;
    while(*cp2!='\0')
    {
        if(*cp2>='a' && *cp2<='z')
            *cp2 = *cp2-32;
        cp2++;
    }

    cp2=s3;
    printf("%s", cp2);

    return 0;
}
