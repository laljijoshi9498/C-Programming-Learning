/*
WAP to 'a' to 'z' put is a Lower,'A' to 'Z' put is upper,'0' to '9' put is ditgi and '@','$' is special character
*/

#include<stdio.h>
main()
{
	char character;
	
	printf("enter character\n");
	scanf("%c",&character);

	if(character >= 'a' && character <= 'z')
	{
		printf("Lower \n");
	}
	else if(character >= 'A' && character <= 'Z')
	{
		printf("Upper\n");
	}
	else if(character >= '0' && character <= '9')
	{
		printf("digit\n");
	}
	else
	{
		printf("special character\n");
	}
}
