



#include<stdio.h>
main(int argc,char **argv)
{
	FILE *ptr=0;
	
	if(argc != 2)
	{
		printf("give two arguments\n");
		return;
	}
	else
	{

		ptr = fopen(argv[1],"r");
		if(ptr == 0)
		{
			printf("file not presetn\n");
		}
		else
		{
			printf("file present\n");
		}
	}
}
