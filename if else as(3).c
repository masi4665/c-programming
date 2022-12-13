 #include<stdio.h>
 main()
 {
 	int marks;
 	
 	printf("ENTER YOUR MARKS");
 	scanf("%d",&marks);
 	
 	if(marks>75&&marks<=100)
 	{
 		printf("YOU ARE BRILLIANT");
	}
 	
 	else if(marks>50&&marks<75)
 	{
 		printf("YOU ARE GOOD");
	}
	
	else if(marks>33&&marks<=50)
	{
		printf("KEEP GOING");
	}
 	
 	else
 	{
 		printf("YOU ARE FAIL");
 		
	}
 	
 	
 	
 	
}
