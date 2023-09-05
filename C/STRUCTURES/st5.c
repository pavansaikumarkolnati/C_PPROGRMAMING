/* NESDTED STURCTURES
-SYNTAX:
	struct salary
 		{
 char name;
 char department;
 struct
 {
 int dearness;
 int house_rent;
 int city;
 }
 allowance;
 }
 employee;
 */
#include<stdio.h>
struct emp{
	int salary;
	struct A{
		int d;
		int m;
		int h;
	}
	;
	int total;
	struct A a;
};
int main()
{int i;
struct emp p[2];
printf("enter the details\n");
for(i=0;i<2;i++)
{printf("enter the details of %d\n",i+1);
	scanf("%d",&p[i].salary);
	scanf("%d",&p[i].a.d);
	scanf("%d",&p[i].a.m);
	scanf("%d",&p[i].a.h);
	scanf("%d",&p[i].total);
	getchar();}
for(i=0;i<2;i++)
{
	printf("%5d %2d  %2d  %2d  %5d\n",p[i].salary,p[i].a.d,p[i].a.m,p[i].a.h,p[i].total);
}
return 0;
}
