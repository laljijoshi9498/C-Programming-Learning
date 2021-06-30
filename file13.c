




#include<stdio.h>
#include "header.h"

main(int argc,char **argv)
{
	FILE *fptr = 0;
	
	if(argc != 2)
	{
		DEBUG
	} 
	else
	{
		fptr = fopen(argv[1],"r");
		if(fptr == 0)
		{
			DEBUG
		}
		else
		{
		char character=0,char2=0;
			while((character = fgetc(fptr)) != EOF)
			{
				if(character == '<')
				{
					fseek(fptr,+1,SEEK_CUR);
					
					while((char2 = fgetc(fptr))!='>')
					{
						printf("%c ",char2);	
					}
				}
			}
		}
	}



}
