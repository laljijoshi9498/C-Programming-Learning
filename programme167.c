

#include<stdio.h>
#include<stdlib.h>

struct STD
{
	int roll;
	char name[10];
	float mark;
};

main()
{
	struct STD *ptr[5];
	int temp=0;
	
	for(temp=0;temp<5;temp++)
	ptr[temp] = malloc(sizeof(struct STD));

	for(temp=0;temp<5;temp++)
	{
		scanf("%d",&ptr[temp]->roll);
		scanf("%s",ptr[temp]->name);
		scanf("%f",&ptr[temp]->mark);
	}


}
