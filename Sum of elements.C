#include <stdio.h>
int main(void) 
{
   int n,sum=0,a[50],i;
   printf("enter the size of array");
   scanf("%d",&n);  
   printf("enter array elements");
  for(i=0;i<n;i++)
  {
	  scanf("%d",&a[i]);
  }  
   for(i=0;i<n;i++)
  {
	  sum=sum+a[i]; 
  } 
  printf("the sum of array element %d is",sum);
  return 0;
}
