/*
Enter the number of rows
5
-----------------------------
A B C D E 
A B C D E 
A B C D E 
A B C D E 
A B C D E 
-----------------------------
*/
#include <iostream>
using namespace std;
void DisplayPattern(int n)
{
    char ch = '\0';
    int j = 0;
    for (int i = 1; i <= n; i++)
    {
        for (j = 1, ch = 'A'; j <= n; j++, ch++)
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