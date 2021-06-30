


#include<stdio.h>
main()
{
	int number[5] = {0};
	int temp=0;
	FILE *fptr=0;

	fptr = fopen("lalji.txt","w");
	if(fptr == 0)
	{
		printf("file not present\n");
	}
	else
	{
		printf("print data to file\n");
		
		for(temp = 0;temp < 5;temp++)
		{
			scanf("%d",&number[temp]);
		}

		for(temp = 0;temp < 5;temp++)
		{
			fprintf(fptr,"%d ",number[temp]);
		}
	

	fclose(fptr);
	}
}
