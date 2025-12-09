#include<stdio.h>
main()
{
	int s1,s2,s3,s4,s5,total,average;
	printf("enter s1 marks:");
	scanf("%d",&s1);
	printf("enter s2 marks:");
	scanf("%d",&s2);
	printf("enter s3 marks:");
	scanf("%d",&s3);
	printf("enter s4 marks:");
	scanf("%d",&s4);
	printf("enter s5 marks:");
	scanf("%d",&s5);
	total=s1+s2+s3+s4+s5;
	printf("The total sum is %d",total);
	average=total/5;
	printf("\nThe average of 5 subjects is %d",average);
}
