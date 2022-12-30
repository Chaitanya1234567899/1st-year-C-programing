#include<stdio.h>
#include<conio.h>
void main ()
{
int c[12],a[5]={1,2,4,6,7},b[7]={1,3,5,6,7,9,10},k,i=0,j=0;
clrscr();
for(k=0;k<=11;k++)
{if(a[i]<b[j] && j<7 && i<5 )
{c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
}
for(k=0;k<=11;k++)
{
printf("\n%d",c[k]);
}
getch();
}








