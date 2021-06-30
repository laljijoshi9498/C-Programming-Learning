



#include<stdio.h>
main()
{
	char string[50];
	int temp=0;

	printf("enter string\n");
	scanf("%[^\n]",string);

	for(temp=0;string[temp] != '\0';temp++)
	{
		printf("%c ",string[temp]);
	}

printf("\n");
}
