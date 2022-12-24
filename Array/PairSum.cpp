#include<iostream>
using namespace std;
void PairSum(int Arr[],int size)
{
   for(int i=0;i<size;i++)
   {
       for(int j=i+1;j<size;j++)
       {
           if(Arr[i]+Arr[j]==5)
           {
              cout<<Arr[i]<<" "<<Arr[j];
           }
       }
       cout<<endl;
   }
   
}
int main()
{
    int Arr[10]={1,2,3,4,5,6,7,8,9,10};
    PairSum(Arr,10);

    return 0;
}