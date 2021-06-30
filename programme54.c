



#include<stdio.h>
main()
{
	int number=0,position=31,setbit=0;

	printf("enter number\n");
	scanf("%d",&number);

	for(position=31;position>=0;position--)
	{
		printf("%d ",(number>>position)&1);

		if(((number>>position)&1) == 1)
		{
			setbit++;
		}
	}

printf("\n");
printf("setbit = %d\nclear bit = %d\n",setbit,32-setbit);
}
