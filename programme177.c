



#include<stdio.h>

main()
{
	//typedef int ARRAY[5];
	typedef int* IPTR;
	IPTR p;
	int number=0;
	
	p = &number;
 
	printf("%d",*p);


}


