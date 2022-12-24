#include<iostream>
using namespace std;

int main()
{
    int A[3][3];
    int B[3][3];

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
    int flag=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           if(A[i][j]!=B[i][j])
           {
              flag=0;
              break;
           }
        }
    }
    if(flag==1)
    {
        cout<<"Equal\n";
    }
    else
    {
        cout<<"Not Equal\n";
    }
    return 0;
}