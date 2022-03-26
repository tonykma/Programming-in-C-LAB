#include <stdio.h>
void binarysearch();
int a[20],n;
int main()
{
   binarysearch();
   return 0;
}
void binarysearch()
{
 int i,item,beg,end,mid,pos=-1;
  
  printf("enter the limit of the array");
  scanf("%d",&n);
  printf("enter the elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\n ARRAY \n");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
  printf("\n enter the elements to be search");
  scanf("%d",&item);
  beg=0;
  end=n-1;
  while(beg<=end)
  {
    mid=(beg+end)/2;
    if(a[mid]==item)
    {
     pos=mid;
     printf("successful search... %d found at location %d", item,pos+1);
     break;
    }
    else if(a[mid]>item)
    end=mid-1;
    else
    beg=mid+1;
  }
  if(pos==-1)
  printf("unsuccessful search !! value is not present in the array");
}