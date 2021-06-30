




#include<stdio.h>
main()
{
	char string1[50],string2[50];
	int temp1=0,temp2=0;

	printf("enter string1\n");
	scanf("%[^\n]",string1);
	printf("enter string2\n");
	scanf(" %[^\n]",string2);

	for(temp1=0;string1[temp1] != '\0';temp1++);
	
	for(temp2=0;string2[temp2]!='\0';temp2++,temp1++)
	{
		string1[temp1]=string2[temp2];
	}
	string1[temp1]='\0';

	printf("after string = %s\n",string1);
}
