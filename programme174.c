



#include<stdio.h>
#pragma pack(4)
struct ONE
{
	int roll;
	char name;
	float mark;
};

main()
{

	printf("%d\n",sizeof(struct ONE));

}
