



#include<stdio.h>
main()
{
	char string1[50];
	int temp=0,length=0;

	printf("enter string\n");
	scanf("%[^\n]",string1);

	for(length=0;string1[length] != '\0';length++);
	
	for(temp=length-1;temp>=0;temp--)
	{
		printf("%c ",string1[temp]);
	}

printf("\n");
}
