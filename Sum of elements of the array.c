#include<stdio.h>
void create();
int main() 
{
  create();
  return 0;
}
void create()
{
  int arr[10],n,i,sum=0;
  
  printf("enter the size of the array");
  scanf("%d",&n);
  printf("enter the elements\n");
  while(i<=n-1)
 { 
    scanf("%d",&arr[i]);
	sum=sum+arr[i];
    i++;
 }
	printf("sum of the elements of the array is %d",sum);
  
}