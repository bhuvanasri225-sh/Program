#include<stdio.h>
main()
{
	int age;
	float weight;
	char gender;
	char name[200];
	printf("enter a name:");
	scanf("%s",&name);
	printf("enter your age:");
	scanf("%d",&age);
	printf("enter your weight:");
	scanf("%f",&weight);
	printf(" enter your gender:");
	scanf(" %c",&gender);
	printf("%s\n%d\n%f\n%c",name,age,weight,gender);
		}
