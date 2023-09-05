//Write a C program to concatenate two strings using loop character by character
#include<stdio.h>
#include <stdbool.h>                                                                                                                                    
#include<string.h>
int main()
{
	char s[40],s1[20],s3[20];
	int l,i=0;
	printf("\n enter the string\n");
	fgets(s,20,stdin);
	fgets(s1,20,stdin);
	l=strlen(s)-1;
	while(s1[i]!='\0')
	{ s[l]=s1[i];
		i++;
		l++;
	}
	s[l]='\0';
	printf("%s\n",s);
	strcat(s3,s);
	printf("%s",s3);//using string fun
	return 0;
}