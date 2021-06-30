



#include<stdio.h>
#include<string.h>
main()
{
	char string[50];
	int length=0;
	
	printf("enter string\n");
	scanf("%[^\n]",string);

	length = strlen(string);
	printf("length = %d\n",length);
}
