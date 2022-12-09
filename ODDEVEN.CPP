#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int a,i;
for(i=0;i<=9;i++)
{
printf("\nenter any number");
scanf("%d",&a);
if(a%2==0)
{
printf("This number is even number");
}
else
{
printf("This number is odd number");
}
}
getch();
}




