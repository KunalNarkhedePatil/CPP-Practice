#include <iostream>
using namespace std;

int main()
{
    int Arr[3][3];
    cout << "Enter the data into matrix\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> Arr[i][j];
        }
    }
   int flag=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             if((i==j&& (Arr[i][j]!=1)))
            {
                flag=0;
                break;
            }
            else if(i!=j&&Arr[i][j]!=0)
            {
                flag=0;
            }
        }
    }

    if (flag == 1)
    {
        cout << "Matrix is Identity Matrix\n";
    }
    else
    {
        cout << "Matrix is not Identity Matrix\n";
    }
    return 0;
}