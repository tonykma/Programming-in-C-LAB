#include<stdio.h>

void create();
void display();
void insert();
void delete();
int arr[10],n;
int main()
{
   int ch;
   
   do{
        printf("\n ARRAY OPERATIONS\n");
        printf("MENU\n1.CREATE\n2.INSERT\n3.DELETE\n4.DISPLAY\n5.EXIT\n");
        printf("enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
         case 1:
         create();
         break;
         case 2:
         insert();
        break;
        case 3:
        delete();
        break;
        case 4:
        display();
        break;
        }
     } while(ch!=5);
return 0;
}
void create()
{
  int i=0;
  printf("enter the size of the array");
  scanf("%d",&n);
  printf("enter the elements");
  while(i<=n-1)
  {
   scanf("%d",&arr[i]);
   i++;
  }
  printf("\n array created");
}
void display()
{
  int i;
  printf("array elements are");
  for(i=0;i<n;i++)
  {
    printf("%d\t",arr[i]);
  }
}
void insert()
{
  int pos,item,i;
  i=n;
  printf("enter the position");
  scanf("%d",&pos);
  printf("enter the elements");
  scanf("%d",&item);
  while(i>=pos)
  {
    arr[i+1]=arr[i];
    i=i-1;
  }
  n=n+1;
  arr[pos]=item;
  printf("\n new ITEM,%d is inserted\n", item);
}
void delete()
{
  int i,item,pos;
  printf("enter the position");
  scanf("%d",&pos);
  i=pos;
  while(i<=n-1)
  {
    arr[i]=arr[i+1];
    i=i+1;
  }
  n=n-1;
  printf("\n %d deleted", item);
}