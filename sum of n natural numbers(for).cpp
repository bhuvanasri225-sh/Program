#include<stdio.h>
int main()
{
	int n,sum=0,i=1;
	printf("Enter n value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("The sum of %d natural numbers is %d",n,sum);
	return 0;
}
