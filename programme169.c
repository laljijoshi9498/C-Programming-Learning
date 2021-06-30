


#include<stdio.h>
struct ONE
{
	int o1;
	int o2;
	char ch;

	struct TWO
	{
		int t1;
		int t2;
	}tvar;
};

main()
{
	struct ONE ovar;
	
	ovar.tvar.t1 = 10;

	printf("%d\n",sizeof(struct ONE));
}
