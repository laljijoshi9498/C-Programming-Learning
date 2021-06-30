

#include<stdio.h>
static int number=10;
int * abc(void);

main()
{
	static int number=20;
	int *ptr;

	printf("number = %d\n",number);

	ptr = abc();
	printf("number = %d\n",*ptr);
}

int * abc(void)
{
	return &number;

}
