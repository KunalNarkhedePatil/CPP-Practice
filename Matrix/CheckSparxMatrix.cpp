#include<iostream>
using namespace std;

int main()
{
    int Arr[3][3];
    int numZero=0;
    int numOther=0;

    cout<<"Enter the element into matrix\n";

    for(int  i=0;i<3;i++)
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
            if(Arr[i][j]==0)
            {
               numZero++;
            }
            else
            {
                numOther++;
            }
        }
    }
    if(numZero>=numOther)
    {
       cout<<"Matrix is Sparx Matrix\n";
    }
    else
    {
       cout<<"Matrix is not Sparx Matrix\n";
    }
    return 0;
}