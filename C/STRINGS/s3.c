//Write a C program to compare two strings using loop character by character
#include<stdio.h>
#include <stdbool.h>                                                                                                                                    
#include<string.h>
int main()
{
	char s[20],s1[20],s3[20];
	int i=0;
	bool v=true;
	printf("\n enter the string\n");
	fgets(s,20,stdin);
	fgets(s1,20,stdin);
	while(s[i]!='\0'&&s1[i]!='\0')
	{ if(s1[i]!=s[i])
		v=false;
		i++;
	}
	v?printf("equAL"):printf("NOT equal");
	//printf("%s",strcpy(s3,s1));//using string fun
	return 0;
}