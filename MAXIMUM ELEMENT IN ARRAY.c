#include <stdio.h>
 void main()
{
 int array[100], maximum, size, i, location = 1;
 printf("Enter the number of elements in array");
 scanf("%d", &size);
 printf("Enter %d integers", size);
 for (i = 0; i < size; i++)
 scanf("%d", &array[i]);
 maximum = array[0];
 for (i = 1; i < size; i++)
  {
    if (array[i] > maximum)
    {
       maximum  = array[i];
       location = i+1;
    }
  }
  printf("%d", maximum);
}
