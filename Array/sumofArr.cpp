#include<iostream>
using namespace std;
int sumofarr(int Arr[],int size)
{
    int isum=0;
    for(int i=0;i<size;i++)
    {
        isum=isum+Arr[i];
    }
    return isum;
}
int main()
{
    int Arr[]={10,20,30,40,50};

    int iRet=sumofarr(Arr,5);
    cout<<"Sumof arr is "<<iRet<<endl;
    return 0;
}