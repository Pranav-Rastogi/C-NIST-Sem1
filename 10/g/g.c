#include<stdio.h>
#include<string.h>

int main()
{
   int i, j, k;
   char str[100];

   printf("Enter a string\t");
   scanf("%s", str);

   strrev(str);

   printf("The reverse string is :: %s", str);

   return 0;
}
