#include<stdio.h>
main()
{
	int choice,n;
	printf("\n 1 kkd");
	printf("\n 2 hyd");
	printf("\n 3 vizag");
	printf("\n 4 kurnool");
	printf("\n enter your choice");
	scanf("%d",&choice);
	printf("\n enter tickets=");
	scanf("\n%d",&n);
	switch(choice)
	{
		case 1:
			printf("\nyour destination is kkd");
			printf("\nno.of tickets=%d",n);
			printf("\nthe ticket cost is 60");
			printf("\nThe total amount is %d",n*60);
			break;
		case 2:
			printf("your destination is hyd");
			printf("no.of tickets=%d",n);
			printf("the ticket cost is 1500");
			printf("The total amount is %d",n*1500);
			break;
		case 3:
            printf("your destination is vizag");
			printf("no.of tickets=%d",n);
			printf("the ticket cost is 500");
			printf("The total amount is %d",n*500);
			break;
		case 4:
		    printf("your destination is kurnool");
			printf("no.of tickets=%d",n);
			printf("the ticket cost is 700");
			printf("The total amount is %d",n*700);
			break;	
		
   }
}
