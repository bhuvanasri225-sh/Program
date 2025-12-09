#include<stdio.h>
main()
{
	char ch;
	char word[20];
	char sen[200];
	printf("enter a single character:");
	scanf("%c",&ch);
	printf("enter a word:");
	scanf("%s",&word);
	printf("enter a sentence:");
	scanf(" %[^\n]",&sen);
	printf("%c\n%s\n%s",ch,word,sen);	
}
