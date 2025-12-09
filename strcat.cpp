#include<stdio.h>
#include<string.h>
int main()
{
	char a[200],b[200];
	printf("\nEnter any string1:");
	gets(a);
	printf("Enter any string2:");
	gets(b);
	strcat(a,b);
	puts(a);
	return 0;
}
