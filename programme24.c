



#include<stdio.h>
main()
{
	int number1=10,number2=20,number3;	
	
	number3=number1&&(number2=200);

	number3=number1||(number2=200);

	printf("number1 = %d , number2 = %d , number3 = %d\n",number1,number2,number3);
}
