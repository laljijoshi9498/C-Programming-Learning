/*



*/

#include<stdio.h>
main()
{
	int array[5],Largest=0,element=0,temp,SLargest=0;

	element = sizeof(array)/sizeof(array[0]);
	
	printf("enter element\n");
	
	for(temp=0;temp<element;temp++)
	{
		scanf("%d",&array[temp]);	
	}

		if(array[0] > array[1])
		{
			Largest = array[0];
			SLargest = array[1];
		}
		else
		{
			Largest = array[1];
			SLargest = array[0];
		}

	for(temp=2;temp<element;temp++)
	{
		if(Largest < array[temp])
		{
			SLargest = Largest;	
			Largest = array[temp];			
		}
		else if(array[temp] > SLargest)
		{
			SLargest = array[temp];
		}
	}

printf("Largest = %d\nSLargest = %d\n",Largest,SLargest);
}
