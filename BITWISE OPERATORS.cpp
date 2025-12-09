#include<stdio.h>
main()
{
	int a,b;
	printf("enter a and b values:");
	scanf("%d%d",&a,&b);
	printf("using bitwise operator AND(&):%d",a&b);
	printf("\nusing bitwise operator OR(|):%d",a|b);
	printf("\nusing bitwise operator XOR(^):%d",a^b);
	printf("\nusing bitwise operator LEFT SHIFT(<<):%d",a<<b);
	printf("\nusing bitwise operator RIGHT SHIFT(>>):%d",a>>b);
}
