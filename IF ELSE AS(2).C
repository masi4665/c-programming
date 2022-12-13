#include<stdio.h>
main()
{
	int marks;
	
	printf("ENTER MARKS");
	scanf("%d",&marks);
	
	if(marks>80&&marks<=100)
		{
		printf("distriction");
		
		}
	else if(marks>=60&&marks<=80)
	    {
		printf("EXELLENT");
		}	
	else if (marks>=33&&marks<60)
	    {
		printf("first CLASS");
		}
	
	else
	{printf("FAIL");
	}
	
}
