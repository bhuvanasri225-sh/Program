#include<stdio.h>
main()
{
	int age;
	float weight;
	char name[200];
	char gender;
	printf("enter a name:");
	scanf("%s",&name);
	printf("\n enter your age:");
	scanf("%d",&age);
	printf("\n enter your weight:");
	scanf("%f",&weight);
	printf("\nenter your gender:");
	scanf("  %c",&gender);
	printf("%s\n%d\n%f\n%c", name, age, weight, gender);
	}
