#include<iostream>
using namespace std;
int BinarySearch(int Arr[],int key,int size)
{
    int mid=0;
    int s=0;
    int e=size-1;

    while(s<=e)
    {
       mid=(s+e)/2;

       if(Arr[mid]==key)
       {
        return mid;
       }
       else if(key>Arr[mid])
       {
          s=mid+1;
       }
       else
       {
         e=mid-1;
       }
    }
    return -1;
}
int main()
{
    int Arr[9]={1,2,3,4,5,6,7,8,9};
    int key=7;

    cout<<key<<" is present on "<<BinarySearch(Arr,key,9);
    return 0;
}