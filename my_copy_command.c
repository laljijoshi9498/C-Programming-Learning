




#include<stdio.h>
main(int argc, char ** argv)
{
	FILE *pointer1,*pointer2;
	char character=0;

	if(argc != 3)
	{
		printf("enter three argument\n");
		return;
	}
	else
	{
		pointer1 = fopen(argv[1],"r");
		pointer2 = fopen(argv[2],"w");

		while((character=fgetc(pointer1)) != EOF)
		{	
			fputc(character,pointer2);	
		}
	}
}
