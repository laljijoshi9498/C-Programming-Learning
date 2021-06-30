/*
WAP to scan 5 array of ineteger and revers the array of inetreger print on screen


*/
#include<stdio.h>
main()
{
	int array[5],element=0,temp=0,temp1=0,temp2=0,temp3=0;
	
	element = sizeof(array)/sizeof(array[0]);

	for(temp=0;temp<element;temp++)
	{
		scanf("%d",&array[temp]);
	}	

	for(temp2=0,temp3=element-1;temp2<=temp3;temp2++,temp3--)
	{
		temp1=array[temp2];
		array[temp2] = array[temp3];
		array[temp3] = temp1;
	}	

	
	printf("after revers\n");
	for(temp=0;temp<element;temp++)
	{
		printf("%d\n",array[temp]);
	}	
}
