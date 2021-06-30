



#include<stdio.h>
main()
{
	int number=10;
	
	const int *p;
	int *q;

	p=q=&number;

printf("number = %d *p = %d *q = %d\n",number,*p,*q);

	*q = 20;

printf("number = %d *p = %d *q = %d\n",number,*p,*q);
}
