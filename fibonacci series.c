#include<stdio.h>
main()
{
	int i,n,t1=0,t2=1,t3;
	t3=t1+t2;
	
	printf("ENTER THE NUMBER :");
	scanf("%d",&n);
	
	printf("FIBONACCI SERIES =%d %d",t1,t2);
	
	for(i=3;i<=n;i++)
	{
		printf("%d",t3);
		t1=t2;
		t2=t3;
		t3=t1+t2;
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
