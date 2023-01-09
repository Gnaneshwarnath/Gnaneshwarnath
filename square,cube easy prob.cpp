#include <stdio.h>
int main()
{
	int num,square,cube;
	printf("enter the number");
	scanf("%d",&num);
	if(num<0)
	{
		printf("invalid");
	}
	if(num>0)
	{
	square=num*num;
	cube=num*num*num;
	printf("square of number:%d ",square);
	printf("cube of the number:%d",cube);
    }
	return 0;
}
