#include <stdio.h>
#include <string.h>

int main()
{
   int i = 0;
   char c;
   char str[] = "TEST STRING";

   while(str[i])
   {
      printf("%c",tolower(str[i]));
      i++;
   }

   return(0);
}
