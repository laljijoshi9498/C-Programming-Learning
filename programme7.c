



#include<stdio.h>
main()
{
	int number1,number2;

	printf("enter number\n");
	scanf("%d%d",&number1,&number2);

	printf("befor swap = %d %d\n",number1,number2);

	number1=number1+number2;
	number2=number1-number2;
	number1=number1-number2;	
	
	printf("after swap = %d %d\n",number1,number2);
}
