#include<stdio.h>
void main()
{
int n1,n2,n3;
scanf("%d%d%d",&n1,&n2,&n3);
 if( n1>=n2 && n1>=n3 )
        printf("largest numberis n1");

    if( n2>=n1 && n2>=n3 )
        printf(" largest numberis n2");

    if( n3>=n1 && n3>=n2 )
        printf(" largest number is n3");
}
