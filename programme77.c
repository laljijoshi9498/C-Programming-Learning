



#include<stdio.h>
main()
{
	char *chptr;
	int *iptr,i=258;

	iptr = &i;
	printf("*iptr = %d\n",*iptr);

	chptr = (char*)&i;
	printf("*chptr = %d\n",*chptr);

	*chptr = 'a';	
	printf("*chptr = %d\n",*chptr);

	printf("*iptr = %d\n",*iptr);
}
