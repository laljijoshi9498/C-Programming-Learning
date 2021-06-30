


#include<stdio.h>
main()
{
	int array[5]={10,20,30,40,50};
	int *ptr;

	int (*p)[3];

	ptr = array;
	p= array;

	printf("%u	%u\n",ptr,*ptr);
	printf("%u	%u	%u\n",p,*p,**p);
}
