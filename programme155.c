/*
wrong output
*/



#include<stdio.h>

float my_atof(char *);

main()
{
	char string[50]="12.34";
	float number=0;

	number = my_atof(string);
	printf("number = %f\n",number);
}

float my_atof(char *string)
{
int count=0,number1,number2,number3;

	while(*string)
	{
		if((*string != '.') && (count==0))
		{
			number1 = number1*10+(*string)-48;
		}
		else
		{
			count++;
		}

		if(*string != '.')
		{
			number2 = number2*10+(*string)-48;
		}
		
	string++;	
	}

return number3 = number1+number2;
}
