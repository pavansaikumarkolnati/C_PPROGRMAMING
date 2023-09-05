/*
4.free(
-this function is used to free up the memory used by dynamic memory allocation
-SYNTAX: void free(pvarible);
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{ int *p,i;
	p=(int*)malloc(2*sizeof(int));
	if(p!=NULL)	
		{printf("enter the values\n");
			for(i=0;i<3;i++)
			{
				scanf("%d",p+i);
			}}
		else
		{
			printf("insufficiant memory");
			exit(1);

		}
		for(i=0;i<3;i++)
			{
				printf("%d  ",*(p+i));
			}
			printf("%u-->",p);
			free(p);//			after deallocating the p it points to some garbage value;
			printf("%u",p);
			for(i=0;i<3;i++)
			{
				printf("%d  ",*(p+i));
			}



return 0;
}