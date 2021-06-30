/*

*/


#include<stdio.h>
main()
{
	int number=0,number1=0,revers=0;

	printf("enter number\n");
	scanf("%d",&number);

	for(number1=number;number1;number1/=10)
	{
		revers = revers*10+(number1%10);
	}
	
	if(number == revers)
	{
		printf("palindrome\n");
	}
	else
	{
		printf("not palindrome\n");
	}

}
