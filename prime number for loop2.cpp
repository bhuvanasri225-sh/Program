#include<stdio.h>
int main()
{
    int n,count=0,a;
	printf("Enter n value:");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		if(n%a==0)
		{
			count++;
		}	
	}
	if(count==2)
	{
		printf("%d is a prime number.",n);
	}
	else
	{
		printf("%d is not a prime number",n);
		}
		return 0;	
}
