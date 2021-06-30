


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
	struct ONE variable1;
	
	printf("enter character\n");
	scanf("%c",&variable1.chnum);
		
	printf("enter integer\n");
	scanf("%d",&variable1.inum);
	
	printf("enter float\n");
	scanf("%f",&variable1.fnum);
	
	printf("char = %c\n",variable1.chnum);
	printf("int = %d\n",variable1.inum);
	printf("float = %f\n",variable1.fnum);

}
