/*
number even or odd using bitwise operator
*/

#include<stdio.h>
main()
{
	int number=0;

	printf("enter number\n");
	scanf("%d",&number);

	number&1 ? printf("odd\n") : printf("even\n");
}
