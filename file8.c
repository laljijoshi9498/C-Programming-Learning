



#include<stdio.h>
main(int argc,char **argv)
{
	FILE *fptr=0;
		int count=0;
	
	if(argc != 2)
	{
		printf("give two argument\n");
		return;
	}
	else
	{
		fptr = fopen(argv[1],"r");
		if(fptr == 0)
		{
			printf("file not present\n");
			return;
		}
		else
		{
		char character;

			while((character = fgetc(fptr)) != EOF)
			{
				if(character == ' ')
				{
					count++;
				}
				else if(character == '\n')
				{
					count++;
				}				
			}
		}
	}

printf("total word = %d\n",count);
}
