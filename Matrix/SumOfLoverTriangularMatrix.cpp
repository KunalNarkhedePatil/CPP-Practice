#include<iostream>

using namespace std;

int main()
{
    int Arr[3][3];
    int sum=0;
    cout<<"Enter the data into the Matrix\n";

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>Arr[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i>j)
            {
               sum=sum+Arr[i][j];
            }
        }
    }
    cout<<"Sum of lower triangular matrix is "<<sum<<endl;

    return 0;
}