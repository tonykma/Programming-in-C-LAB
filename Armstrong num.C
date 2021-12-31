#include <stdio.h>
int main(void) 
{
	int n,sum=0,r,temp,c;
	printf("enter a number");
	scanf("%d",&n);  
  temp=n;
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum=sum+c;
		n=n/10; 
	}
	if(sum==temp)
printf("%d is a armstrong num",temp);
else
printf("%d is not a armstrong num",temp);
return 0;
}