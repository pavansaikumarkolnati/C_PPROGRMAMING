#include<stdio.h>///accessing elemnys inthe aray using pointres
int main()
{
	int *p[10];
	printf("enter the element");
	for( int i=0;i<5;i++)
	{
		scanf("%d",p+i);
	}
for(int i=0;i<5;i++)
	{
		printf("%d",*(p+i));
	}


}
