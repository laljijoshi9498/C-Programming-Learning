


#include<stdio.h>
main()
{
	int number=0,variable1=0,variable2=0,position=0;

	printf("enter number\n");
	scanf("%d",&number);

	for(position=31;position>=0;position--)
	{
		printf("%d ",(number>>position)&1);
	}
	printf("\n");


	for(variable1=0,variable2=31;variable1 < variable2 ;variable1++,variable2--)
	{
		if((number>>variable1&1) != (number>>variable2&1))
		{
			number = number^1<<variable1;
			number = number^1<<variable2;
		}
	}

	printf("after\n");
	for(position=31;position>=0;position--)
	{
		printf("%d ",(number>>position)&1);
	}
	printf("\n");

}
