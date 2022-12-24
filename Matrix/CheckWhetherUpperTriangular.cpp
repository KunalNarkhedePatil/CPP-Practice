#include<iostream>
using namespace std;

int main()
{
    int Arr[3][3];
    cout<<"Enter the input for matrix\n";

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>Arr[i][j];
        }
    }
    int Upper=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if((i>j&& (Arr[i][j]!=0)))
            {
                Upper=0;
                break;
            }
        }
    }
    if(Upper==1)
    {
        cout<<"Matrix is upper triangular..\n";
    }
    else
    {
        cout<<"Matrix is not upper triangular\n";
    }
    return 0;
}