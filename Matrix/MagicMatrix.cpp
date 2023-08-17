#include <iostream>
using namespace std;

int main()
{
    int Arr[3][3];
    cout << "Enter the element in the matrix\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> Arr[i][j];
        }
    }

    int sum1 = 0;
    int sum2 = 0;
    
    int j = 0;
    int b = 0;
    for (int i = 0, a = 1; i < 3; i++, a++)
    {
        sum1 = 0;
        sum2 = 0;
        for (j = 0, b = 1; j < 3; j++, b++)
        {

            sum1 = sum1 + Arr[i][j];
            sum2 = sum2 + Arr[j][i];
            if (i + j == 4)
            {
                sum2 = sum2 + Arr[i][j];
            }
            if (a == b)
            {
                sum1 = sum1 + Arr[i][j];
            }
        }
    }
    if (sum1 == sum2)
    {
        cout << "Its an magic matrix\n";
    }
    else
    {
        cout << "Its an not matrix\n";
    }
    return 0;
}