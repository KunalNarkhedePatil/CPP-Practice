/*
Enter the number of rows
5
-------------------------------
1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1 
1 2 3 * * * * 3 2 1 
1 2 * * * * * * 2 1 
1 * * * * * * * * 1 
--------------------------------
*/
#include <iostream>
using namespace std;
void DisplayPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j <= n + 1)
            {
                cout << j << " ";
            }
            else
            {
                cout << "*"
                     << " ";
            }
        }
        for (int j = 1; j <= n; j++)
        {
            if (j >= i)
            {
                cout << n - j + 1 << " ";
            }
            else
            {
                cout << "*"
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