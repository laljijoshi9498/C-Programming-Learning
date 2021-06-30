



#include<stdio.h>
#define SWAP(num1,num2) {int temp;\
				temp = num1;\
				num1 = num2;\
				num2 = temp;}

main()
{
	int num1=10,num2=20;

	SWAP(num1,num2);

	printf("%d %d\n",num1,num2);
}
