#include <stdio.h>

void main()
{
	int num,rem,result=0;
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		result=result+rem*rem*rem;
		num=num/10;
	
	}
	if(result==num)
	printf("armstrong");
	else
	printf("not armstrong num");
	// your code goes here
	return 0
}
