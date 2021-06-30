



#include<stdio.h>
main()
{
	int variable=0,array1[5]={1,2,3,4,5},array2[5]={10,20,30,40,50},temp=0,element=0;
	
	element = sizeof(array1)/sizeof(array1[0]);

	for(temp=0;temp<element;temp++)
	{
		variable = array1[temp];
		array1[temp] = array2[temp];
		array2[temp] = variable;
	}

	for(temp=0;temp<element;temp++)
	{
		printf("array1[temp] = %d\n",array1[temp]);
	}

	for(temp=0;temp<element;temp++)
	{
		printf("array2[temp] = %d\n",array2[temp]);
	}
}
