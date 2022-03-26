#include <stdio.h>

int main()
{
 int i,n,item,a[20];
  
  printf("enter the size of the array");
  scanf("%d",&n);
  printf("enter the array elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\n enter the elements to be search");
  scanf("%d",&item);
  for(i=0;i<n;i++)
  {
    if(a[i]==item)
    {
     printf("successful search...... %d found at location %d", item,i+1);
     break;
    }
	 } 
    if(i==n)
  printf("unsuccessful search value is not present in the array", item);

return 0;
}