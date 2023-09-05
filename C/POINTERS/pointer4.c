#include<stdio.h>					//ptrogram to swap th element of two arrays using pointers
void dis(int *a,int n);
void in(int *p,int *r);
int main()
{
	int n;
	printf("enter the size of array");
	scanf("%d",&n);
	int a[n],b[n];
	int *p,*r,*y,*q;
	p=a;
	q=b;
	r=&a[n-1];
	y=&b[n-1];
in(p,r);
in(q,y);
dis(a,n);
dis(b,n);
while(p<=r && q<=y)
{
	*(p)^=*(q);
	*(q)^=*(p);
	*(p)^=*(q);
	*(p++);
	*(q++);
}
dis(a,n);
dis(b,n);
return 0;
}
void in(int *p,int *r)
{
	printf("enter the elemenets iN ARRAY");
  while(p<=r)
{
	scanf("%d",p++);
}
}
void dis(int *a,int n)
{
for(int i=0;i<n;i++)
	printf("%d  ",a[i]);
printf("\n");
}