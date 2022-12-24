#include<iostream>
using namespace std;
#define SIZE 3

int main()
{
    int A[3][3];
    int B[3][3];
    int C[3][3];

    cout<<"For A\n";

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"For B\n";

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>B[i][j];
        }
    }

    cout<<"Subtraction\n";

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            C[i][j]=A[i][j]-B[i][j];
        }
    }

    cout<<"result\n";

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}