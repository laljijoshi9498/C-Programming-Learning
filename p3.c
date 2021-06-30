



#include<stdio.h>
typedef struct
{
	int roll;
	char name[50];
	float mark;
}Student;

main()
{
	Student Var[5];
	int temp=0;
	FILE *fptr=0;
	
	for(temp=0;temp<5;temp++)
	{
		scanf("%d%s%f",&Var[temp].roll,Var[temp].name,&Var[temp].mark);
	}

	fptr = fopen("data","w");
	if(fptr == 0)
	{
		printf("file not present\n");
		return;
	}
	else
	{
		for(temp=0;temp<5;temp++)
		{
			fwrite(&Var[temp],sizeof(Var[temp]),1,fptr);
		}
	}

}
