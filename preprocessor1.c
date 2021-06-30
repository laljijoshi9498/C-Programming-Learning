



#include<stdio.h>
#define SUM(x,y) x+y
#define PF printf

int sum(int a,int b)
{
	return a + b;
}

main()
{
	int num1=0,num2=0,r=0;
	
	printf("enter number\n");
	scanf("%d%d",&num1,&num2);

	r = SUM(num1,num2);
	PF("%d",r);
	
	r = sum(num1,num2);
	PF("%d",r);
}
