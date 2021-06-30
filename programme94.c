/*


*/
#include<stdio.h>
main()
{
	int number=0,array[5],element=0,temp=0,sum=0;
	
	element = sizeof(array)/sizeof(array[0]);

	for(temp=0;temp<element;temp++)
	{
		scanf("%d",&array[temp]);
	}	
	

	for(temp=0;temp<element;temp++)
	{
		for(sum=0,number=array[temp];number;number/=10)
		{
			sum = sum *10 + number%10;
		}
		
		array[temp]=sum;	
	}	

	for(temp=0;temp<element;temp++)
	{
		printf("%d\n",array[temp]);
	}	


}
