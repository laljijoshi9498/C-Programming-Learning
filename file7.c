



#include<stdio.h>
main(int argc,char **argv)
{
	FILE *fptr = 0;
	int linelength =0,count=0;
	char character =0;

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
			linelength=0;
			while((character = fgetc(fptr)) != EOF)
			{
				if(character != '\n')
				{
					count++;
				}
				else
				{
					if(linelength <= count)
					{
						linelength = count;
						count = 0;
					}
					else
					{
						linelength = linelength;
						count=0;
					}	
				}
			}
		}
		
	
	}
	
fclose(fptr);

printf("linelength = %d\n",linelength);

}
