


#include<stdio.h>

int my_own_atoi(char*);

main()
{
	int number=0;
	char string[50] = "-123";

	number = my_own_atoi(string);

	printf("number = %d\n",number);
}

int my_own_atoi(char *string)
{
int temp=0,number=0;

	if(string[0] == '-')
	{
		temp=1;
	}
	else
	{
		temp=0;
	}

	for(temp;string[temp] != '\0';temp++)
	{
		if(string[temp] >= '0' && string[temp] <= '9')
		{
			number = number*10+string[temp]-48;
		}
		else
		{
			break;
		}
	}

if(string[0] == '-')
number = -number;

return number;
}
