



#include<stdio.h>
#define MUL(x,y) (x)*(y)
#define PF printf

int mul(int a,int b)
{
	return a * b;
}

main()
{
	int num1=0,num2=0,r=0;
	
	printf("enter number\n");
	scanf("%d%d",&num1,&num2);

	r = MUL(num1+2,num2+2);
	PF("%d",r);
	
	r = mul(num1,num2);
	PF("%d",r);
}
