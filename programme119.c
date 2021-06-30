



#include<stdio.h>

void prime_print(int,int);

main()
{
	int number1=0,number2=0;

	printf("enter number\n");
	scanf("%d%d",&number1,&number2);

	prime_print(number1,number2);
}

void prime_print(int number1,int number2)
{
int temp=0;

	for(;number1<=number2;number1++)
	{
		for(temp=2;temp<number1;temp++)
		{
			if(number1%temp == 0)
			{
				break;
			}
		}
	
		if(number1 == temp)
		{
			printf("%d ",number1);
		}
	}

printf("\n");
}
