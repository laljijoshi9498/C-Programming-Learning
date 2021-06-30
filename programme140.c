



#include<stdio.h>
#define ROW 3
#define COLUM 3

main()
{
	int temp1=0,temp2=0,array[ROW][COLUM]={{10,20,30},{40,50,60},{70,80,90}};
	
	for(temp1=0;temp1<ROW;temp1++)
	{
		for(temp2=0;temp2<COLUM;temp2++)
		{
			printf("%d ",array[temp1][temp2]);
		}
	printf("\n");
	}
	

}
