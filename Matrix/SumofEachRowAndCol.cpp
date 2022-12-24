#include<iostream>

using namespace std;

int main()
{
    int sum=0;
    int A[3][3];

    cout<<"Enter the data\n";

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
    }
    int i=0;
    for(i=0;i<3;i++)
    {
        sum=0;
        for(int j=0;j<3;j++)
        {
            sum=sum+A[i][j];
        }
        printf("Sum of elements of Row %d = %d\n", i+1, sum);
    }
    for(i=0;i<3;i++)
    {
        sum=0;
        for(int j=0;j<3;j++)
        {
            sum=sum+A[j][i];
        }
        printf("Sum of elements of column %d = %d\n", i+1, sum);
    }
    return 0;
}