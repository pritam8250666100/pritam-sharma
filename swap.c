#include<stdio.h>
void main()
{
	int a,b;
	printf("enter 2 no.: ");
	scanf("%d%d",&a,&b);
	printf("before swap a=%d and b=%d \n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swap a=%d and b=%d ",a,b);
}
