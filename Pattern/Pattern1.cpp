/*
Enter the number of rows
5
-------------------------
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
--------------------------
*/
#include <iostream>
using namespace std;
void DisplayPattern(int iNo, int count)
{
    if (count == iNo)
    {
        return;
    }
    count = count + 1;
    for (int i = 1; i <= iNo; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    DisplayPattern(iNo, count);
}
int main()
{
    int Rows = 0;
    int count = 0;
    cout << "Enter the number of rows\n";
    cin >> Rows;

    DisplayPattern(Rows, count);

    return 0;
}