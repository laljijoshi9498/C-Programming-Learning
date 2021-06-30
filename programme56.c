/*



*/

#include<stdio.h>
main()
{
	int number=0,revers=0;

	printf("enter number\n");
	scanf("%d",&number);

	for(;number;number/=10)
	{
		revers = revers*10+(number%10);	
	}

printf("revers = %d\n",revers);
}
