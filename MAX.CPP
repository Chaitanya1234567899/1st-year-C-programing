#include<stdio.h>
#include<conio.h>
void main ()
{
 int i,j,max;
 clrscr();
 printf("enter the maximum number ofintegers");
 scanf("%d",&max);
 for(i=1;i<=max;i++)
 {
  printf("\n");

  for(j=1;j<=i;j++)
  {
   printf("%d",j
  );
  }
 }
 getch();
}