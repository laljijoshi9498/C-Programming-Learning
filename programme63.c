/*
WAP print prime number which are available in 50 to 100
*/

#include<stdio.h>
main()
{
	int number=0,temp=0;
	
	for(number=10;number<=100;number++)
	{	
		for(temp=2;temp<number;temp++)
		{
			if(number%temp == 0)
			{
				break;
			}
		}
		
		if(number == temp)
		{
			printf("%d ",number);
		}	
	}

printf("\n");
}
