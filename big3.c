#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c;
clrscr();
printf("\n Enter the three numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("\n a is biggest");
else if(b>c)
printf("\n b is biggest");
else
printf("\n c is biggest");
getch();
}
