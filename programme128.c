



#include<stdio.h>
#include<string.h>
#define SIZE 8
main()
{
	char stringsource[50],stringdestination[50];
	int length=0;
	
	printf("enter string\n");
	scanf("%[^\n]",stringsource);

	//strcpy(stringdestination,stringsource);

	strncpy(stringdestination,stringsource,SIZE);
	//stringdestination[SIZE+1]='\0';

	printf("destin = %s\n",stringdestination);
}
