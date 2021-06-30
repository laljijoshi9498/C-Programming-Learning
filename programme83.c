



#include<stdio.h>
main()
{
	int number1=10,number2,*iptr=&number1;

	printf("number1 = %d	number2 = %d	*iptr = %d\n",number1,number2,*iptr);
	number2 = ++*iptr;
	printf("number1 = %d	number2 = %d	*iptr = %d\n",number1,number2,*iptr);
}
