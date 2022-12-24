#include<iostream>
using namespace std;
bool LinearSearch(int Arr[],int size,int key)
{
    int flag=false;
    for(int i=0;i<size;i++)
    {
        if(Arr[i]==key)
        {
            flag=true;
            break;
        }
    }
    if(flag==true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int Arr[5]={10,20,30,40,50};
    if(LinearSearch(Arr,5,30))
    {
        cout<<"present\n";
    }
    else
    {
        cout<<"not present\n";
    }
}