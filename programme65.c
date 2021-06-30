/*

*/

#include<stdio.h>
main()
{
	int number=0,number1=0,remainder=0,armstrong=0;

	printf("enter number\n");
	scanf("%d",&number);

	for(number1=number;number1;number1/=10)
	{
		remainder = number1%10;

		armstrong = armstrong + (remainder * remainder * remainder);
	}
	

	if(number == armstrong)
	{
		printf("armstrong\n");
	}
	else
	{
		printf("not armstrong\n");
	}
}
