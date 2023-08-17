#include <iostream>
using namespace std;
bool checkPerfect(int iNo)
{
    int iSum = 0;

    for (int i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            iSum = iSum + i;
        }
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

    bRet = checkPerfect(iNo);

    if (bRet == true)
    {
        cout << iNo << " is perfect number\n";
    }
    else
    {
        cout << iNo << " is not perfect number\n";
    }

    return 0;
}