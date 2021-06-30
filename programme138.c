



#include<stdio.h>

int find_length(char *);

main()
{
	char string[50];
	int length=0;

	printf("enter string\n");
	scanf("%[^\n]",string);

	length = find_length(string);	
	printf("\n");
	printf("length = %d\n",length);
}

int find_length(char *string)
{
static int count=0;

	if(*string)
	{
		printf("%c ",*string);
		//temp++;
		count++;
		find_length(string+1);
	}	
	else
	{
		return count;
	}
	
//printf("\n");
}
