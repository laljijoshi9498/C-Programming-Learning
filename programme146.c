


#include<stdio.h>
main()
{
	int array[5]={10,20,30,40,50};
	int *ptr;

	int (*p)[3];

	ptr = array;
	p= array;

	printf("%d	%d	%d\n",(*p)[0]);
}
