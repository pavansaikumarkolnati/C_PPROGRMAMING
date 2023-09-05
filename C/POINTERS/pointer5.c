#include<stdio.h>				//program to to reverse the array elements using pointers
void dis(int *a,int *r,int n);
int main()
{
	int n;
	printf("enter the size =");
	scanf("%d",&n);
	int a[n],*p,*r;
	p=a;
	r=&a[n-1];
	printf("ENTER THE ELELMENSTS OF THE ARRAY\n");
	while(p<=r)
	{
		scanf("%d",p++);
	}
	p=a;
	dis(p,r,n);
	while(p<r)
	{
		*(p)^=*(r);
		*(r)^=*(p);
		*(p)^=*(r);
		p++;
		r--;
	}
	p=a;
	r=&a[n-1];
	dis(p,r,n);
	return 0;
}
void dis(int *p,int *r,int n)
{
	while(p<=r)
	{
		printf("%d ",*(p++));
	}
	printf("\n");
}