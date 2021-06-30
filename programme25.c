



#include<stdio.h>
main()
{
	int number1=10,number2=20,number3=30,number4=40,number5=50,result=0;	
	
	result = number1&&number2||(number3=300)&&(number4=400)||(number5=500);

	printf("number1 = %d\nnumber2 = %d\nnumber3 = %d\nnumber4 = %d\nnumber5 = %d\n",number1,number2,number3,number4,number5);

	printf("result = %d\n",result);
}
