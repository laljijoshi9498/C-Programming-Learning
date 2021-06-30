/*



*/

#include<stdio.h>
main()
{
	char ch,*chptr;
	int i,*iptr;
	float f,*fptr;
	double d,*dptr;

	printf("size char = %d %d\n",sizeof(ch),sizeof(*chptr));
	printf("size int = %d %d\n",sizeof(i),sizeof(*iptr));
	printf("size float = %d %d\n",sizeof(f),sizeof(*fptr));
	printf("size double = %d %d\n",sizeof(d),sizeof(*dptr));
}
