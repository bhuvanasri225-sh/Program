#include<stdio.h>
int main()
{
	int n,sum=0,i=1;
	printf("Enter n value:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("The sum of %d natural numbers is %d",n,sum);
	return 0;
}
