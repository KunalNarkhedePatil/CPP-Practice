#include<iostream>
using namespace std;

int Binary_Search(int Arr[],int size,int low,int high,int key)
{
    int mid=0;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(Arr[mid]==key)
        {
            return mid;
        }
        else if(key>Arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int Arr[10]={1,2,3,4,5,6,7,8,9};
    int iRet=Binary_Search(Arr,10,0,9,22);
    if(iRet==-1)
    {
        cout<<"element is not present\n";
    }
    else
    {
        cout<<"element present at "<<iRet<<" index\n";
    }
    return 0;
}