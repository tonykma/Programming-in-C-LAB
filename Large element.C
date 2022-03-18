#include<stdio.h>

int main()
{
  int arr[10],n,i,lar,pos;

  printf("\n enter the number of elements in the array");
  scanf("%d",&n);
  printf("enter the elements");
  for(i=0;i<n;i++)
 { 
    scanf("%d",&arr[i]);
    lar=arr[0];
    pos=0;
  }
  for(i=1;i<n;i++)
  {
     if(arr[i]>lar)
     {
       lar=arr[i];
       pos=i;
     }
  }
	printf("\n the largest element is %d",lar);
  printf("\n the position of the largest element in the array is %d", pos);
return 0;
}