/*
Enter the number of rows
5
---------------------
1 2 3 4 5 
2     5   
3   5     
4 5       
5
----------------------
*/
#include <iostream>
using namespace std;
void DisplayPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i == 1))
            {
                cout << j << " ";
            }
            else if (j == 1)
            {
                cout << i << " ";
            }
            else if (i + j == n + 1)
            {
                cout << i + j - 1 << " ";
            }
            else
            {
                cout << " "
                     << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int Rows = 0;

    cout << "Enter the number of rows\n";
    cin >> Rows;

    DisplayPattern(Rows);
    return 0;
}