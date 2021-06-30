



#include<stdio.h>
main()
{
	int number1=0,number2=0;
	char character=0;

	printf("enter number\n");
	scanf("%d%d",&number1,&number2);
	
	printf("enter task * / + -\n");
	scanf(" %c",&character);

	switch(character)
	{
		case '*':printf("multiplication = %d\n",number1*number2);
				break;
	
		case '/':printf("division = %d\n",number1/number2);
				break;
	
		case '+':printf("addition = %d\n",number1+number2);
				break;

		case '-':printf("substraction = %d\n",number1-number2);
				break;
	
	default : printf("not available option\n");
			break;
	}

}
