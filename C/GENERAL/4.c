#include<stdio.h>       		//palindrome of a number 
int main()
{
	int a,n,rev=0,temp;
	printf("enter the number\n");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{temp=n%10;
		n/=10;
	 rev=rev*10+temp;
	}
	rev==a?printf("palindrome"):printf("not a palindrome");
	return 0;
}