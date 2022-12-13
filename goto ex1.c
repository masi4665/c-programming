#include<stdio.h>
main()
{
	int n,sum=0,i=0;
	
	printf("ENTER MUMBER :");
	scanf("%d",&n);
	
	lable:
	
	    i++;//i+1  1
	    sum+=i;//sum= sum+i 0=0+1 =1
	    
	    if(i<n)//1<5
	    goto lable;
	    
	    printf("SUM OF %d IS = %d",n,sum);	
	
	
	
}
