



#include<stdio.h>
main()
{
	char first[50],second[50];
	int temp=0;

	printf("enter string1\n");
	scanf("%[^\n]",first);

	printf("enter string2\n");
	scanf(" %[^\n]",second);

	//for(temp=0;first[temp]==second[temp];temp++);
	
	for(temp=0;first[temp];temp++)
	{
		if(first[temp] != second[temp])
		break;
	}

	if(first[temp] == second[temp])
	{
		printf("equal\n");
	}
	else
	{
		printf("not equal\n");
	}

}
