#include<stdio.h>
#include<string.h>

int main(void)
{
    char str1[25],str2[25];
    int i=0,j=0;

    printf("Enter First String:");
    gets(str1);
    printf("\nEnter Second String:");
    gets(str2);

    strcat(str1, str2);

    printf("\nConcatenated String is %s",str1);

    return 0;
}
