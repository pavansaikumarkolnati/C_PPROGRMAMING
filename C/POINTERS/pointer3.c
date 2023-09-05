#include<stdio.h> 
#define size 5     //progrm to copy one array to another using pointres
int main()
{
	int a[size];
	int b[size];
	int *p,*q,*r;
	p=a;
	q=b;
 	r=&a[size-1];
 	printf("enter the values");
 	for(int i=0;i<size;i++)
 	{
 		scanf("%d",(p+i));
 	}
 	while(p<=r)				//optimized code
 	{*(q)=*(p);
 		q++;
 		p++;
 	}
 	for(int i=0;i<size;i++)
 	{
 		printf("%d ",b[i]);
 	}

	/*for(int i=0;i<size;i++)#  		using for loop
	{ *(q+i)=*(p+i);
	}
	for(int j=0;j<size;j++)
	{
		printf("%d ",*(q+j));
	}*/
return 0;
}