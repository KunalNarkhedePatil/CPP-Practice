//delete duplicate in array
#include<stdio.h>
#include<stdlib.h>
void DeleteElement(int *Arr,int iSize,int iPos)
{
   for(int i=iPos;i<iSize-1;i++)
   {
       Arr[i]=Arr[i+1];
   }
   
}
void DeleteDuplicate(int *Arr,int iSize)
{
   for(int i=0;i<iSize;i++)
   {
      for(int j=i+1;j<iSize;j++)
      {
         if(Arr[i]==Arr[j])
         {
              int iPos=j;
              DeleteElement(Arr,iSize,iPos);
              iSize--; 
         }
      }
   }
   printf("After Delelting the elements \n");
   for(int i=0;i<iSize;i++)
   {
      printf("%d ",Arr[i]);
   }
}
int main()
{
    int iSize=0;
    int *Arr=NULL;

    printf("Enter the number of elment in the array\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(sizeof(int)*iSize);

    printf("Enter the element in the array\n");

    for(int i=0;i<iSize;i++)
    {
       scanf("%d",&Arr[i]);
    }
    DeleteDuplicate(Arr,iSize);

    return 0;
}