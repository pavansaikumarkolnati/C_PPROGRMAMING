/*
		NULL POINTER 
-pointer that can point to object of any data type 
- it is also called generic pointer
- we have to use the type casting for  using the void pointer
-	SYNTAX : *((datatpe *))p;
 	SYNTAX: void *p;
 	*/
#include<stdio.h>
int main()
{
	int a=20;
	char c='r';
	float b=8.0;
	void *p,*q,*s;
	p=&c;
	q=&a;
	s=&b;
	printf("%d%c%f",*((int *)q),*((char *)p),*((float *)s));
	return 0;
}