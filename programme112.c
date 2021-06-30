



#include<stdio.h>
main()
{
	char string1[50],variable = 0;
	int temp1=0,temp2=0;

	printf("enter string\n");
	scanf("%[^\n]",string1);

	printf("befor string = %s\n",string1);

	for(temp2=0;string1[temp2] != '\0';temp2++);

	for(temp1=0,temp2=temp2-1;temp1<temp2;temp1++,temp2--)
	{
		variable = string1[temp1];
		string1[temp1] = string1[temp2];
		string1[temp2] = variable;
	}
	
	printf("after string = %s\n",string1);


printf("\n");
}
