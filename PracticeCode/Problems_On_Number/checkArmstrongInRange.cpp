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
void checkArmstrongInRange(int iStart, int iEnd)
{
    for(int i=iStart;i<=iEnd;i++)
    {
        if(checkArmstrong(i))
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int iStart = 0, iEnd = 0;

    cout << "Enter the range\n";
    cin >> iStart >> iEnd;

    checkArmstrongInRange(iStart, iEnd);

    return 0;
}