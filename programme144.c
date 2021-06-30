



#include<stdio.h>
main()
{
	int number1=10,number2=20,number3=30,number4=40,number5=50;
	int *ptr[5];

	ptr[0]=&number1;
	ptr[1]=&number2;
	ptr[2]=&number3;
	ptr[3]=&number4;
	ptr[4]=&number5;

	printf("%d %d %d %d %d\n",*ptr[0],*ptr[1],*ptr[2],*ptr[3],*ptr[4]);
}
