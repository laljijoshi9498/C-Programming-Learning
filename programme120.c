



#include<stdio.h>
#define TRUE 1
#define FALSE 0

int palindrome_check(int);

main()
{
	int number=0,result=0;

	printf("enter number\n");
	scanf("%d",&number);

	result = palindrome_check(number);
	if(result)
	{
		printf("palindrome\n");
	}
	else
	{
		printf("not palindrome\n");
	}

}

int palindrome_check(int number)
{
int palindrome=0,num=0;

	for(num=number;num;num/=10)
	{
		palindrome = (palindrome*10) + (num%10);
	}
	
	if(number == palindrome)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
