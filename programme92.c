/*
WAP to scan 5 array of ineteger and revers the array of inetreger print on screen


*/
#include<stdio.h>
main()
{
	int array[5],element=0,temp=0,temp1=0,count=0,sum=0;
	
	element = sizeof(array)/sizeof(array[0]);

	for(temp=0;temp<element;temp++)
	{
		scanf("%d",&array[temp]);
	}	
	
	
	for(temp=0;temp<element;temp++)
	{
		for(temp1=1,sum=0;temp1<array[temp];temp1++)
		{
			if(array[temp]%temp1 == 0)	
			{
				sum = sum + temp1;
			}
		}
	
		if(sum == array[temp])
		{
			count++;
			printf("perfect is = %d\n",array[temp]);
		}
	}

printf("totale perfect is = %d\n",count);
}
