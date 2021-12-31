#include <stdio.h>
int main(void)
{
	int a=0,b=1,c,n,i;
	printf("enter limit:");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
	   printf("%d\t",a);
       c=a+b;
	   a=b;
	   b=c; 	
	}  
	return 0;
}