/*

*/

#include<stdio.h>
main()
{
	int number1=10,number2=20;

	printf("number1 = %d\nnumber2 = %d\n",number1,number2);
	
	number1 = number1++ + ++number2;
	
	printf("number1 = %d\nnumber2 = %d\n",number1,number2);
}
