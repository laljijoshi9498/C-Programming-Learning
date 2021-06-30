



#include<stdio.h>
#include<stdarg.h>

int sum(int num,...);
main()
{
int n1,n2,n3,n4,n5;

	n1 = sum(1);
	n2 = sum(1,1);
	n3 = sum(1,1,1);
	n4 = sum(1,1,1,1);
	n5 = sum(1,1,1,1,1);

printf("%d %d %d %d %d\n",n1,n2,n3,n4,n5);
}

int sum(int num,...)
{
va_list valist;
int number=0,temp=0,sum=0;
	
va_start(valist,num);

	for(temp=0;temp<num;temp++)
	sum = sum+va_arg(valist,int);

va_end(valist);

return sum;
}

