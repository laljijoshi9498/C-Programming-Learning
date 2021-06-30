



#include<stdio.h>

void print_array(int *,int);

main()
{
	int array[5]={1,2,3,4,5},element=0;

	element = sizeof(array)/sizeof(array[0]);

	print_array(array,element);

}

void print_array(int *ptr,int element)
{
	int temp=0;
	
	for(temp=0;temp<element;temp++)
	{
		printf("%d\n",ptr[temp]);
	}

}
