#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
				int i,j,rows;
				printf("Enter rows:");
				scanf("%d",&rows);
	      for(i=rows;i>=1;--i)
				{
						for(j=1;j<=i;++j)
						{
							printf("%d",j);
						}
					printf("\n");
				}
	getch();
}
