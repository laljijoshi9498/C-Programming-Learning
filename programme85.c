



#include<stdio.h>
main()
{
	char ch='a';
	int i=10;
	float f=23.50;
	double d=50.50;

	void *ptr;
	
	ptr = (char*)&ch;
	printf("*ptr = %c\n",*(char*)ptr);

	ptr = (int*)&i;
	printf("*ptr = %d\n",*(int*)ptr);

	ptr = (float*)&f;
	printf("*ptr = %f\n",*(float*)ptr);

	ptr = (double*)&d;
	printf("*ptr = %f\n",*(double*)ptr);
}
