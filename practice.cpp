#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("Enter n value:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		
	}
	printf("Sum of %d natural numbers is %d",n,sum);
	return 0;
}
