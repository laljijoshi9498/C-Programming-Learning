



#include<stdio.h>
main(int argc,char*argv[])
{
int position=0;

	if(argc != 2)
	{
		printf("enter TOW argument 1.execeutable file binary and 2. number\n");
		return;
	}
	else
	{
		
		for(position=31;position>=0;position--)
		{	

			printf("%d ",( (atoi(argv[1])) >> position) & 1);
		}
	
	printf("\n");	
	}
}
