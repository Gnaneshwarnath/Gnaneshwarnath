#include<stdio.h>
int main()
{
	int arr1[10];
	int i,n,sum=0;
	int*pt;
	printf("input the total no of elements in array :");
	scanf("%d",&n);	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);	
	}
	pt=arr1;
	for(i=0;i<n;i++)
	{
		sum=sum+*pt;
		pt++;
	}
	printf("the sum of array is:%d\n",sum);
}
