/*
Enter the number
7
---------------------------------
      1
     1 2
    1 2 3
   1 2 3 4
  1 2 3 4 5
 1 2 3 4 5 6
1 2 3 4 5 6 7
----------------------------------
*/
#include <iostream>
using namespace std;

void DisplayPattern(int Rows)
{
    for (int i = 1; i <= Rows; i++)
    {
        for (int j = 1, k = 1; j <= Rows; j++, k++)
        {
            if (i + j >= Rows + 1)
            {
                cout << k << " ";
            }
            else
            {
                cout << " ";
                k = k - 1;
            }
        }
        cout << endl;
    }
}
int main()
{
    int Row = 0;
    cout << "Enter the number\n";
    cin >> Row;

    DisplayPattern(Row);
    return 0;
}