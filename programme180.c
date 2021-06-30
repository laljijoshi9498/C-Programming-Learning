



#include<stdio.h>
enum day {monday,tuseday,wensday,thusday,friday,saturday,sunday};

main()
{
	enum day var;
	
	printf("enter variable\n");
	scanf("%d",&var);

	switch(var)
	{
		case monday : printf("monday\n");
				break;
		
		case tuseday : printf("tuseday\n");
				break;
	
		case wensday : printf("wensday\n");
				break;
	
		case thusday : printf("thusday\n");
				break;
	
		case friday : printf("friday\n");
				break;
	
		case saturday : printf("saturday\n");
				break;

		case sunday : printf("sunday\n");
				break;
	}
}
