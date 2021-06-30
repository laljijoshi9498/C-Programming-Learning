



#include<stdio.h>
#include<string.h>

main()
{
	char *ptr=0,stringsource[50],character=0;
	
	printf("enter string\n");
	scanf("%[^\n]",stringsource);
	printf("enter character\n");
	scanf(" %c",&character);

	//ptr = strchr(stringsource,character);
	ptr = strrchr(stringsource,character);
	
	if(ptr==0)
	{
		printf("character not found\n");
	}
	else
	{
		printf("address = %p\n",stringsource);
		printf("character address = %p\n",ptr);	
		printf("character = %c\n",*ptr);
	}

}
