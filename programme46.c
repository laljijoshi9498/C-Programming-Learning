/*
volatile kyeword
*/

#include<stdio.h>
main()
{
	int value = 0,memory = 0x123;
	volatile int *ptr = (int*)&memory;	// volatile keyword is used to not optim							ise memory //
	
	while(1)
	{
		value = *ptr;
		if(value)
		{
			break;	
		}
	}
	
return 0;
}

