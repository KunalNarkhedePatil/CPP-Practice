/*
Enter the number of rows
5
---------------------------
        * 
      * * 
    * * * 
  * * * * 
* * * * * 
---------------------------
*/
#include <iostream>
using namespace std;
void DisplayPattern(int n)
{
    for (int i = 1; i <= n; i++)
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
            cout << "*"
                 << " ";
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