



#include<stdio.h>
#define ELEMENT 5

void print_array(int *,int);


main()
{
	int array[ELEMENT],element=0,temp=0;
	element = sizeof(array)/sizeof(array[0]);

	for(temp=0;temp<element;temp++)
	{
		scanf("%d",&array[temp]);
	}	

	print_array(array,element);

	for(temp=0;temp<element;temp++)
	{
		printf("%d ",array[temp]);
	}

printf("\n");	
}

void print_array(int *ptr,int element)
{
	int temp1=0,temp2=0,variable=0;
	
	for(temp1=0;temp1<element;temp1++)
	{
		for(temp2=temp1+1;temp2<element;temp2++)
		{
			if(ptr[temp1] > ptr[temp2])
			{
				variable = ptr[temp1];
				ptr[temp1] = ptr[temp2];
				ptr[temp2] = variable;
			}
		}
	}

}
