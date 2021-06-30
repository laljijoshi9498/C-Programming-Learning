



#include<stdio.h>
main()
{
	char string[50];
	int temp=0;

	printf("enter string\n");
	scanf("%[^\n]",string);

	for(temp=0;string[temp] != '\0';temp++)
	{
		if((string[temp] >= 'a') && (string[temp] <= 'z'))
		{
			string[temp] = string[temp] - 32;
		}
	}

	printf("aftre string = %s\n",string);	

}
