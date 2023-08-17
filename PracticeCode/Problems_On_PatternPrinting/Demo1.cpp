#include<iostream>
using namespace std;

int main()
{
    int *Arr=NULL;
    int Size=5;
    Arr=new int[Size];

    cout<<"Enter the element in arr\n";
    for(int i=0;i<Size;i++)
    {
        cin>>Arr[i];
    }
    cout<<"Print elemnt in the array\n";
    for(int i=0;i<Size;i++)
    {
        cout<<Arr[i]<<" "<<endl;
    }
}