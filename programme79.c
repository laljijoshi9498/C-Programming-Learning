



#include<stdio.h>
main()
{
	float number=23.50;
	int *iptr;
	float *fptr;

	fptr = &number;
	iptr = &number;

	printf("*fptr = %f *iptr = %d\n",*fptr,*iptr);
}
