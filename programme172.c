



#include<stdio.h>
struct ONE
{
	int i;
	char ch[20];
	float f;
};

struct ONE test(void);

main()
{
	struct ONE var;

	var = test();
	
	printf("%d %s %f\n",var.i,var.ch,var.f);

}

struct ONE test(void)
{
	struct ONE var={10,"lalji",23.50};
	//var = {1,"lalji",23.50};

return var;
}
