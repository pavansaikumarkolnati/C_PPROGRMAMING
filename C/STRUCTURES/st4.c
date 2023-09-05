/*ARRAYS OF STRUCTURES
 For example:
 struct class student[200];
defi nes an array called student, that consists of 200 elements. Each element is defi ned to be of the type struct
class. Consider the following declaration:
 struct marks
 {
 int subject1;
 int subject2;
 int subject3;
 Structures and Unions 12.9
 };
 main()
 {
 struct marks student[3] =
 {{45,68,81}, {75,53,69}, {57,36,71}};
 This declares the student as an array of three elements student[0], student[1], and student[2]
 */
#include<stdio.h>
#include<string.h>
#include<conio.h>
struct student
{
	int roll;
	char name[20];
	int marks;
};
int main()
{
	struct student a[3];
	printf("enter the  mid marksof the studnets\n");
	for(int i=0;i<3;i++)
	{ printf("student no %d.\n\n",i+1);
 printf("student name\n");
        scanf("%[^\n]*s",&a[i].name);
printf("student roll\n");
		scanf("%d",&a[i].roll);
        printf("student marks\n");
        scanf("%d",&a[i].marks);
	getchar();
}
    
for(int i=0;i<3;i++)
{  printf("%20d.            ",i+1);
    printf("%20s                  ",a[i].name);
    printf("%5d     ",a[i].roll);
   printf("     %5d\n",a[i].marks);
}
return  0;
}
