/*
Enter the number of rows
5
------------------------
1 2 3 4 5 
  2 3 4 5 
    3 4 5 
      4 5 
        5 
-------------------------        
*/
#include <iostream>
using namespace std;
void DisplayPattern(int n)
{
    int k = 1;
    int space;
    for (int i = n; i >= 1; i--)
    {
        space = n - i;
        k = space + 1;
        while (space--)
        {
            cout << " "
                 << " ";
        }
        for (int j = k; j <= n; j++)
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