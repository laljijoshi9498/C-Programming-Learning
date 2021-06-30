/*


*/

#include<stdio.h>
main()
{
	int array[5]={10,20,30,40,50},temp=0,element=0;

	element = sizeof(array)/sizeof(array[0]);

	for(temp=0;temp<element;temp++)
	printf("%d %d %d\n",array[temp],temp[array],*(array+temp));

}
