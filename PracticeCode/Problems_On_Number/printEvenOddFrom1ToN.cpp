#include <iostream>
using namespace std;
void printEvenOddFrom1ToN(int iNo)
{
    for (int i = 1; i <= iNo; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    for (int i = 1; i <= iNo; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int iNo = 0;

    cout << "Enter the number\n";
    cin >> iNo;

    printEvenOddFrom1ToN(iNo);
    return 0;
}