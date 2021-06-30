/*
WAP print prime number fisrt 15
*/

#include<stdio.h>
main()
{
	int number=0,temp=0,counter=1;
	
	for(number=10;counter<=15;number++)
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
			
		counter++;
		}	
	}

printf("\n");
}
