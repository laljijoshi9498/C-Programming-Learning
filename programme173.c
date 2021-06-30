



#include<stdio.h>
#include<stdlib.h>

struct STD
{
	int roll;
	char name[10];
	float mark;
};

struct STD* memoryallocate(struct STD*);

main()
{
	struct STD *ptr;

	ptr = memoryallocate(ptr);

	printf("enter data\n");
	scanf("%d%s%f",&ptr->roll,ptr->name,&ptr->mark);

	printf("%d %s %f\n",ptr->roll,ptr->name,ptr->mark);

}

struct STD* memoryallocate(struct STD *ptr)
{

	ptr = malloc(sizeof(struct STD));

return ptr;
}
