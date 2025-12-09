#include<stdio.h>
#include<string.h>
int main()
{
	char str1[200];
	printf("Enter any string");
	fgets(str1,200,stdin);
	strrev(str1);
	printf("\nReverse string %s",str1);
	return 0;
}
