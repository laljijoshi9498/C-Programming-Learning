/*



*/

#include<stdio.h>
main()
{
	int number=10;
	char *ptr;

	ptr = (char*)&number;

	if(*ptr == number)
	{
		printf("littale endian\n");
	}
	else
	{
		printf("big endian\n");
	}
}
