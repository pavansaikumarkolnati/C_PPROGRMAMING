#include<stdio.h>                        //program to print sum of n  numbers 
int main()
{
 int n,sum=0;
 printf("enter the number \n");
 scanf("%d",&n);
 for(int i=0;i<=n;i++)
 sum+=i;

printf("\n the sum of %d numbers is %d",n,sum);
return 0;
}