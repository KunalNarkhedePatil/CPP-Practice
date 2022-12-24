#include<iostream>
using namespace std;
void read(int Arr[],int count,int size)
{
    if(count==size)
    {
        return;
    }
    cout<<"Enter the data\n";
    cin>>Arr[count];
    read(Arr,count+1,size);
}
void printArray(int Arr[],int count,int size)
{
    if(count==size)
    {
        return;
    }
   cout<<Arr[count]<<" ";
    printArray(Arr,count+1,size);
}

int main()
{
    int count=0;
    int size=5;
    int Arr[10];
    read(Arr,count,size);
    printArray(Arr,count,size);
    return 0;
}