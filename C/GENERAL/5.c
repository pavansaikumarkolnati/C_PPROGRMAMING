#include<stdio.h>
int main()
{   									//the sum of numbers divivsible by two 
	int n1,n2,sum=0;
	printf("enter the numbers\n");
	scanf("%d %d",&n1,&n2);
	for(int i=n1;i<=n2;i++)
	{
		if(i%2==0)
			sum+=i;
	}
	printf("the sum of numbers divivsible by two is %d",sum);
	return 0;}
