/*

*/

#include<stdio.h>
main()
{
	char character,character1;
	int position=0,var1=0,var2=0;
	
	printf("enter character\n");
	scanf("%c",&character);

	for(position=7;position>=0;position--)
	{
		printf("%d ",(character>>position)&1);
	}
	printf("\n");

	for(var1=0,var2=7;var1<var2;var1++,var2--)
	{
		character1 = (character >> 4) | (character << 4);
	}

	for(position=7;position>=0;position--)
	{
		printf("%d ",(character1>>position)&1);
	}
	printf("\n");

}
