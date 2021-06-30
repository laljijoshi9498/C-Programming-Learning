


#include<stdio.h>
main()
{
	FILE *ptr=0;
	int count=0;
	ptr = fopen("lalji.txt","r+");
	if(ptr == 0)
	{
		printf("file not present\n");
		return;	
	}
	else
	{
		while((fgetc(ptr)) != EOF)
		{
			count++;
		}
	printf("size is = %d\n",count);
	}

}
