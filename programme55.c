/*



*/

#include<stdio.h>
main()
{
	int number=0,sum=0;

	printf("enter number\n");
	scanf("%d",&number);

	for(;number;number/=10)
	{
		sum = sum+(number%10);	
	}

printf("sum = %d\n",sum);
}
