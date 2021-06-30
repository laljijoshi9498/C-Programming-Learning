

#include<stdio.h>
main(int argc,char **argv)
{
FILE *fptr=0;
char character=0;
unsigned int counter=0;

	if(argc != 3)
	{
		printf("enter three argument executablefile , filename , character\n");
		return;
	}
	else
	{
		fptr = fopen(argv[1],"r");
		if(fptr == 0)
		{
			printf("file not present\n");
		}
		else
		{
			while((character =fgetc(fptr)) != EOF)
			{
				if(character == (argv[2][0]))
				{
					counter++;
				}
			}
		}
	
	}

printf("present character = %d\n",counter);
}
