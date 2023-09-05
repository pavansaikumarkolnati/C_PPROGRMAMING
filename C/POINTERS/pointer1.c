#include<stdio.h>//adding two numbers usng pointers
int main()
{
	int a,b,*p,*q,c;
	printf("enter numbrs=");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	c=(*p) +(*q);
	printf("sum is%d=",c);
	return 0;
}