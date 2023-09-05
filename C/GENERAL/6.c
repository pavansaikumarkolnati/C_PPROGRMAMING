#include<stdio.h>
int main()									//program to factorial of a number
{
	int n,sum=1;
	printf("enter the number\n");
	scanf("%d",&n);
	for(int i=n;i>0;i--)
	{
		sum=sum*i;
	}
	
printf("the factorial of a number is %d",sum);
return 0;
}