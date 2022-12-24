/*
Enter the number of rows
5
-----------------------
A B C D E 
F G H I J 
K L M N O 
P Q R S T 
U V W X Y 
------------------------
*/
#include <iostream>
using namespace std;
void DisplayPattern(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch++;
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