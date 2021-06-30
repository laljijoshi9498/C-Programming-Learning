/*

*/


#include<stdio.h>
main()
{
	int number=0,position=31;

	printf("enter number\n");
	scanf("%d",&number);

	
	L1:
	//printf("%d ",number&(1<<position));
	printf("%d ",(number>>position)&1);
	position--;
	
	if(position >= 0)
	goto L1;

printf("\n");
}
