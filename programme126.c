


#include<stdio.h>
#include<stdbool.h>


bool delete_character(char*,char);

main()
{
	char string[50],character=0;

	printf("eneter strign\n");
	scanf("%[^\n]",string);

	printf("eneter character\n");
	scanf(" %c",&character);
	
	delete_character(string,character);

	printf("string - %s\n",string);
}

bool delete_character(char *string,char character)
{
	int temp1=0,temp2=0;

	while(string[temp1])
	{
		if(string[temp1] == character)
		{
			for(temp2=temp1;string[temp2]!='\0';temp2++)
			{
				string[temp2] = string[temp2+1];
			}

		string--;	
		}

	string++;
	}

}

