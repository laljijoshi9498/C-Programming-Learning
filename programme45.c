/*

*/

#include<stdio.h>
main()
{
	int number1=10,number2=20,number3;

	printf("number1 = %d\nnumber2 = %d\n",number1,number2);
	
	number3 = number1++ + ++number2 + ++number1 + number2++ + number1++;
	
	printf("number1 = %d\nnumber2 = %d\nnumber3 = %d\n",number1,number2,number3);
}
