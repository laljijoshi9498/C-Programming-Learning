



#include<stdio.h>
main()
{
	int number=258;
	
	int *iptr;
	char *chptr;

	iptr = &number;
	chptr = (char*)&number;

	printf("&number = %p\n",&number);

	printf("iptr = %p	chptr = %p\n",iptr,chptr);

	printf("iptr+1 = %p	chptr+1 = %p\n",iptr+1,chptr+1);

	//iptr = iptr+1;
	//chptr = chptr+1;

	printf("*iptr = %d	*chptr = %d\n",*iptr,*chptr);
}
