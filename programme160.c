


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
	struct ONE variable;
	
	variable.chnum = 'a';
	variable.inum = 10;
	variable.fnum = 23.50;
		
	printf("char = %c\n",variable.chnum);
	printf("int = %d\n",variable.inum);
	printf("float = %f\n",variable.fnum);

}
