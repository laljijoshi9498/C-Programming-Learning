



#include<stdio.h>

void print_binary(int);

main()
{
	int number=0;
	
	printf("enter number\n");
	scanf("%d",&number);

	print_binary(number);	

}

void print_binary(int num)
{
	int position=0;

	for(position=31;position>=0;position--)
	{
		printf("%d ",(num>>position)&1);
	}

printf("\n");
}
