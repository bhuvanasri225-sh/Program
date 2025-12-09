#include<stdio.h>
main()
{
	int s1,s2,s3,s4,s5,total,average;
	printf("Enter s1,s2,s3,s4,s5 marks:");
	scanf("\n%d%d%d%d%d%",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	printf("the total sum is %d",total);
	average=total/5;
	printf("the average is %d",average);
	
}
