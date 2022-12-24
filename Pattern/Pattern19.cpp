/*
Enter the number of rows
5
-----------------------
1 1 1 1 1 
  2 2 2 2 
    3 3 3 
      4 4 
        5 
-------------------------
*/
#include <iostream>
using namespace std;
void DisplayPattern(int n)
{
    int k = 1;
    for (int i = n, k = 1; i >= 1; i--, k++)
    {
        // for spaces
        int space = n - i;
        while (space--)
        {
            cout << " "
                 << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
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