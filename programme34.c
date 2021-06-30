/*
Set bit
*/

#include<stdio.h>
main()
{
	int number=0,position=0;

	printf("enter number\n");
	scanf("%d%d",&number,&position);

	number = number|(1<<position);
	
	printf("number = %d\n",number);
}
