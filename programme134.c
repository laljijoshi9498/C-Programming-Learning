



#include<stdio.h>

int fact_number(int);

main()
{
	int number=0,results=0;

	printf("enter number\n");
	scanf("%d",&number);

	results = fact_number(number);

	printf("results = %d\n",results);
}

int fact_number(int number)
{
	if(number)
	{
		return number*fact_number(number-1);
	}
	else
	{
		return 1;
	}
	

}
