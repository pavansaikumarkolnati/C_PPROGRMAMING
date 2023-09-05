/*
		 STRUCTURES
-these are used to define a heterogenous data types
-	SYN:
 struct name {
	memeber 1;
	memebr 2;
};
-it can be accessible through by structure varible
		SYNTAX: struct name varible;
-structure can be accessible by using "." or "->" operators 
*/
#include<stdio.h>
struct student
{
	int roll;
	char name[20];

};
int main()
{
 struct student p,*q;
 q=&p;//pointer to a sturcture
printf("enter the roll and name");
scanf("%d %s",&p.roll,&p.name);
printf("\n%d %s",p.roll,p.name);//by using vvarible
printf("\n%d %s",q->roll,q->name);//by using pointer 
return 0;
}