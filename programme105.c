



#include<stdio.h>
#define ELEMENT 5
main()
{
	int array1[ELEMENT]={1,2,3,4,5},array2[ELEMENT]={10,20,30,40,50},elementarray1=0,elementarray2=0,temp1=0,temp2=0,variable=0;

	elementarray1=sizeof(array1)/sizeof(array1[0]);
	elementarray2=sizeof(array2)/sizeof(array2[0]);

	for(temp1=0;temp1<elementarray1;temp1++)
	{
		printf("%d\n",array1[temp1]);
	}

	for(temp1=0,temp2=elementarray2-1;temp1<elementarray1;temp1++,temp2--)
	{
		variable = array1[temp1];
		array1[temp1] = array2[temp2];
		array2[temp2] = variable;
	}

	for(temp2=0;temp2<elementarray2;temp2++)
	{
		printf("%d\n",array2[temp2]);
	}

}
