#include<iostream>
using namespace std;
void swap(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
void reverseArrusingrecursion(int Arr[],int start,int end)
{
   if(start>end)
   {
      return;
   }
   swap(&Arr[start],&Arr[end]);
   reverseArrusingrecursion(Arr,start+1,end-1);
   
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
    int Arr[5]={10,20,30,40,50};
    printArray(Arr,5);
    cout<<endl;
    reverseArrusingrecursion(Arr,0,4);
    printArray(Arr,5);
    return 0;
}