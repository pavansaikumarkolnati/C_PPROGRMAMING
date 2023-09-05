/*Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/

#include<stdio.h>
int main()
{ int unit,bill,rem=0;
	printf("enter the uniits\n");
	scanf("%d",&unit);
	if(unit<50)
		{bill=unit*0.50;
		printf("bill is%d",bill);}
	if(50<unit && unit<100)
		{
			bill=(unit*0.75)-(50*0.50);
			printf("bill is %d",bill);
		}
	if(100<unit<150)
	{
		bill=(unit*1.20)-(100*0.75)-(50*0.50);
		printf("bill is--> %d",bill);
	}
	return 0;

}