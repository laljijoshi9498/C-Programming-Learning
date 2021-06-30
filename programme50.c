/*
*/


#include<stdio.h>
main()
{
// forward goto jump

	printf("1\n");
	goto L1;
	
	printf("2\n");
	
	L1:
	
	printf("3\n");
	
/*
// backward goto jump
	printf("1\n");
		L1:
		printf("2\n");
	
		printf("3\n");	
		goto L1;
	
	printf("4\n");	
*/
}
