



#include<stdio.h>
#include<string.h>

main()
{
	char stringsource[50],stringdestination[50];
	int check=0;
	char *ptr=0;

	printf("enter string\n");
	scanf("%[^\n]",stringsource);
	printf("enter string\n");
	scanf(" %[^\n]",stringdestination);

	
	ptr=strcat(stringdestination,stringsource);
	
	printf("string = %s\n",ptr);		
}
