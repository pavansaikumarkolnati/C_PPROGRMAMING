
//			C program to find all roots of a quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d;
	float r1=0;
	float r2=0;
	float r3=0;
	printf("eneter three values\n");
	scanf("%f%f%f",&a,&b,&c);
	d=(b*b)-4*a*c;
	r1=-b/a;
	r2=(-b+sqrt(d))/(2*a);
 	r3=(-b-sqrt(d))/(2*a);
	if(d==0)
 	printf("one root %2f",r1);
 	else
 	{
 		if(d>1)
 		{
 			printf("%.2f %.2f",r2,r3);
 		}
 		else{
 			printf("imaginary roots %.2f+i%.2f and %.2f-%.2f",r1,r2,r1,r3);
 		}
 	}
	return 0;
}