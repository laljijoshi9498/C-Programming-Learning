



#include<stdio.h>
int ROW=3,COLUM=3;

void print_array(int arr[ROW][COLUM])
{
	int temp1=0,temp2=0;

	for(temp1=0;temp1<ROW;temp1++)
	for(temp2=0;temp2<COLUM;temp2++)
	printf("%d ",arr[temp1][temp2]);

}

main()
{
	//int r=3,c=3;
	int arr[r][c]={{1,2,3},{4,5,6},{7,8,9}};
	
	print_array(arr);
}
