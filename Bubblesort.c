#include <stdio.h>
int main()
{
  int a[20],i,j,m,n;
  
  printf("enter the size of the array");
  scanf("%d",&n);
  printf("enter the array elements");
  for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
     for(j=i+1;j<n;j++)
     {
        if(a[i]>a[j])
        {
           m=a[i];
           a[i]=a[j];
           a[j]=m;
        }
     }
  }
printf("elements in ascending order\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}