/*
check power of 2 or not
*/


#include<stdio.h>
main()
{
	int number=0;
	
	printf("enter number\n");
	scanf("%d",&number);

	number&(number-1) ? printf("no power of 2\n") : printf("power of 2\n");
}
