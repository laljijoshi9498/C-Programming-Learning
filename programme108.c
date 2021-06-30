



#include<stdio.h>
main()
{
	char string[10];
	
	printf("enter string\n");
	scanf("%[^\n]",string);
	
	printf("enter string\n");
	gets(string);

	printf(" %s\n",string);
	puts(string);
}	
