#include<stdio.h>
int main()
{
	int a ;
	printf("Enter the age of the person: ");
	scanf("%d",&a);
	if (a>=18)
	{
		printf("Eigibal for voting");
	}
	else
	{
		printf("Not eligibal for voting\n");
		printf("he will be allowed for voting after %d years\n",18-a);
	}	
	return 0;
}
