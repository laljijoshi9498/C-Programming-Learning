



#include<stdio.h>
#define ROW 3
#define COLUM 3

main()
{
	int array[ROW][COLUM];
	
	printf("%d\n",sizeof(array));
	printf("%d\n",sizeof(array[0]));
	printf("%d\n",sizeof(array[0][0]));
}
