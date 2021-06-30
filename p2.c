


#include<stdio.h>
main()
{
	int number[5] = {0};
	int temp=0;
	FILE *fptr=0;

	fptr = fopen("lalji.txt","r");
	if(fptr == 0)
	{
		printf("file not present\n");
	}
	else
	{
		printf("scan data to file\n");
		
		for(temp = 0;temp < 5;temp++)
		{
			fscanf(fptr,"%d",&number[temp]);
		}

		for(temp = 0;temp < 5;temp++)
		{
			printf("%d \n",number[temp]);
		}

	fclose(fptr);
	}
}
