//Write a C program to copy one string to another string 
#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],s1[20],s3[20];
	int i=0;
	printf("\n enter the string\n");
	fgets(s,20,stdin);
	while(s[i]!='\0')
	{
		s1[i]=s[i];
		i++;
	}
	s1[i]='\0';
	printf("%s",s1);
	printf("%s",strcpy(s3,s1));//using string fun
	return 0;
}