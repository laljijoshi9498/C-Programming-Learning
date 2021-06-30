



#include<stdio.h>
main()
{
	int number=0,position=0,*iptr=0;

	printf("enter number\n");
	scanf("%d",&number);
	
	iptr = &number;

	for(position=31;position >= 0;position--)
	{
		printf("%d ",(*iptr>>position)&1);
	}

printf("\n");
}
