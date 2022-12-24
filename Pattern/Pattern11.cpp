/*
Enter the number of rows
5
-------------------------
A B C D E 
B C D E F 
C D E F G 
D E F G H 
E F G H I 
--------------------------
*/
#include <iostream>
using namespace std;
void DisplayPattern(int n)
{
    char ch1 = '\0';
    char ch2 = '\0';
    int i = 0;

    for (i = 1, ch1 = 'A'; i <= n; i++, ch1++)
    {
        ch2 = ch1;
        for (int j = 1; j <= n; j++)
        {
            cout << ch2 << " ";
            ch2++;
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