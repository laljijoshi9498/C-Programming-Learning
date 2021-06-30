



#include<stdio.h>
#define BIGGEST(num1,num2) {if(num1>num2)\
				printf(#num1 "bigger");\
				else\
				printf(#num2 "smaller");}

main()
{
	int num1=10,num2=20;

	BIGGEST(num1,num2);
}
