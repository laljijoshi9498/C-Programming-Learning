



#include<stdio.h>
struct ONE
{
	int roll;
	char name[10];
	float mark;
};

void passing1(struct ONE);
void passing2(struct ONE *);

main()
{
	struct ONE var1,var2;
	
	passing1(var1);
	passing2(&var2);
	


}

void passing2(struct ONE *var2)
{
	printf("%d %s %f\n",var2->roll,var2->name,var2->mark);
}

void passing1(struct ONE var1)
{
	printf("%d %s %f\n",var1.roll,var1.name,var1.mark);
}
