/*


*/

#include<stdio.h>
main()
{
	int number=0,position=31;

	printf("enter number\n");
	scanf("%d",&number);

	while(position >= 0)
	{
		printf("%d ",(number>>position)&1);
	position--;
	}

printf("\n");
}
