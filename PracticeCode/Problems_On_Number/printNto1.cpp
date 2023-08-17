#include <iostream>
using namespace std;
void printNto1(int iNo)
{
    int i = iNo;
    while (iNo >= 1)
    {
        cout << iNo << " ";
        iNo--;
    }
}
int main()
{
    int iNo = 0;
    cout << "Enter the number\n";
    cin >> iNo;

    printNto1(iNo);
    return 0;
}