#include<stdio.h>

struct telephone
{
    char *name;
    int number;
};

int main()
{
    struct telephone index;

    index.name = "Mukesh Ambani";
    index.number = 1234567890;
    printf("Name: %s\n", index.name);
    printf("Telephone number: %d\n", index.number);

    return 0;
}
