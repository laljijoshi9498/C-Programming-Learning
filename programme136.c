



#include<stdio.h>

int print_binary(int);

main()
{
	int number=0,results=0;

	printf("enter number\n");
	scanf("%d",&number);

	results = print_binary(number);

	printf("\n");
	printf("results = %d\n",results);
}

int print_binary(int number)
{
static int position=31;

	if(position >= 0)
	{
		printf("%d ",(number>>position)&1);
		position--;
		print_binary(number);
	}
	else
	{
		return position=31;
	}
	
//printf("\n");
}
