/*
3.REALLOC:
-it is used to or reallocate the assigned values to higher or lower memory locations
SYNTAX: p varible=(dtype*)realloc(new size,p varible);
	ex:int *p=(int *)malloc(4*sizeof(int));
	   p=(int *)realloc(5,p);
	   */
#include<stdio.h>
#include<stdlib.h>
int main()
{ int *p,*q,a[2]={1,2};
	p=(int*)calloc(2,2*sizeof(int));
	q=(int*)realloc(p,2*sizeof(int));
	p=a;
	*p=199;
	*(p+1)=878;

	printf("%d %d--%u\n",*p,*(p+1),p);
	*(q+2)=12;
	printf("%d %d %d--%u",*q,*(q+1),*(q+2),q);
return 0;
}