/*


*/

#include<stdio.h>
main()
{
	int array[5]={10,20,30,40,50},element=0,temp=0;
	char *pointer=0;
	
	element = sizeof(array)/sizeof(array[0]);

	pointer = (char*)array;

	for(temp=0;temp<element;temp++)
	printf("%d\n",pointer[temp]);
}
