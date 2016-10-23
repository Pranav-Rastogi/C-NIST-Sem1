#include <stdio.h>
#include <string.h>

int main()
{
   int i = 0;
   char c;
   char str[] = "test string";

   while(str[i])
   {
      printf("%c",toupper(str[i]));
      i++;
   }

   return(0);
}
