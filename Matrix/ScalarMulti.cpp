#include<iostream>
using namespace std;

int main()
{
    int A[3][3];

    cout<<"For A\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            A[i][j]=A[i][j]*2;
        }
    }
    cout<<"Result\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}