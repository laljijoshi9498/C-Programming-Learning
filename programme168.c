


#include<stdio.h>
struct ONE
{
	int o1;
	int o2;
	int o3;
};

struct TWO
{
	int t1;
	int t2;
	int t3;
	struct ONE v1;

};


main()
{
	struct ONE ovar;
	struct TWO tvar;
	
	printf("%d\n",tvar.v1.o1);
}

