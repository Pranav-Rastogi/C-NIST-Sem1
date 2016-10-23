#include<stdio.h>

int main(void)
{
    enum day
    {
        Monday=1,
        Tuesday=2,
        Wednesday=3,
        Thursday=4,
        Friday=5,
        Saturday=6,
        Sunday=7
    };

    printf("    Monday :: %d\n", Monday);
    printf("   Tuesday :: %d\n", Tuesday);
    printf(" Wednesday :: %d\n", Wednesday);
    printf("  Thursday :: %d\n", Thursday);
    printf("    Friday :: %d\n", Friday);
    printf("  Saturday :: %d\n", Saturday);
    printf("    Sunday :: %d\n", Sunday);
}
