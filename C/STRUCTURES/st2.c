/*
		STRUCTTURE INTIALIZATION
-by using "{}"
SYN: sturct name varible={ value1,value2,...};
There are a few rules to keep in mind while initializing structure variables at compile-time.
 1. We cannot initialize individual members inside the structure template.
 2. The order of values enclosed in braces must match the order of members in the structure defi nition.
 3. It is permitted to have a partial initialization. We can initialize only the fi rst few members and leave the remaining
blank. The uninitialized members should be only at the end of the list.
 4. The uninitialized members will be assigned default values as follows:
∑ Zero for integer and fl oating point numbers.
∑ ‘\0’ for characters and strings.*/
#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	int marks;

};
int main()
{
 struct student p={501,"pavan"};
 printf("%d %s %d",p.roll,p.name,p.marks);
 return 0;}
