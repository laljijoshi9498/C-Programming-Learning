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
		for(temp1=temp+1;temp1<element;temp1++)
		{
			if(array[temp] > array[temp1])
			{
				variable = array[temp];
				array[temp] = array[temp1];
				array[temp1] = variable;
			}
		}
	}

	
	for(temp=0;temp<element;temp++)
	{
		printf("%d ",array[temp]);
	}

printf("\n");
}
