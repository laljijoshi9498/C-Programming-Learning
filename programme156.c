



#include<stdio.h>
#include<stdlib.h>

main()
{
	int *p =0;
	
	p = (int*)malloc(sizeof(int));

	printf("enter data\n");
	scanf("%d",p);	
	
	//free(p);
	printf("*p = %d\n",*p);

	free(p);
}
