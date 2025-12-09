#include<stdio.h>
void sample()
{
	static int x=10;
	x++;
	printf("x value is=%d\n",x);
}
int main()
{
	sample();
	sample();
	return 0;
}
