#include <stdio.h>
int main()
{ 
   int arr[2][2];
   int i,j;
   
   for(i=0;i<2;i++)
   {
     for(j=0;j<2;j++)
     {
       printf("enter a[%d][%d]",i,j);
       scanf("%d",&arr[i][j]);
     }
    }
    printf("\n the array elements are \n");
   for(i=0;i<2;i++)
   {
     printf("\n");
     for(j=0;j<2;j++)
     {
       printf("%d\t",arr[i][j]);
     }
   }
 return 0;
}