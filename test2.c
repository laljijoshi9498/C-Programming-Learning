


#include<stdio.h>
int * abc(void);

main()
{
	int *ptr;
	
	ptr=abc();

	printf("%d\n",*ptr);
}

int * abc(void)
{
	int number=10;

	return &number;
}
