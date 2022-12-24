#include<iostream>
using namespace std;

int main()
{
    int A[3][3];
    int sum=0;
    cout<<"Enter the data\n";
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
            if(i==j)
            {
               sum=sum+A[i][j];
            }
        }
    }
    cout<<"sum of main diagonal is "<<sum<<endl;
    return 0;
}