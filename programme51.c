/*
WAP to display multiplication table using goto statment
*/


#include<stdio.h>
main()
{
	int number=0,serialnumber=1;
	
	printf("enter number multiplication table\n");
	scanf("%d",&number);
	
	L1:
	printf("%d*%d = %d\n",serialnumber,number,serialnumber*number);
	serialnumber = serialnumber+1;

	if(serialnumber <= 10)
	goto L1;
}
