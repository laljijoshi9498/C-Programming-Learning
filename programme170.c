



#include<stdio.h>
struct ONE
{
 	int b : 3;
	//unsigned int b:3;
};

main()
{
	struct ONE var;
	
	var.b=7;

	printf("%d\n",var.b);
	//scanf("%d",&var.b);
	printf("size = %d\n",sizeof(struct ONE));
}
