#include<stdio.h>
int main()
{
	int count=0,n,a=1;
	printf("Enter n value:");
	scanf("%d",&n);
	while(a<=n)
	{
		if(n%a==0)
		{
			count++;
		}
		a++;
	}
	if(count==2)
	{
		printf("%d is a prime number",n);
	}
	else
	{
		printf("%d is not a prime number",n);
	}
	return 0;
}
