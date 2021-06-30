



#include<stdio.h>
main()
{
	int number1=10,number2=20,number3=30;

	number1=number2+number3;
	printf("%d %d %d\n",number1,number2,number3);
	
	number1=number2=number3;
	printf("%d %d %d\n",number1,number2,number3);

	number1=number2=number3=100;
	printf("%d %d %d\n",number1,number2,number3);

	/*
		1000=10; //error lvalue requred
	*/
}
