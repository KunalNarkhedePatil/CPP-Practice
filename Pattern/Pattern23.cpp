/*
Enter the number of rows
5
------------------------
        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 
-------------------------
*/
#include <iostream>
using namespace std;
void DisplayPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // for space
        int space = n - i;
        while (space--)
        {
            cout << " "
                 << " ";
        }
        // first triangle

        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        // for 2nd triangle
        int start = i - 1;
        for (int j = start; j >= 1; j--)
        {
            cout << j << " ";
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