#include<stdio.h>

int main()
{
  int arr[10],n,i,small,pos;
  
  printf("\n enter the number of elements in the array");
  scanf("%d",&n);
  printf("enter the elements");
  for(i=0;i<n;i++)
 { 
    scanf("%d",&arr[i]);
    small =arr[0];
    pos=0;
  }
  for(i=1;i<n;i++)
  {
     if(arr[i]<small)
     {
       small=arr[i];
       pos=i;
     }
  }
	printf("\n the smallest element is %d", small);
  printf("\n the position of the smallest element in the array is %d", pos);
  return 0;
}
