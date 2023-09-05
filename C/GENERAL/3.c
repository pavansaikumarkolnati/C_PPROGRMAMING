#include<stdio.h>       		//print  reverse of a number
int main()
{
	int n,rev=0,temp;
	printf("enter the number\n");
	scanf("%d",&n);

	while(n>0)
	{temp=n%10;
		n/=10;
	 rev=rev*10+temp;
	}
	printf("the reverse of a number is %d",rev);
	return 0;
}