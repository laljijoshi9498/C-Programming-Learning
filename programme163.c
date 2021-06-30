


#include<stdio.h>
struct ONE
{
	static char chnum;
	int inum;
	float fnum;
};

main()
{
	int number;
	struct ONE variable1;
	
		
	printf("char = %c\n",variable1.chnum);
	printf("int = %d\n",variable1.inum);
	printf("float = %f\n",variable1.fnum);

}
