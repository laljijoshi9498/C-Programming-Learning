


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
	struct STD *ptr;
	
	ptr = malloc(sizeof(struct STD));

	printf("Enter data\n");
	scanf("%d",&ptr->roll);
	scanf("%s",ptr->name);
	scanf("%f",&ptr->mark);
	
	printf("%d	%s	%f\n",ptr->roll,ptr->name,ptr->mark);
}
