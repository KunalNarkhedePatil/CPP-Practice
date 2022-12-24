/*
Enter the number of rows
5
---------------------
A 
B C 
D E F 
G H I J 
K L M N O
-----------------------
*/
#include <iostream>
using namespace std;
void DisplayPattern(int n)
{
    int i = 0;
    int j = 0;
    char ch1 = 'A';

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << ch1 << " ";
            ch1++;
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