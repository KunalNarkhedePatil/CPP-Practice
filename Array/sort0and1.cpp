#include<iostream>
using namespace std;
void swap(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
void sort(int Arr[],int size)
{
    int start=0;
    int end=size-1;

    while(start<end)
    {
        if(Arr[start]==0)
        {
            start++;
        }
        if(Arr[end]==1)
        {
            end--;
        }
        if(Arr[start]==1 && Arr[end]==0)
        {
            swap(&Arr[start],&Arr[end]);
            start++;
            end--;
        }
    }
}
int main()
{
    int Arr[6]={0,1,1,0,1,0};
    sort(Arr,6);
    for(int i=0;i<6;i++)
    {
        cout<<Arr[i]<<" ";
    }
    return 0;
}