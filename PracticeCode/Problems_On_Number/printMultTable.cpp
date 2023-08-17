#include <iostream>
using namespace std;
void printTable(int iNo)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << iNo << "*" << i << "=" << iNo * i << endl;
    }
}
int main()
{
    int iNo = 0;

    cout << "Enter the number\n";
    cin >> iNo;
    cout << "Table of " << iNo << " are\n";
    printTable(iNo);
    return 0;
}