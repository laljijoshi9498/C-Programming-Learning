/*
bubble short
*/

#include<stdio.h>
main()
{
	int array[5],variable=0,temp=0,element=0,temp1=0;
	
	element = sizeof(array)/sizeof(array[0]);

	printf("enter element\n");
	for(temp=0;temp<element;temp++)
	{
		scanf("%d",&array[temp]);
	}

	for(temp=0;temp<element;temp++)
	{
		for(temp1=0;temp1<element-1-temp;temp1++)
		{
			if(array[temp1] > array[temp1+1])
			{
				variable = array[temp1];
				array[temp1] = array[temp1+1];
				array[temp1+1] = variable;
			}
		}
	}
	
	for(temp=0;temp<element;temp++)
	{
		printf("%d ",array[temp]);
	}

printf("\n");
}
