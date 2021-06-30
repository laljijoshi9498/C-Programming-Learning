



#include<stdio.h>
#include "header.h"
main()
{
	FILE *fptr=0;

	fptr = fopen("data","r");
	if(fptr == 0)
	{
		DEBUG
	}
	else
	{
		fseek(fptr,0,SEEK_END);
		printf("file size if = %d\n",ftell(fptr));
	}


}
