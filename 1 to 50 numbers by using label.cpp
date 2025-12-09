#include<stdio.h>
int main()
{
	int a=1;
	aditya:
		printf("\na value is=%d",a);
		a++;
		if (a<=50)
		{
			goto aditya;
		}
		return 0;
}
