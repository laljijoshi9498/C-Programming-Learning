



#include<stdio.h>
main()
{
	int number=0;

	printf("enter number\n");
	scanf("%d",&number);

	switch(number)
	{
		case 1:printf("1\n");
			break;
		
		case 2:printf("2\n");
			break;

		case 3:printf("3\n");
			break;
	
		default:printf("option not available\n");
			break;
	}

printf("done\n");
}
