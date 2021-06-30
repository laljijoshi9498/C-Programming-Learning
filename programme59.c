/*

*/


#include<stdio.h>
main()
{
	int number=0,temp=0,sum=0;

	printf("enter number\n");
	scanf("%d",&number);

	for(temp=1;temp<number;temp++)
	{
		if(number%temp == 0)
		{
			sum = sum + temp;
		}
	}

	
	if(number == sum)
	{
		printf("perfect\n");
	}
	else
	{
		printf("not perfect\n");
	}

}
