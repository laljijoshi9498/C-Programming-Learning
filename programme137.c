



#include<stdio.h>

int print_string(char *);

main()
{
	char string[50];


	printf("enter string\n");
	scanf("%[^\n]",string);

	print_string(string);	

	printf("\n");
}

int print_string(char *string)
{
static int temp=0;

	if(string[temp] != '\0')
	{
		printf("%c ",string[temp]);
		temp++;
		print_string(string);
	}	
	else
	{
		return 1;
	}
	
//printf("\n");
}
