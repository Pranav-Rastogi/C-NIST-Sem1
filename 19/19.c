#include<stdio.h>

int main(void)
{
    int a=12, b=25;

    printf("        ANDING :: %d\n", a&b);
    printf("         ORING :: %d\n", a|b);
    printf("        XORING :: %d\n", a^b);
    printf("COMPLEMENT(12) :: %d\n", ~a);
    printf("COMPLEMENT(25) :: %d\n", ~b);

    return 0;
}
