#include <iostream>
using namespace std;
bool checkArmstrong(int iNo)
{
    int iCnt = 0, iTemp = 0, iDigit = 0, iMult = 1, iSum = 0;

    iTemp = iNo;

    while (iTemp != 0)
    {
        iCnt++;
        iTemp = iTemp / 10;
    }
    iTemp = iNo;

    while (iTemp != 0)
    {
        iMult = 1;
        iDigit = iTemp % 10;
        for (int i = 1; i <= iCnt; i++)
        {
            iMult = iMult * iDigit;
        }
        iTemp = iTemp / 10;
        iSum = iSum + iMult;
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

    cout << "Enter the Number to check whether armstrong or not\n";
    cin >> iNo;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    bRet = checkArmstrong(iNo);

    if (bRet == true)
    {
        cout << iNo << " is armstrong number\n";
    }
    else
    {
        cout << iNo << " is not armstrong number\n";
    }
    return 0;
}