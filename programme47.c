/*
WAP a programme to scan a character from the user. display that character and its ASCII value only if is a small latter
*/

#include<stdio.h>
main()
{
	char character;
	
	printf("enter character\n");
	scanf("%c",&character);

	if(character >= 'a' && character <= 'z')
	{
		printf("character = %c\nASCII = %d\n",character,character);
	}
}
