#include<iostream>
using namespace std;

int main()
{
    int Arr[3][3];

    cout<<"Enter the element into the matrix\n";

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>Arr[i][j];
        }
    }

    int Lower=1;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i<j)
            {
                if(Arr[i][j]!=0)
                {
                    Lower=0;
                    break;
                }
            }
        }
    }
    if(Lower==1)
    {
        cout<<"Matrix is upper triangular..\n";
    }
    else
    {
       cout<<"Matrix is not upper triangular\n";

    }
    return 0;
}