#include<stdio.h>
int main()
{
	int roll[1000],n,i;
	printf("\nEnter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter element at roll[%d] position:",i);
		scanf("%d",&roll[i]);
	}
	printf("\nArray elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",roll[i]);
	}
	return 0;
}
