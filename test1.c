#include<stdio.h>
main()
{
	void *ptr=0;
	char *chptr=0;
	int *iptr=0;
	float *fptr=0;
	double *dptr=0;

	printf("void pointer size = %d\n",sizeof(*ptr));
	printf("charater pointer size = %d\n",sizeof(*chptr));
	printf("integer pointer size = %d\n",sizeof(*iptr));
	printf("float pointer size = %d\n",sizeof(*fptr));
	printf("double pointer size = %d\n",sizeof(*dptr));
}
