/*



*/

#include<stdio.h>
main()
{
	int array[5],Largest=0,element=0,temp;

	element = sizeof(array)/sizeof(array[0]);
	
	printf("enter element\n");
	
	for(temp=0;temp<element;temp++)
	{
		scanf("%d",&array[temp]);	
	}

	Largest = array[0];
	for(temp=1;temp<element;temp++)
	{
		if(Largest < array[temp])
		{
			Largest = array[temp];
		}
	}

printf("Largest = %d\n",Largest);
}
