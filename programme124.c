/*
problem not completed
*/



#include<stdio.h>

void print_string(const char*);

main()
{
	char *string;
	
	printf("enter string\n");
	scanf("%[^\n]",string);

	print_string(string);

}

void print_string(const char *string)
{
	int temp=0;

	while(*string)
	{
		printf("%c ",*string);
		
	}

	/*
	while(string[temp] != '\0')
	{
		printf("%c - ",string[temp]);
		temp++;
	}
	*/
printf("\n");
}


