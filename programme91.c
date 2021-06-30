/*
WAP to scan 5 array of ineteger and revers the array of inetreger print on screen


*/
#include<stdio.h>
main()
{
	int array[5],element=0,temp=0,temp1=0,count=0;
	
	element = sizeof(array)/sizeof(array[0]);

	for(temp=0;temp<element;temp++)
	{
		scanf("%d",&array[temp]);
	}	
	
	
	for(temp=0;temp<element;temp++)
	{
		for(temp1=2;temp1<array[temp];temp1++)
		{
			if(array[temp]%temp1 == 0)
			{
				break;
			}
		}
		
		if(array[temp] == temp1)
		{	
			count++;
			printf("prime = %d\n",array[temp]);
		}		
	}

printf("totale prime is = %d\n",count);
}
