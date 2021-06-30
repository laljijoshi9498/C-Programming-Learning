/*
not working properly
*/


#include<stdio.h>
main()
{
	char variable =0,string1[50],character1=0,character2=0;
	int temp1=0,temp2=0;

	printf("enter string1\n");
	scanf("%[^\n]",string1);
	printf("enter character\n");
	scanf(" %c",&character1);
	scanf(" %c",&character2);

	for(temp1=0;string1[temp1] != '\0';temp1++)
	{
		if(string1[temp1] == character1)
		{
			for(temp2=0;string1[temp2] != '\0';temp2++)
			{
				if(string1[temp2] == character2)
				{
					variable = string1[temp1];
					string1[temp1] = string1[temp2];
					string1[temp2] = variable;
					break;	
				}
				else
				{
					continue;
				}
			}
		}
	}

	printf("after string = %s\n",string1);
}
