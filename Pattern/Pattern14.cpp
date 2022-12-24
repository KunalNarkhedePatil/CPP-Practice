/*
Enter the number of rows
5
-----------------------
A 
B C 
C D E 
D E F G 
E F G H I 
------------------------
*/
#include <iostream>
using namespace std;
void DisplayPattern(int n)
{
    int i = 0, j = 0;
    char ch1 = 'A';
    char ch2 = '\0';
    for (i = 1, ch1 = 'A'; i <= n; i++, ch1++)
    {
        for (j = 1, ch2 = ch1; j <= i; j++, ch2++)
        {
            cout << ch2 << " ";
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