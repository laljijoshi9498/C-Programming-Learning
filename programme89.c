/*



*/
#include<stdio.h>
main()
{
	int array[5],element=0,temp=0;
	
	element = sizeof(array)/sizeof(array[0]);

	for(temp=0;temp<element;temp++)
	{
		scanf("%d",&array[temp]);
	}	

	for(temp=0;temp<element;temp++)
	{
		printf("%d\n",array[temp]);
	}	
}
