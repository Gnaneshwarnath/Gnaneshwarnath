#include<stdio.h>
int main()
{
int year;
printf("enter a leap year:");
scanf("%d",&year);
if((year%400)==0)
printf("%d is a leap year\n",year);
else if((year%4)==0)
printf("%d is a leap year\n",year);
else
printf("not a leap year\n",year);
return 0;
}
