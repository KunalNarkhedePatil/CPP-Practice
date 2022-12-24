#include<iostream>
using namespace std;

int main()
{
    int A[3][3];

    cout<<"Enter the data\n";
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"Result\n";
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(A[i][j]==2)
            {
                sum=sum+A[i][j];
            }
        }
    }
    cout<<"Sum of minor Matrix is "<<sum<<endl;

    return 0;
}