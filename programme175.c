



#include<stdio.h>

struct ONE
{
	int roll;
	char name;
	float mark;
};
union U
{
	int roll;
	char name;
	float mark;
};

main()
{
struct ONE o1;
union U u1;

o1.roll = 10;
u1.roll = 10;

	printf("struct size = %d\n",sizeof(struct ONE));
	printf("union size = %d\n",sizeof(union U));


	printf("&roll = %u	&name = %u	&mark = %u\n",&o1.roll,&o1.name,&o1.mark);
	printf("&roll = %u	&name = %u	&mark = %u\n",&u1.roll,&u1.name,&u1.mark);

	printf("%d\n",u1.name);

}
