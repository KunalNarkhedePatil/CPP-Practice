#include<iostream>
using namespace std;

int main()
{
    int Arr[10]={1,2,3,4,1,6};
    int ans=0;
    int i=0;
    for(i=0;i<6;i++)
    {
        ans=ans^Arr[i];
        if(ans==0)
        {
            break;
        }
    }
    cout<<Arr[i]<<endl;
    return 0;
}