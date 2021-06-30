



#include<stdio.h>
main()
{
	int number1,number2,number3;

	printf("enter number\n");
	scanf("%d%d",&number1,&number2);

	number3=number1>>number2;

	printf("number3 = %d\n",number3);
}
