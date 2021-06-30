



#include<stdio.h>
#include<stdlib.h>

main()
{
	char *p =0;
	
	p = (char*)malloc(sizeof(char)*20);

	printf("enter data\n");
	scanf("%[^\n]",p);	
	
	printf("p = %s\n",p);

	//free(p);
}

