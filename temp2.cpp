#include<stdio.h>
main()
{
	float celsius,fahrenheit;
	printf("Enter celsius value:");
	scanf("%f",&celsius);
	fahrenheit=(celsius*1.8)+32;
	printf("Temperature in fahrenheit:%f",fahrenheit);
}
