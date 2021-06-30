


#include<stdio.h>
struct ONE
{
	char chnum;
	int inum;
	float fnum;
};

main()
{
	int number;
	struct ONE variable1={'A',10,25.25},variable2;
	
	variable2 = variable1;
		
	printf("char = %c\n",variable1.chnum);
	printf("int = %d\n",variable1.inum);
	printf("float = %f\n",variable1.fnum);

	printf("char = %c\n",variable2.chnum);
	printf("int = %d\n",variable2.inum);
	printf("float = %f\n",variable2.fnum);
}
