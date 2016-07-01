#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],b[5],i,j,sum=0;
clrscr();
printf("Enter first array :\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("Enter second array :\n");
for(j=0;j<5;j++)
{
scanf("%d",&b[j]);
}
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
if(a[i]==b[j])
{
sum=sum+a[i];
}
}
printf("sum is %d\n",sum);
getch();
}
