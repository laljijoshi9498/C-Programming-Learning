/*


*/

#include<stdio.h>
main()
{
	int number=0,temp=1;

	printf("enter number\n");
	scanf("%d",&number);

	while(temp <= 10)
	{
		printf("%d * %d = %d\n",temp,number,temp*number);
	temp++;
	}
}
