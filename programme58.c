/*

*/


#include<stdio.h>
main()
{
	int number=0,temp=0;

	printf("enter number\n");
	scanf("%d",&number);

	for(temp=2;temp<number;temp++)
	{
		if(number%temp == 0)
		{
			break;
		}
	}

	
	if(number == temp)
	{
		printf("prime\n");
	}
	else
	{
		printf("not prime\n");
	}

}
