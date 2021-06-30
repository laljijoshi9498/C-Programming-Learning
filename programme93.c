/*


*/
#include<stdio.h>
main()
{
	int number=0,array[5],element=0,temp=0,temp1=0,count=0,armstrong=0,remainder=0;
	
	element = sizeof(array)/sizeof(array[0]);

	for(temp=0;temp<element;temp++)
	{
		scanf("%d",&array[temp]);
	}	
	
	
	for(temp=0;temp<element;temp++)
	{
		for(armstrong=0,number=array[temp];number;number/=10)
		{
			remainder = number%10;
			armstrong = armstrong + (remainder*remainder*remainder);
		}
	
		if(array[temp] == armstrong)
		{
			count++;
			printf("armstorng is = %d\n",array[temp]);
		}
	}

printf("totale armstrong  is = %d\n",count);
}
