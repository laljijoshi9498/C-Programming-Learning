

#include<stdio.h>
#include<stdlib.h>

main(int argc,char **argv)
{
FILE *fptr=0;
char character=0,*pointer=0;
unsigned int filesize=0;

	if(argc != 4)
	{
		printf("enter three argument executablefile , filename , character\n");
		return;
	}
	else
	{
		fptr = fopen(argv[1],"r+");
		if(fptr == 0)
		{
			printf("file not present\n");
		}
		else
		{
			while((character = fgetc(fptr)) != EOF)
			{
				filesize++;
			}
			rewind(fptr);

			pointer = malloc(filesize+1);
			
			int temp=0;
			while((character = fgetc(fptr)) != EOF)
			{
					pointer[temp++] = character;
			}
			pointer[temp] = '\0';

			rewind(fptr);

			for(temp=0;pointer[temp];temp++)
			{
				if(pointer[temp] == argv[2][0])
				{
					pointer[temp] = argv[3][0];
				}
			}

		for(temp=0;pointer[temp];temp++)
		{
			fputc(pointer[temp],fptr);
		}
		
		}
	
	}

}
