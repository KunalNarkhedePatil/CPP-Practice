#include <iostream>
using namespace std;
int FindFactorial(int iNo)
{
    int iMult = 1;

    for (int i = 1; i <= iNo; i++)
    {
        iMult = iMult * i;
    }
    return iMult;
}
bool checkStrongNumber(int iNo)
{
    int iDigit = 0, iTemp = 0, iSum = 0;
    iTemp = iNo;
    while (iTemp != 0)
    {
        iDigit = iTemp % 10;
        iSum = iSum + FindFactorial(iDigit);
        iTemp = iTemp / 10;
    }
    if (iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iNo = 0;
    bool bRet = false;

    cout << "Enter the number\n";
    cin >> iNo;

    bRet = checkStrongNumber(iNo);

    if (bRet == true)
    {
        cout << iNo << " is strong number\n";
    }
    else
    {
        cout << iNo << " is not strong number\n";
    }
    return 0;
}