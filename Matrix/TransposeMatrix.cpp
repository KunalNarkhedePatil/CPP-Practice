#include<iostream>
using namespace std;

int main()
{
    int Arr[3][3];

    cout<<"Enter the data into matrix\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>Arr[i][j];
        }
    }
    cout<<"Oringial Matrix\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<Arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int Brr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            Brr[i][j]=Arr[j][i];
        }
    }
    cout<<"Transpose Matrix\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<Brr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}