#include<stdio.h>
int main()
{
	char a[200],b[200];
	int i;
	printf("Enter any string:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	printf("\nCopied data is %s",b);
	return 0;
}
