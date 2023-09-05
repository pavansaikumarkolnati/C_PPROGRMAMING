/*
DYANAMIC MEMORY ALLOCATION 
-in this memory alloacation is done at the run time in the heap 
there are four main functions are there
	1-malloc 
	2-calloc
	3-realloc 
	4-free
1.malloc:
-malloc is used to alloacte single block of memory to a pointer
-SYNTAX: p varible=(dtype8*)malloc(num*sizeof(dtype));
		ex: int *p=(int*)malloc(4*sizeof(int));
-it returns void pointer on success and null pointer on failure 
-it intializes alla the values with garbage 
it runs spped than calloc
PROGRAM*/
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

return 0;
}