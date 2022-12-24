/*
Enter the number of rows
5
--------------------------
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
--------------------------
*/
#include <iostream>
using namespace std;
void DisplayPattern(int n)
{
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            k++;
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