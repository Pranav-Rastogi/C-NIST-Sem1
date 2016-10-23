#include <stdio.h>

int main(void)
{
   char charArr[4];
   int i;

   for(i = 0; i < 4; ++i)
   {
      printf("Address of charArr[%d] = %u\n", i, &charArr[i]);
   }

   return 0;
}
