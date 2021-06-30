



#include<stdio.h>
main()
{
	FILE *fptr=0;
	
	fptr = fopen("data","r");
	if(fptr == 0)
	{
		printf("file not present\n");
		return;
	}
	else
	{
		printf("fptr = %u	ftell = %u\n",fptr,ftell(fptr));
		fgetc(fptr);
		printf("fptr = %u	ftell = %u\n",fptr,ftell(fptr));
		fgetc(fptr);
		printf("fptr = %u	ftell = %u\n",fptr,ftell(fptr));
	}


}
