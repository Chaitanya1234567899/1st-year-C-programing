#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,t,k;
int x[10]={22,44,55,66,77,88,99,44,33};
clrscr();
 for(i=0;i<=9;i++)
 {
  for(j=0;j<=9;j++)
  {
  if(x[j]>x[j+1])
  {
   t=x[j];
   x[j]=x[j+1];
   x[j+1]=t;
   }
  }
 }
 for(i=0;i<=9;i++)
 {
 printf("Enter the value inorder to find");
 scanf("%d",&k);
 printf("%d",x[10-k]);
 }
getch();
}