#include<stdio.h>
#include<conio.h>
struct newdatatype{
int roll;
char name[20];
int marks;
};

int main()
{
clrscr();
struct newdatatype  st1;
printf("Enter Roll no");
scanf("%d",&st1.roll);
printf("Enter name");
scanf("%s",&st1.name);
printf("enter marks ");
scanf("%d",&st1.marks);
printf("\n roll no is %d",st1.roll);
printf("\n name is %s",st1.name);
printf("\n marks is %d",st1.marks);
getch();
}


