


#include<stdio.h>
main()
{
	FILE *ptr=0;
	char character=0;
	ptr = fopen("lalji.txt","r+");
	if(ptr == 0)
	{
		printf("file not present\n");
		return;	
	}
	else
	{
		while((character = (fgetc(ptr))) != EOF)
		{
			printf("%c",character);
		}
	}

}
