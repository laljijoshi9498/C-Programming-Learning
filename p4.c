



#include<stdio.h>
main()
{
	FILE *fptr=0;
	
	fptr = fopen("lalji.txt","r");
	if(fptr == 0)
	{
		printf("file not present\n");
		return;
	}
	else
	{
		char string[500];
		while(fgets(string,500,fptr))
		{
			printf("data -> %s",string);
		}
	}

}
