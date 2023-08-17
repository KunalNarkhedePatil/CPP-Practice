#include <iostream>
using namespace std;
int FindMin(int iNo1, int iNo2)
{
    if (iNo1 < iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}
int FindGCD(int iNo1, int iNo2)
{
    int HCF = 1, iMin = 0;

    iMin = FindMin(iNo1, iNo2);

    for (int i = 1; i <= iMin; i++)
    {
        if (iNo1 % i == 0 && iNo2 % i == 0)
        {
            HCF = i;
        }
    }
    return HCF;
}
int main()
{
    int iNo1 = 0, iNo2 = 0, iRet = 0;

    cout << "Enter the first number\n";
    cin >> iNo1;

    cout << "Enter the second number\n";
    cin >> iNo2;

    iRet = FindGCD(iNo1, iNo2);
    cout << "HCF of " << iNo1 << " and " << iNo2 << " is " << iRet << endl;
    return 0;
}