/*constant pointer
-it points to constant value through out the program 
- it has 2 rules
1.its value should be intialize during its declaration
2.its value cant be reassigned
syntax: datatype * const pointervarible;*/
#include<stdio.h>
int main()		
{		int a=10,b=9;
	 	int *const p=&a;
	 	printf("%d",*(p));
	 	return 0;
}