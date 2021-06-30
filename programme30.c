/*
using bitwise operator swap number
*/


#include<stdio.h>
main()
{
	int number1=0,number2=0;

	printf("enter number\n");
	scanf("%d%d",&number1,&number2);
	
	number1=number1^number2;
	number2=number1^number2;
	number1=number1^number2;

	printf("after swap = %d %d\n",number1,number2);	
}
