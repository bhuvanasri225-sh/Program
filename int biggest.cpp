#include<stdio.h>
int biggest();
int main()
{
	int big;
	big=biggest();
	printf("Biggest value is %d",big);
	return 0;
}
int biggest()
{
	int a,b,c;
	printf("Enter a nd b&c values:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	return a;
	else if(b>c)
	return b;
	else
	return c;
}
