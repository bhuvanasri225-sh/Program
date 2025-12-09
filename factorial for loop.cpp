#include<stdio.h>
int main()
{
	int n,i,p=1;
	printf("\nEnter n value:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		p=p*i;
	}
	printf("\n%d factorial is %d",n,p);
	return 0;
}
