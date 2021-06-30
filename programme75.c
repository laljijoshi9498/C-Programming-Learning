/*



*/

#include<stdio.h>
main()
{
	char *chptr,ch='A';
	int *iptr,i=10;
	float *fptr,f=23.5;

	chptr = &ch;
	printf("%c %c\n",*chptr,ch);

	iptr = &i;
	printf("%d %d\n",*iptr,i);

	fptr = &f;
	printf("%f %f\n",*fptr,f);
	
	*iptr = 100;
	printf("%d %d\n",*iptr,i);

printf("\n");
}
