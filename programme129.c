



#include<stdio.h>
#include<string.h>
#define SIZE 8
main()
{
	char stringsource[50],stringdestination[50];
	int check=0;
	
	printf("enter string\n");
	scanf("%[^\n]",stringsource);
	printf("enter string\n");
	scanf(" %[^\n]",stringdestination);

	
	check=strcmp(stringsource,stringdestination);
	//check=strncmp(stringsource,stringdestination,5);
	
	if(check < 0)
	{
		printf("stringsource small\n");
	}
	else if(check > 0)
	{
		printf("stringdestination big\n");
	}
	else if(check == 0)
	{
		printf("equal\n");
	}
	
}
