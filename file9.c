



#include<stdio.h>
main()
{
int i=123456;
FILE *fptr=0;

	fptr = fopen("data","w");
	if(fptr == 0)
	{
		printf("file nor present\n");
		return;
	}
	else
	{
		fwrite(&i,sizeof(i),1,fptr);
	}

fclose(fptr);
}
