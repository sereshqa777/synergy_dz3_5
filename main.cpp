#include <stdio.h>


main() 
{
	
	printf("========= TASK 1 =========\n");
	printf("1) ");
	int i=1;
	while(i<10)
	{
		printf("Hello ");	
		i=i+1;
	}
	printf("\n");
	
	printf("2) ");
	int n=0;
	while(n<15)
	{
		printf("%i ",n);		
		n=n+1;
	}
	printf("\n");
	
	printf("3) ");
	int c=1;
	while(c<15)
	{
		printf("%i ",c);		
		c=c+2;
	}
	
	printf("\n========= TASK 2 =========\n");
	int s=5;
	int sum=0;
	while(s<15)
	{	
		sum=sum+s;	
		printf("%i + ",s);
		s=s+1;
	}
	sum=sum+s;
	printf("%i = %i",s,sum);
	return 0;
}
