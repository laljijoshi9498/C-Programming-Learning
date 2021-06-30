



#include<stdio.h>

void swap_number(int*,int*);

main()
{
	int number1=0,number2=0;	
	
	printf("enter number\n");
	scanf("%d%d",&number1,&number2);

	swap_number(&number1,&number2);

	printf("after swap number1 = %d , number2 = %d\n",number1,number2);
}

void swap_number(int *number1,int *number2)
{
	int temp=0;

	temp=*number1;
	*number1=*number2;
	*number2=temp;
}
