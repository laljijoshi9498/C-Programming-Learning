



#include<stdio.h>
#define ROW 5
#define COLUM 10
main()
{
	char string[ROW][COLUM];
	int temp=0;

	for(temp=0;temp<ROW;temp++)
	{
		printf("enter string\n");
		scanf(" %[^\n]",string[temp]);
	}

	for(temp=0;temp<ROW;temp++)
	{
		printf("string = %s\n",string[temp]);
	}

}

