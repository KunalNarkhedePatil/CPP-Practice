#include<iostream>
using namespace std;
void deleteelement(int Arr[],int ipos,int size)
{
   for(int i=ipos-1;i<size;i++)
   {
      Arr[i]=Arr[i+1];
   }
}

void printArray(int Arr[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        cout<<Arr[i]<<" ";
    }
}

int main()
{
    int Arr[5]={1,2,3,4,5};
    deleteelement(Arr,3,4);
    printArray(Arr,4);
    return 0;
}