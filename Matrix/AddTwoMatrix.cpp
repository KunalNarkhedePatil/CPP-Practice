#include<iostream>
using namespace std;

int main()
{
    int A[3][3];
    int B[3][3];
    int C[3][3];

    cout<<"Enter elements in matrix A of size 3x3: \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"Enter elements in matrix A of size 3x3: \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>B[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }

    cout<<"\nSum of matrices A+B = \n";

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