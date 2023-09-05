/*
2.CALLOC
-calloc is also similar tothe malloc function but the 
 calloc allocats multilple blocks of memory 
 SYNTAC: pvairble=(dtpe*)calloc(numberof blocks,sizeof(dtpe));
  ex:int *p=(int*)calloc(3,sizeof(int));
-it returns void pointer on success and null pointer on failure 
-it intializes alla the values with "0"
it is sower than malloc
PROGRAM:*/
#include<stdio.h>
#include<stdlib.h>
int main()
{ int *p,i;
	p=(int*)calloc(2,2*sizeof(int));
	if(p!=NULL)	
		{/*printf("enter the values\n");
			for(i=0;i<3;i++)
			{
				scanf("%d",p+i);
			}*/}
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