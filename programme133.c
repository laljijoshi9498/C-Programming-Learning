



#include<stdio.h>
main()
{
	static int number=0;

	printf("hiii 1\n");
	number++;

	if(number<=3)
	{
		main();
	}

	printf("hiii 2\n");
}



