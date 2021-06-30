/*
Even or Odd
*/

#include<stdio.h>
main()
{
	int number=0;

	printf("enter number\n");
	scanf("%d",&number);

	number%2 == 0 ? printf("even\n") : printf("odd\n");
}
