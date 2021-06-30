



#include<stdio.h>
#define ELEMENT 50

int find_length(const char*);

main()
{
	char string[ELEMENT];
	int length=0;

	printf("enetr string\n");
	scanf("%[^\n]",string);

	length = find_length(string);
	printf("length = %d\n",length);
}

int find_length(const char*string)
{
	int count=0;

	while(*string)
	{
		count++;
		string++;	
	}
	
return count;
}
