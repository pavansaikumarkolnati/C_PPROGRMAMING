/*pointer to a constant 
-can't modify the value pointed by the pointer
-but the value will be changed by using direct varible
syNTax:
	 const datattype *P;*/
#include<stdio.h>
int main()
{
	int a=10,b=9;
	const int *p;
	p=&a;
	a=9;
	printf("%d",*(p));
	return 0;
}