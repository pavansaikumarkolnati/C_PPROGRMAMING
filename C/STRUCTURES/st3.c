/*We have used the dot operator to access the members of structure variables. In fact, there are two other ways. Consider
the following structure:
typedef struct
{
 int x;
 int y;
} VECTOR;
VECTOR v, *ptr;
ptr = & n;
The identifi er ptr is known as pointer that has been assigned the address of the structure variable n. Now, the members
can be accessed in three ways:
∑ using dot notation : n.x
∑ using indirection notation : (*ptr).x
∑ using selection notation : ptr –> x*/
#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    int marks;

};
int main()
{ int x;
 struct student p={501,"pavan",99};
 struct student q;
 q=p;//directly  coping value from one sturcture to another
 //struct student q={501,"pavan",99};
 x=(p.roll)==(q.roll)?1:0;
 printf("%d",sizeof(p));//size of sructure=int +char +int
 if(x==1)
 printf("both have sam e details %d %s %d\n",p.roll,p.name,p.marks);
else
    printf("diferent");
return 0;
 }
