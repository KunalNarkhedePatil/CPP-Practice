#include<iostream>
using namespace std;
int Display(int Arr[],int isize)
{
    int isum=0;
    for(int i=0;i<isize;i++)
    {
        isum=isum+Arr[i];
    }
    return isum;
}
int main()
{
    int Arr[5]={1,2,3,4,5};

    cout<<"Sum of array\n"<<Display(Arr,5);

    return 0;
}