



#include<stdio.h>
main()
{
	int number=0,position=31;

	printf("enter number\n");
	scanf("%d",&number);

	for(position=31;position>=0;position--)
	{
		printf("%d ",(number>>position)&1);
	}

printf("\n");
}
