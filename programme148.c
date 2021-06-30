



#include<stdio.h>

void print1(char (*ptr)[10],int number)
{
	int temp1=0;
	for(temp1 = 0;temp1 < number;temp1++)
	{
		printf("- %s\n",ptr[temp1]);
	}
}

void print2(char **p,int number)
{
	int temp1=0;
	for(temp1 = 0;temp1 < number;temp1++)
	{
		printf("- %s\n",p[temp1]);
	}
}
main()
{
	char string[][10]={"abc","def","ghi","jlk"};
	char *ptr[4]={"ABC","DEF","GHI","JKL"};

	print1(string,4);
	print2(ptr,4);

}
