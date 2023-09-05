//progrna to convert lower case to uppper case
#include<stdio.h>
#include<ctype.h>
int main()
{	char s[20];
	int i=0;
	printf("enter the string\n");
	scanf("%[^\n]*s",s);
	while(s[i]!='\0')
	{if(s[i]!=' '&&s[i]!=toupper(s[i]))
		s[i]=s[i]-32;
		i++;
	}
	printf("%s\n",s);
	printf("%c",toupper(s[0]));//using toupper fun
	return 0;
}