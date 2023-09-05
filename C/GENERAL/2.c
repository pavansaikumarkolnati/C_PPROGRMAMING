#include<stdio.h>       		//print the sum of digits in a number
int main()
{
	int n,sum=0,temp;
	printf("enter the number\n");
	scanf("%d",&n);

	while(n>0)
	{temp=n%10;
		n/=10;
		sum+=temp;
	}
	printf("the sum of digits in a nuumber is %d",sum);
	return 0;
}