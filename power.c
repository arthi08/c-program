#include<stdio.h>
void main()
{
int base;
int exponent;
 int result=1;
scanf("%d%d",&base,&exponent);
 while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
printf("%d",result);
}
