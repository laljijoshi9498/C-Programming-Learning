/*
factorial number
*/

#include<stdio.h>
main()
{
	int number=0,factorial=0;

	printf("enter number\n");
	scanf("%d",&number);

	for(number,factorial=1;number>0;number--)
	{
		factorial = factorial * number;
	}

printf("factorial = %d\n",factorial);
}
