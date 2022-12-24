/*
Enter the number of rows
6
--------------------------------
          1 
        2 3 2 
      3 4 5 4 3 
    4 5 6 7 6 5 4 
  5 6 7 8 9 8 7 6 5 
6 7 8 9 10 11 10 9 8 7 6
---------------------------------
*/
#include <iostream>
using namespace std;
void DisplayPattern(int n)
{
    int k = 0;
    int m = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1, k = i; j <= n; j++)
        {
            if (i + j >= n + 1)
            {
                cout << k << " ";
                k++;
                m = k;
            }
            else
            {
                cout << " "
                     << " ";
            }
        }
        m = m - 2;
        for (int j = 1; j <= n; j++)
        {
            if ((j != 1) && i >= j)
            {
                cout << m << " ";
                m--;
            }
            else
            {
                continue;
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