



#include<stdio.h>
#include<stdlib.h>

main()
{
	int *p =0,temp=0;
	
	p = (int*)malloc(sizeof(int)*5);

	printf("enter data\n");
	for(temp=0;temp<5;temp++)
	scanf("%d",&p[temp]);	
	
	//for(temp=0;temp<5;temp++)
	//free(p[temp]);

	for(temp=0;temp<5;temp++)
	printf("*p = %d\n",p[temp]);

	//free(p);
}

