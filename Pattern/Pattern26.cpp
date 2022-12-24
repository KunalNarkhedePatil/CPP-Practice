/*
Enter the number of rows
5
------------------------
1
1 2       
1   3     
1     4   
1 2 3 4 5 
-------------------------
*/
#include <iostream>
using namespace std;
void DisplayPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i >= j && j == 1) || (i >= j && i == n) || (i == j))
            {
                cout << j << " ";
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