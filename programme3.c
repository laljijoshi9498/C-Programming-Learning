



#include<stdio.h>
main()
{
	printf("signed char size = %d\n",sizeof(signed char));	
	printf("unsigned char size = %d\n",sizeof(unsigned char));	

	printf("short signed int size = %d\n",sizeof(short signed int));
	printf("short unsigned int size = %d\n",sizeof(short unsigned int));
		
	printf("long signed int size = %d\n",sizeof(long signed int));
	printf("long unsigned int size = %d\n",sizeof(long unsigned int));

	printf("long long signed int size = %d\n",sizeof(long long signed int));
	printf("long long  unsigned int size = %d\n",sizeof(long long unsigned int));

	printf("float size = %d\n",sizeof(float));
	printf("double size = %d\n",sizeof(double));
	printf("long double size = %d\n",sizeof(long double));
}
