#include<stdio.h>
main()
{
	int a,b;
	printf("enter a and b values:");
	scanf("%d%d",&a,&b);
	printf("\n*****bitwise operations*****");
	printf("\nusing bitwise operator AND(&):%d",a&b);
	printf("\nusing bitwise operator OR(|):%d",a|b);
	printf("\nusing bitwise operator XOR(^):%d",a^b);
	printf("\nusing bitwise operator LEFTSHIFT(<<):%d",a<<b);
	printf("\nusing bitwise operator RIGHTSHIFT(>>):%d",a>>b);
	printf("\nusing bitwise operator(~):%d",~a);
}
