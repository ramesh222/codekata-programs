#include<stdio.h>
int main()
{
int a,b;
printf("enter the year");
scanf("%d",a);
printf("entered year is %d,a);
while(a%4!=0)
{
a++;
}
printf("\nupcoming leap  years are");
for(b=0;b<20;b++)
{
a=a+4;
printf("\n%d",a);
return 0;
}

