#include<stdio.h>
main()
{
	char a;
	char word[200];
	char sen[200];
	printf("enter a character:");
	scanf("%c",&a);
	printf("\nenter a word:");
	scanf(" %s", &word);
	printf("enter a sentence:");
	scanf(" %[^/n]",&sen);
	printf("%c\n%s\n%s", a, word, sen);
	
}
