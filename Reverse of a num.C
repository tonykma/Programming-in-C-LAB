#include <stdio.h>
int main(void) 
{
	int n,sum=0,r,temp;
	printf("enter the number:");
	scanf("%d",&n);
    temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
}
printf("\n Reverse of %d is %d ", temp,sum);
	return 0;
	}