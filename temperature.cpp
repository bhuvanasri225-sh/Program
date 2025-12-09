#include<stdio.h>
main()
{
	float fahrenheit,celsius;
	printf("Enter fahrenheit value:");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)/1.8;
	printf("temperature in celsius:%f",celsius);
}
