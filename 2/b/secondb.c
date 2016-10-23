#include<stdio.h>

int main(void)
{
    int arr[10], maximum, minimum, location, i;

    printf("Enter 10 numbers :: \n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
//-------------------------------------------------
//--finding maximum--
    maximum = arr[0];
    for (i=1; i<9; i++)
    {
      if (arr[i] > maximum)
      {
         maximum  = arr[i];
         location = i+1;
      }
    }
    printf("Maximum element is present at location %d and it's value is %d.\n", location, maximum);
//-------------------------------------------------
//--finding minimum--
    minimum = arr[0];
    for (i=1; i<9; i++)
    {
        if (arr[i]<minimum )
        {
           minimum = arr[i];
           location = i+1;
        }
    }

    printf("Minimum element is present at location %d and it's value is %d.\n", location, minimum);

    return 0;
}
