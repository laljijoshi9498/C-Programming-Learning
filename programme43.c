/*
Write a programme to scan a number and bit position from the user and display in that number that bit position is set or clear ?
*/

#include<stdio.h>
main()
{
	int number=0,position=0;

	printf("enter number and position\n");
	scanf("%d%d",&number,&position);

	number&(1<<position) ? printf("bit set\n") : printf("bit clear\n");	
}
