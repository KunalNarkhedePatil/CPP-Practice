/*
Enter the number of rows
5
--------------------------
        * 
      *   * 
    *       * 
  *           * 
* * * * * * * * * 
----------------------------
*/
#include <iostream>
using namespace std;
void DisplayPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == n || i + j == n + 1)
            {
                cout << "*"
                     << " ";
            }
            else
            {
                cout << " "
                     << " ";
            }
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                continue;
            }
            if (i != 1 && i == j || j != 1 && i == n)
            {
                cout << "*"
                     << " ";
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