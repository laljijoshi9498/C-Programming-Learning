



#include<stdio.h>
main()
{
	char character=0;

	printf("enter number\n");
	scanf("%c",&character);

	switch(character)
	{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			printf("vovel\n");
			break;
		
	
		default:printf("option not available\n");
			break;
	}

}
