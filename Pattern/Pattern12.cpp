/*
Enter the number of rows
5
------------------------
A 
B B 
C C C 
D D D D 
E E E E E 
-------------------------
*/
#include <iostream>
using namespace std;
void DisplayPattern(int n)
{
    int i = 0;
    int j = 0;
    char ch = 'A';
    for (i = 1, ch = 'A'; i <= n; i++, ch++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
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