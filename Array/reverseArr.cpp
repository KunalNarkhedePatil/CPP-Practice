#include<iostream>
using namespace std;
void Swap(int *p1,int *p2)
{
   int temp=*p1;
   *p1=*p2;
   *p2=temp;
}
void reverseArr(int Arr[],int isize)
{
    int start=0;
    int end=isize-1;

    for(int i=0;i<isize;i++)
    {
         if(start<end)
         {
            swap(Arr[start],Arr[end]);
            start++;
            end--;
         }
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
    int Arr[]={1,2,3,4,5,6};

    reverseArr(Arr,6);
    printArray(Arr,6);

    return 0;
}