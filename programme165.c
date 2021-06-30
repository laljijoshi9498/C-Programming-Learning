



#include<stdio.h>
struct ONE
{
	int Number;
	char Name[50];
	float Mark;
};

main()
{
	struct ONE var,*ptr;
		
	printf("%d %s %f\n",var.Number,var.Name,var.Mark);
	printf("%d %s %f\n",ptr->Number,ptr->Name,ptr->Mark);
}
