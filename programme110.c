



#include<stdio.h>
main()
{
	char string1[50],string2[50];
	int temp=0;

	printf("enter string\n");
	scanf("%[^\n]",string1);

	for(temp=0;string1[temp] != '\0';temp++)
	{
		string2[temp] = string1[temp];
	}
	string2[temp]='\0';

	printf("source = %s\n",string1);
	printf("destination = %s\n",string2);

printf("\n");
}
