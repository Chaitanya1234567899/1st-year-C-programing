#include<stdio.h>
#include<conio.h>
void swapv(int*x,int*y);
void main()
{
int a=10,b=12;
clrscr ();
swapv(&a,&b);
printf("\n a=%d b=%d",a,b);
getch();
}


void swapv(int*x,int*y)
{
int t;
t=*x;
*x=*y;
*y=t;
printf("\n x=%d y=%d",*x,*y);
}

