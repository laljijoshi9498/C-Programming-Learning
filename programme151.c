


#include<stdio.h>
#include<string.h>

main(int argc,char** argv)
{
int length=0;

	if(argc != 2)
	{
		printf("enter TWO argument\n");
		return;
	}
	else
	{
		printf("- %s\n",argv[1]);
		length = strlen(argv[1]);
		printf("length = %d\n",length);
	}
}

