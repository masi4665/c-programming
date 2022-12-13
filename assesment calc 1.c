#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("ENTER THE VALUE :");
	scanf("%d",&a);
	
	printf("ENTER THE VALUE :");
	scanf("%d",&b);
	
	printf("1:ADDITION\n,2:SUBSTRACTION\n,3:MULTIPICATION\n,4:DIVIDED\n :");
	scanf("%d",&c);
	
	switch(c)	
		{
			case 1:
			printf("ADDITION :%d",a+b);
			break;
			
			case 2:
			printf("SUBSTRACTION :%d",a-b);
			break;
			
			case 3:
			printf("MULTIPICATION :%d",a*b);
			break;
			
			case 4:
			printf("DEVIDED :%d",a/b);
			break;
			
			default:
			printf("INVALID NUMBERS :");
			break;
				
			}
	
	
	
}
