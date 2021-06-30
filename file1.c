



#include<stdio.h>
main()
{
	FILE *ptr=0;

	ptr = fopen("text.txt","r");
	if(ptr == 0)
	{
		printf("file not presetn\n");
	}
	else
	{
		printf("file present\n");
	}

}
