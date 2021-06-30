



#include<stdio.h>
main()
{
	int number1,number2,temp;

	printf("enter number\n");
	scanf("%d%d",&number1,&number2);

	printf("befor swap = %d %d\n",number1,number2);
	
	temp=number1;
	number1=number2;
	number2=temp;
	
	printf("after swap = %d %d\n",number1,number2);
}
