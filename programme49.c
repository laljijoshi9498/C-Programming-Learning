/*
WAP to enter key board to student marks and display it 
0-39 = fail
40-59 = D
60-69 = C
70-89 = B
90-100 = A

*/

#include<stdio.h>
main()
{
	int marks=0;
	
	printf("enter marks\n");
	scanf("%d",&marks);
	
	if(marks >= 0 && marks <= 39)
	{
		printf("fail\n");
	}
	else if(marks >= 90 && marks <= 100)
	{
		printf("grade A\n");
	}
	else if(marks >= 60 && marks <= 69)
	{
		printf("grade C\n");
	}
	else if(marks >= 70 && marks <= 89)
	{
		printf("garde B\n");
	}
	else if(marks >=40 && marks <= 59)
	{
		printf("grade D\n");
	}
}
