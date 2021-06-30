



#include<stdio.h>
main()
{
int i=123456;
FILE *fptr=0;

	fptr = fopen("data","r");
	if(fptr == 0)
	{
		printf("file nor present\n");
		return;
	}
	else
	{
		fread(&i,sizeof(i),1,fptr);
		printf("%d\n",i);
	}

fclose(fptr);
}
